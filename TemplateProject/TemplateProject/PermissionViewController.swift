//
//  PermissionViewController.swift
//  TemplateProject
//
//  Created by Mathew Southin on 2016-10-18.
//  Copyright © 2016 Otoxo. All rights reserved.
//

import UIKit
import PAPermissions

class PermissionViewController: PAPermissionsViewController {

    let addressBookCheck = PAABAddressBookCheck()
    let bluetoothCheck = PABluetoothPermissionsCheck()
    let calendarCheck = PACalendarPermissionsCheck()
    let cameraCheck = PACameraPermissionsCheck()
    let contactsCheck = PACNContactsPermissionsCheck()
    let eventsCheck = PAEKPermissionsCheck()
    let locationCheck = PALocationPermissionsCheck()
    let microphoneCheck = PAMicrophonePermissionsCheck()
    let motionFitnessCheck = PAMotionFitnessPermissionsCheck()
    let notificationsCheck = PANotificationsPermissionsCheck()
    let photoLibraryCheck = PAPhotoLibraryPermissionsCheck()
    let remindersCheck = PARemindersPermissionsCheck()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let permissions = [
            PAPermissionsItem.itemForType(.bluetooth, reason: "Required to shoot awesome photos")!,
            PAPermissionsItem.itemForType(.camera, reason: "Required to shoot awesome photos")!,
            PAPermissionsItem.itemForType(.calendar, reason: "Required to hear your beautiful voice")!,
            PAPermissionsItem.itemForType(.contacts, reason: "Required to hear your beautiful voice")!,
            PAPermissionsItem.itemForType(.location, reason: "Required to hear your beautiful voice")!,
            PAPermissionsItem.itemForType(.microphone, reason: "Required to hear your beautiful voice")!,
            PAPermissionsItem.itemForType(.motionFitness, reason: "Required to hear your beautiful voice")!,
            PAPermissionsItem.itemForType(.notifications, reason: "Required to hear your beautiful voice")!,
            PAPermissionsItem.itemForType(.photoLibrary, reason: "Required to hear your beautiful voice")!,
            PAPermissionsItem.itemForType(.reminders, reason: "Required to hear your beautiful voice")!
        ]
        
        let handlers = [
            PAPermissionsType.bluetooth.rawValue: self.microphoneCheck,
            PAPermissionsType.camera.rawValue: self.cameraCheck,
            PAPermissionsType.calendar.rawValue: self.calendarCheck,
            PAPermissionsType.contacts.rawValue: self.contactsCheck,
            PAPermissionsType.location.rawValue: self.locationCheck,
            PAPermissionsType.microphone.rawValue: self.microphoneCheck,
            PAPermissionsType.motionFitness.rawValue: self.motionFitnessCheck,
            PAPermissionsType.notifications.rawValue: self.notificationsCheck,
            PAPermissionsType.photoLibrary.rawValue: self.photoLibraryCheck,
            PAPermissionsType.reminders.rawValue: self.remindersCheck
        ]
        
        self.setupData(permissions, handlers: handlers)
        
        self.titleText = "My Awesome App"
        self.detailsText = "Please enable the following"
        
    }


}
