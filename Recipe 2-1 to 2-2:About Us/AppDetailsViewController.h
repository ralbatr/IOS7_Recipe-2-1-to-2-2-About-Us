//
//  AppDetailsViewController.h
//  Recipe 2-1 to 2-2:About Us
//
//  Created by ralbatr on 14-9-5.
//  Copyright (c) 2014年 ralbatr. All rights reserved.
//

#import "ViewController.h"
#import "AppDetails.h"

@interface AppDetailsViewController : ViewController
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UITextView *descriptionTextView;
@property (strong,nonatomic) AppDetails *appDetails;

@end
