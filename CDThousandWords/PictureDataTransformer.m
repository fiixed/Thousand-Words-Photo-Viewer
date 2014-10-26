//
//  PictureDataTransformer.m
//  CDThousandWords
//
//  Created by Andrew Bell on 10/25/14.
//  Copyright (c) 2014 FiixedMobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PictureDataTransformer.h"


@implementation PictureDataTransformer

+(Class)transformedValueClass
{
    return [NSData class];
}

+(BOOL)allowsReverseTransformation
{
    return YES;
}

-(id)transformedValue:(id)value
{
    return UIImagePNGRepresentation(value);
}

-(id)reverseTransformedValue:(id)value
{
    UIImage *image = [UIImage imageWithData:value];
    return image;
}

@end
