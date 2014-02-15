//
//  AppDelegate.h
//  Markup2
//
//  Created by Justin Marrington on 8/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Reachability.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong,nonatomic) Reachability* reach;

@end
