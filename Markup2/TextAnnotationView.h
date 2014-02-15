//
//  TextAnnotationView.h
//  Markup2
//
//  Created by Justin Marrington on 29/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TextAnnotationViewDelegate;
@interface TextAnnotationView : UIView
@property (nonatomic, weak) id<TextAnnotationViewDelegate> delegate;
@property (nonatomic, strong) UITextView *textView;
- (void)editContents;
- (void)textViewDidEndEditing:(UITextView *)textView;
@end

@protocol TextAnnotationViewDelegate

- (void)textAnnotationView:(TextAnnotationView *)textView willBeginEditingTextAtPoint:(CGPoint)point;
- (void)textAnnotationView:(TextAnnotationView *)textView didFinishEditingTextAtPoint:(CGPoint)point withSize:(CGSize)size updatingExisting:(BOOL)updating;

@end