//
//  PermissionViewController.swift
//  TemplateProject
//
//  Created by Mathew Southin on 2016-10-18.
//  Copyright © 2016 Otoxo. All rights reserved.
//

import UIKit

class PermissionViewController: PAPPermissionsViewController {

    let microphoneCheck = PAMicrophonePermissionsCheck()
    let cameraCheck = PACameraPermissionsCheck()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //Custom settings
        self.locationCheck.requestAlwaysAuthorization = true
        
        
        let permissions = [
            PAPermissionsItem.itemForType(.microphone, reason: "Required to hear your beautiful voice")!,
            PAPermissionsItem.itemForType(.camera, reason: "Required to shoot awesome photos")!]
        
        let handlers = [
            PAPermissionsType.microphone.rawValue: self.microphoneCheck,
            PAPermissionsType.camera.rawValue: self.cameraCheck]
        self.setupData(permissions, handlers: handlers)
        
        self.titleText = "My Awesome App"
        self.detailsText = "Please enable the following"
    }


}
