//
//  PhotoDetailViewController.h
//  CDThousandWords
//
//  Created by Andrew Bell on 10/26/14.
//  Copyright (c) 2014 FiixedMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Photo;

@interface PhotoDetailViewController : UIViewController

@property (strong, nonatomic) Photo *photo;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;


- (IBAction)addFilterButtonPressed:(UIButton *)sender;
- (IBAction)deleteButtonPressed:(UIButton *)sender;

@end
