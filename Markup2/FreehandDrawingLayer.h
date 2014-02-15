//
//  FreehandDrawingLayer.h
//  DrawLayerTest
//
//  Created by Justin Marrington on 15/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface FreehandDrawingLayer : CALayer

- (void)beginPathAtPoint:(CGPoint)point;
- (void)addNextPoint:(CGPoint)point;
- (void)endPath;

// Saving annotations
- (UIImage *)bakeSavedAnnotationWithXPerc:(CGFloat *)outXPerc
                                    yPerc:(CGFloat *)outYPerc
                                widthPerc:(CGFloat *)outWidthPerc
                                heightPerc:(CGFloat *)outHeightPerc;
- (void)clearCanvas;

+ (void)setStrokeColour:(UIColor *)strokeColour;
+ (void)setLineWidth:(CGFloat)lineWidth;
@end
