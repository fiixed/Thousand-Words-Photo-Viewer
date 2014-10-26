//
//  CoreDataHelper.m
//  CDThousandWords
//
//  Created by Andrew Bell on 10/24/14.
//  Copyright (c) 2014 FiixedMobile. All rights reserved.
//

#import "CoreDataHelper.h"
#import <UIKit/UIKit.h>

@implementation CoreDataHelper

+(NSManagedObjectContext *)managedObjectContext
{
    NSManagedObjectContext *context = nil;
    id delegate = [[UIApplication sharedApplication] delegate];
    
    if ([delegate performSelector:@selector(managedObjectContext)]) {
        context = [delegate managedObjectContext];
    }
    
    return context;
}

@end
