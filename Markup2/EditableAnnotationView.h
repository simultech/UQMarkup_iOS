//
//  EditableAnnotationView.h
//  Markup2
//
//  Created by Justin Marrington on 26/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>
#define kBGMargin 20.0

@protocol EditableAnnotationViewDelegate;
@class Annotation;
@interface EditableAnnotationView : UIView

@property (nonatomic, strong) UIView *annotationContentView;
@property (nonatomic, strong) Annotation *annotation;
@property (nonatomic, weak) id<EditableAnnotationViewDelegate> delegate;

- (void)setAnnotationSelected:(BOOL)selected;
- (void)eraseNearPoint:(CGPoint)point withRadius:(int)radius;
@end

@protocol EditableAnnotationViewDelegate

- (void)annViewDidSelectAnnotation:(EditableAnnotationView *)annView;
- (void)annViewDidDeselectAnnotation:(EditableAnnotationView *)annView;
- (void)annViewDidDeleteAnnotation:(EditableAnnotationView *)annView;
- (void)annViewDidStartEditingContents:(EditableAnnotationView *)annView;
- (id)getPDFDelegate;
@end