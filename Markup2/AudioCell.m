//
//  AudioCell.m
//  Markup2
//
//  Created by Andrew Dekker on 1/09/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import "AudioCell.h"
#import <QuartzCore/QuartzCore.h>

@implementation AudioCell

- (void)setupView {
    [self.annotationPage.layer setCornerRadius:12.0];
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)drawRect:(CGRect)rect {
    [super drawRect:rect];
    [self setupView];
}

@end
