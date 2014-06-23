//
//  DetailViewController.h
//  P90X3FoodTracker
//
//  Created by Jai Govindani on 6/23/14.
//  Copyright (c) 2014 Jai Govindani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

