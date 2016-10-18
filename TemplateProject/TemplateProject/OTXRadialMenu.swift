//
//  OTXRadialMenu.swift
//  TemplateProject
//
//  Created by Mathew Southin on 2016-10-11.
//  Copyright © 2016 Otoxo. All rights reserved.
//

import UIKit

public class OTXRadialMenu: UIView {
    
    //Private vars
    private var originButton: UIButton!

    private var subButtons : Array<UIButton> = [] {
        didSet{
            calculateSpacing()
        }
    }
    
    private var radius: Double = 100
    private var degreesBetweenButtons: Measurement<UnitAngle> = Measurement(value: 20, unit: UnitAngle.degrees)
    private var startAngle = Measurement(value: 270, unit: UnitAngle.degrees)
    private var circumference = Measurement(value: 180, unit: UnitAngle.degrees) {
        didSet {
            calculateSpacing()
        }
    }
    private var radialButtonAnimator: UIViewPropertyAnimator!
    
    // MARK: Public API
    
    required public init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        setup()
    }
    
    public override init(frame: CGRect) {
        super.init(frame: frame)
        setup()
    }
    
    /**
     Set the orignal button that opens the sub menu
     
     - parameter UIButton: the original button
    */
    
    public func setOriginButton(originButton: UIButton) -> Self {
        self.originButton = originButton
        return self
    }
    
    /**
     Set the sub menu buttons
     
     -parameter Array: the sub menu buttons
    */
    
    public func setSubMenuButtons(subMenuButtons: Array<UIButton>) -> Self {
        self.subButtons = subMenuButtons
        return self
    }
    
    
    // MARK: Private API
    
    func setup(){
        
        originButton.center = center
        self.addSubview(self.originButton)

        let firstButton : UIButton = UIButton()
        firstButton.setImage(UIImage.init(named: "pni-ico-gphotos.png"), for: UIControlState.normal)
        subButtons.append(firstButton)
        
        for subButton in self.subButtons {
            self.addSubview(subButton)
        }
        
    }
    
    func calculateSpacing(){
        
        var buttonCount = subButtons.count

        if buttonCount > 0 {
            
            if circumference.value < 360 {
                buttonCount -= 1
            }
             degreesBetweenButtons = Measurement(value: circumference.value / Double(buttonCount), unit: UnitAngle.degrees)

        }
    }
    
    func animateMenu (){
        
    }
    
    }


    

