//
//  PhotosCollectionViewController.h
//  CDThousandWords
//
//  Created by Andrew Bell on 10/24/14.
//  Copyright (c) 2014 FiixedMobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Album.h"

@interface PhotosCollectionViewController : UICollectionViewController

@property (strong, nonatomic) Album *album;

- (IBAction)cameraBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
