//
//  PublishController.h
//  Markup2
//
//  Created by Justin Marrington on 29/08/12.
//  Copyright (c) 2012 Lovely Head. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PublishController : NSObject

// Creates a zip file in the temporary directory containing all of a submission's data, ready for transmission
// fileSize will contain the number of bytes in the compressed file.
- (NSString *)prepareSubmission:(NSInteger)submissionId destinationFileSize:(int64_t *)fileSize withError:(NSError *)outError;
@end
