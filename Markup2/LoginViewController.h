//
//  LoginViewController.h
//  Markup2
//
//  Created by Justin Marrington on 21/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LoginDelegate;
@interface LoginViewController : UIViewController <UITextFieldDelegate,UIPickerViewDataSource,UIPickerViewDelegate>
@property (nonatomic, weak) id<LoginDelegate> delegate;
@property (strong) NSArray *institutions;

@end

@protocol LoginDelegate
- (void)didLogin;

@end