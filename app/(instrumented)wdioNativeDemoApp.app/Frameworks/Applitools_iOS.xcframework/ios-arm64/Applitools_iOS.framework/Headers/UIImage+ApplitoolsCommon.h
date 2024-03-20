//
//  UIImage+ApplitoolsCommon.h
//  Applitools-iOS
//
//  Created by Anton Chuev on 28.04.2023.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (ApplitoolsCommon)

- (UIImage *)applitools_cropRect:(CGRect)rect;

@end

NS_ASSUME_NONNULL_END
