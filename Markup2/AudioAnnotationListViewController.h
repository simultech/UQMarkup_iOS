//
//  AudioAnnotationListViewController.h
//  Markup2
//
//  Created by Justin Marrington on 22/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Drawer.h"
#import "AudioPlayer.h"
#import "SequentialPDFViewController.h"

@interface AudioAnnotationListViewController : UITableViewController <Drawer>

@property (weak) IBOutlet AudioPlayer *player;
@property (nonatomic, weak) SequentialPDFViewController *pdfViewController;

@end
