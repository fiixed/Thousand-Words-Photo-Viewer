//
//  CoreDataHelper.h
//  CDThousandWords
//
//  Created by Andrew Bell on 10/24/14.
//  Copyright (c) 2014 FiixedMobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CoreDataHelper : NSObject

+(NSManagedObjectContext *)managedObjectContext;

@end
