//
//  StackedTableViewCell.swift
//  TemplateProject
//
//  Created by Mathew Southin on 2016-10-04.
//  Copyright © 2016 Otoxo. All rights reserved.
//

import UIKit

class StackedTableViewCell: UITableViewCell {

    @IBOutlet weak var sliderView: UIView!{
        didSet {
            sliderView.isHidden = true
        }
    }
    
    @IBOutlet weak var label: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
