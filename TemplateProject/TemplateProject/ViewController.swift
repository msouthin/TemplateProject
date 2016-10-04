//
//  ViewController.swift
//  TemplateProject
//
//  Created by Mathew Southin on 2016-10-04.
//  Copyright © 2016 Otoxo. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        //Using settings from Settings.bundle
        //self.boolean = NSUserDefaults.standardUserDefaults().boolForKey("enabled_preference")
        
        //Localization
        let exampleText =  NSLocalizedString("Example", comment: "comment describing what its used for")
        
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

