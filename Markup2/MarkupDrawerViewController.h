//
//  MarkupPulloutViewController.h
//  Markup2
//
//  Created by Justin Marrington on 22/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Drawer.h"


@interface MarkupDrawerViewController : UIViewController
@property (nonatomic, strong) UIViewController<Drawer> *contentViewController;
@property (nonatomic, assign) CGRect contentFrame;
@property (nonatomic, assign) BOOL onLeft;
@property (weak, nonatomic) IBOutlet UIView *tabView;
@property (weak, nonatomic) IBOutlet UIView *contentView;
@property (nonatomic, strong) UIToolbar *toolbar;
@property (nonatomic, strong) UIView *backgroundView;

- (void)setupTabImage:(NSString *)imagePath atVerticalPosition:(float)verticalPercentage;
- (void)setContentWidth:(float)width;
- (void)setToolbarTitle:(NSString *)title withLeftButton:(UIBarButtonItem *)leftButton andRightButton:(UIBarButtonItem *)rightButton;

@end
