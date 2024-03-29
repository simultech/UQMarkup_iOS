//
//  AnnotationManager.h
//  Markup2
//
//  Created by Justin Marrington on 16/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AnnotationSettingsManager : NSObject

@property (nonatomic, strong) UIColor *freehandColor;
@property (nonatomic, assign) CGFloat freehandWidth;
@property (nonatomic, strong) UIColor *highlightColor;
@property (nonatomic, assign) CGFloat highlightWidth;
@property (nonatomic, assign) UIColor *textColor;
@property (nonatomic, assign) CGFloat eraserWidth;

+ (AnnotationSettingsManager *)sharedManager;
- (void)saveSettings;
@end
