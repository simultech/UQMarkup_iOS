//
//  AudioPlayer.h
//  Markup2
//
//  Created by Andrew Dekker on 1/09/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Annotation.h"

@interface AudioPlayer : UIView

@property (strong) UILabel *annotationName;
@property (strong) UISlider *progressBar;
@property (strong) UIButton *playPauseButton;
@property (strong) UILabel *timeCode;
@property (weak) id delegate;
@property (weak) Annotation *annotation;
@property (assign) int annotationID;

- (void)resetPlayerView;
- (void)setInvalid;
-(void)setupView;
- (void)showPlayIcon;
- (void)showPauseIcon;

@end
