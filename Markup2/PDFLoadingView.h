//
//  PDFLoadingView.h
//  Markup2
//
//  Created by simultech on 3/02/13.
//  Copyright (c) 2013 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface PDFLoadingView : UIView

@property (nonatomic,strong) UIActivityIndicatorView *spinner;
@property (nonatomic,strong) UILabel *loadingText;

- (void) fadeOut;

@end
