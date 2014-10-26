//
//  Photo.h
//  CDThousandWords
//
//  Created by Andrew Bell on 10/26/14.
//  Copyright (c) 2014 FiixedMobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Album;

@interface Photo : NSManagedObject

@property (nonatomic, retain) id image;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) Album *albumBook;

@end
