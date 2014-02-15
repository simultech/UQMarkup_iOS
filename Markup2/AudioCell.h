//
//  AudioCell.h
//  Markup2
//
//  Created by Andrew Dekker on 1/09/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AudioCell : UITableViewCell

@property (nonatomic,strong) IBOutlet UILabel *annotationName;
@property (nonatomic,strong) IBOutlet UILabel *annotationDuration;
@property (nonatomic,strong) IBOutlet UILabel *annotationPage;
@property (nonatomic,strong) UITextField *annotationEdit;

@end
