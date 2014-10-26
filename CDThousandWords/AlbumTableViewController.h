//
//  AlbumTableViewController.h
//  CDThousandWords
//
//  Created by Andrew Bell on 10/23/14.
//  Copyright (c) 2014 FiixedMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlbumTableViewController : UITableViewController 

@property (strong, nonatomic) NSMutableArray *albums;

- (IBAction)addAlbumBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
