//
//  Project.h
//  Markup2
//
//  Created by Justin Marrington on 21/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Course.h"

@interface Project : NSObject <NSCopying, NSCoding>
@property (nonatomic, strong) NSString *projectId;
@property (nonatomic, strong) NSString *projectName;
@property (nonatomic, strong) NSString *projectDescription;
@property (nonatomic, strong) NSDate *startDate;
@property (nonatomic, strong) NSDate *endDate;
@property (nonatomic, strong) NSDate *submissionDate;
@property (nonatomic, strong) NSArray *submissions;
@property (nonatomic, strong) NSArray *rubrics;
@property (nonatomic, strong) Course *course;

@property (nonatomic, assign) BOOL isFiltered;

@end
