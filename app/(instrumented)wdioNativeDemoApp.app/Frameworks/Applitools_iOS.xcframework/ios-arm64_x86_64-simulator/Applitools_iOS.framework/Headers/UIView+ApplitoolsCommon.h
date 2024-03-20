//
//  UIView+ApplitoolsCommon.h
//  Applitools-iOS
//
//  Created by Anton Chuev on 28.04.2023.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (ApplitoolsCommon)

- (NSArray<UIScrollView *> *)applitools_allScrollViews;
- (nullable UIViewController *)applitools_findViewController;

- (BOOL)applitools_isFlutterScrollView;

@end

NS_ASSUME_NONNULL_END
