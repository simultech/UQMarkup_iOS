//
//  ProjectCollectionsViewController.h
//  SectionCollectionViewTest
//
//  Created by Justin Marrington on 8/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SequentialPDFViewController.h"

#define kSubmissionInCellSize CGSizeMake(196.0, 276.0)

@interface ProjectCollectionsViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate, UpdateFrontPageProtocol, UIGestureRecognizerDelegate, UIAlertViewDelegate>

@property (nonatomic,assign) BOOL showFilter;
@property (nonatomic,assign) BOOL isRefreshing;
@property (nonatomic,assign) BOOL showingDeleteConfirm;
@property (nonatomic,assign) BOOL isTransitioning;

@property (nonatomic,strong) NSString *searchText;
@property (nonatomic,strong) NSIndexPath *toDeleteIndexPath;
@property (weak, nonatomic) IBOutlet UISegmentedControl *mainFilter;
@property (nonatomic,strong) UITapGestureRecognizer *tapToRemoveKeyboardGesture;

@property (nonatomic,strong) NSDictionary *versionInfo;

- (IBAction)changeGlobalFilterType:(id)sender;
- (IBAction)sectionFilterClicked:(UISegmentedControl *)sender;

@end
