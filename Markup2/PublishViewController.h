//
//  PublishViewController.h
//  Markup2
//
//  Created by Justin Marrington on 29/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PublishViewControllerDelegate;
@interface PublishViewController : UIViewController
@property (nonatomic, strong) NSArray *submissions;
@property (nonatomic, weak) id<PublishViewControllerDelegate> delegate;

- (void)uploadEditedSubmissions;
@end

@protocol PublishViewControllerDelegate

- (void)publishViewWillDismiss;
- (void)publishViewFailedToPublish;
@end
