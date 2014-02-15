//
//  TermsOfUseViewController.h
//  Markup2
//
//  Created by Andrew Dekker on 4/09/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoginViewController.h"

@interface TermsOfUseViewController : UIViewController

@property (nonatomic,weak) IBOutlet UIWebView *webView;
@property (nonatomic, weak) id<LoginDelegate> delegate;

@end
