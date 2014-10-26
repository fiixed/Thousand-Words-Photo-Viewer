//
//  PhotoCollectionViewCell.m
//  CDThousandWords
//
//  Created by Andrew Bell on 10/25/14.
//  Copyright (c) 2014 FiixedMobile. All rights reserved.
//

#import "PhotoCollectionViewCell.h"
#define IMAGEVIEW_BORDER_LENGTH 5

@implementation PhotoCollectionViewCell

-(instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self setup];
    }
    return self;
}

-(instancetype)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
        [self setup];
    }
    return self;
}

-(void)setup
{
    self.imageView = [[UIImageView alloc]initWithFrame:CGRectInset(self.bounds, IMAGEVIEW_BORDER_LENGTH, IMAGEVIEW_BORDER_LENGTH)];
    [self.contentView addSubview:self.imageView];
}



@end
