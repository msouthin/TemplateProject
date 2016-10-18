//
//  ViewController.swift
//  TemplateProject
//
//  Created by Mathew Southin on 2016-10-04.
//  Copyright © 2016 Otoxo. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var firstTabBar: UITabBar!
    @IBOutlet weak var secondTabBar: UITabBar!
    @IBOutlet weak var scrollView: UIScrollView!
    @IBOutlet weak var firstButton: UIButton!
    
    var objectCenter: CGPoint!

    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.firstButton.addGestureRecognizer(UIPanGestureRecognizer(target: self, action: #selector(self.dragObject)))
    

        //Using settings from Settings.bundle
        //self.boolean = NSUserDefaults.standardUserDefaults().boolForKey("enabled_preference")
        
        //Localization
//        let exampleText =  NSLocalizedString("Example", comment: "comment describing what its used for")
        
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    @IBAction func openMenu(_ sender: AnyObject) {
        
        let selectedDate = Date(timeInterval: 60, since: Date())
        let delegate = UIApplication.shared.delegate as? AppDelegate
        delegate?.scheduleNotification(at: selectedDate)
        
        UIView.animate(withDuration: 0.3, delay: 0.0, options: [.curveEaseIn, .showHideTransitionViews], animations: {
            self.secondTabBar.isHidden = !self.secondTabBar.isHidden

            }, completion: nil)

    }
    
    @IBAction func openRadialMenu(_ sender: AnyObject) {
        
    }
    
    func dragObject(gesture: UIPanGestureRecognizer) {
        let target = gesture.view!
        
        switch gesture.state {
        case .began, .ended:
            objectCenter = target.center
        case .changed:
            let translation = gesture.translation(in: self.view)
            target.center = CGPoint(x: objectCenter!.x + translation.x, y: objectCenter!.y + translation.y)
        default: break
        }
    }

}

