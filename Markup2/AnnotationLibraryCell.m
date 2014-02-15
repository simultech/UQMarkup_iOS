//
//  AnnotationLibraryCell.m
//  Markup2
//
//  Created by Justin Marrington on 1/09/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import "AnnotationLibraryCell.h"
#import "LibraryAnnotation.h"
#import <QuartzCore/QuartzCore.h>

@interface AnnotationLibraryCell ()

@property (nonatomic, strong) UILongPressGestureRecognizer *hold;
@end

@implementation AnnotationLibraryCell

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
        
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
    // Configure the view for the selected state
}

@end
