//
//  Course.h
//  Markup2
//
//  Created by Justin Marrington on 21/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Course : NSObject <NSCoding>
@property (nonatomic, strong) NSString *courseId;
@property (nonatomic, strong) NSString *courseCode;
@property (nonatomic, strong) NSString *shadowCode;
@property (nonatomic, strong) NSString *courseName;
@property (nonatomic, strong) NSString *year;
@property (nonatomic, strong) NSString *semester;
@end
