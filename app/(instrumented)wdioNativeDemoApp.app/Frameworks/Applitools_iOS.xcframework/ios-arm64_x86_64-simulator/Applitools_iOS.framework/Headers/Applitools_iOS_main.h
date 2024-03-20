//
//  Applitools_iOS_main.h
//  Applitools-iOS
//
//  Created by Clement Barry on 24/08/2020.
//

#import <Foundation/Foundation.h>
@import UIKit;

//! Project version number for Applitools_iOS.
FOUNDATION_EXPORT double Applitools_iOSVersionNumber;

//! Project version string for Applitools_iOS.
FOUNDATION_EXPORT const unsigned char Applitools_iOSVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Applitools_iOS/PublicHeader.h>

@class ApplitoolsSnapshotInfo;

@interface Applitools_iOS_main : NSObject

+ (Applitools_iOS_main *)sharedUFG;
+ (NSString *)versionString;

- (NSURL *)dumpScreenshot:(UIImage *)screenshot
                    named:(NSString *)name
              orientation:(UIInterfaceOrientation)orientation
                   traits:(UITraitCollection *)traitCollection;
- (NSURL *)dumpScreenshot:(UIImage *)screenshot
                    named:(NSString *)name
                    model:(NSString *)model
              orientation:(UIInterfaceOrientation)orientation
                   traits:(UITraitCollection *)traitCollection;


@end
