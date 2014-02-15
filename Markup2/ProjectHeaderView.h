//
//  ProjectHeaderView.h
//  Markup2
//
//  Created by Justin Marrington on 8/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProjectHeaderView : UICollectionReusableView

@property (weak, nonatomic) IBOutlet UILabel *sectionTitle;
@property (weak, nonatomic) IBOutlet UISegmentedControl *sectionFilter;
- (IBAction)sectionChanged:(id)sender;

@end
