//
//  PassthroughView.m
//  Markup2
//
//  Created by Justin Marrington on 26/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import "PassthroughView.h"

@implementation PassthroughView

- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event
{
    for (UIView * view in [self subviews])
    {
        if (!view.hidden && [view pointInside:[self convertPoint:point
                                                          toView:view] withEvent:event])
        {
            return YES;
        }
    }
    return NO;
}

@end
