//
//  AnnotationLibraryViewController.h
//  Markup2
//
//  Created by Justin Marrington on 1/09/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SequentialPDFViewController.h"
#import "Drawer.h"

@interface AnnotationLibraryViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, Drawer>
@property (nonatomic, weak) SequentialPDFViewController *pdfViewController;
@end
