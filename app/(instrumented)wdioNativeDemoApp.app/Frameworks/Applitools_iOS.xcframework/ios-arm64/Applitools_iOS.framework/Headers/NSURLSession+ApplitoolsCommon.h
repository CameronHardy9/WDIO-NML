//
//  NSURLSession+ApplitoolsCommon.h
//  Applitools-iOS
//
//  Created by Clement Barry on 20/07/2023.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSURLSession (ApplitoolsCommon)

+ (void)applitools_trackSession:(NSURLSession *)session;
+ (void)applitools_untrackSession:(NSURLSession *)session;

+ (NSArray<NSURLSession *> *)applitools_allSessions;

@end

NS_ASSUME_NONNULL_END
