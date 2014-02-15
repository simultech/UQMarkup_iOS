//
//  UpdateViewController.m
//  Markup2
//
//  Created by simultech on 6/02/13.
//  Copyright (c) 2013 Lovely Head. All rights reserved.
//

#import "UpdateViewController.h"

@interface UpdateViewController ()

@end

@implementation UpdateViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSDictionary *updateInfo = [self.delegate versionInfo];
    self.versionText.text = [updateInfo objectForKey:@"version"];
    self.releaseNotes.text = [updateInfo objectForKey:@"releasenotes"];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)closeClicked:(id)sender {
    [self dismissViewControllerAnimated:YES completion:NULL];
}
@end
