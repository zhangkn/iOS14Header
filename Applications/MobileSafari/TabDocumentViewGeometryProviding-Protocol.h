//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TabDocumentView;

@protocol TabDocumentViewGeometryProviding <NSObject>
- (_Bool)shouldApplyMinimumEffectiveDeviceWidthForTabDocumentView:(TabDocumentView *)arg1;
- (struct UIEdgeInsets)scrollViewContentInsetAdjustmentsForTabDocumentView:(TabDocumentView *)arg1;
- (struct CGSize)maximumUnobscuredWebViewLayoutSizeForTabDocumentView:(TabDocumentView *)arg1;
- (struct CGSize)minimumWebViewLayoutSizeForTabDocumentView:(TabDocumentView *)arg1;
- (struct UIEdgeInsets)obscuredScrollViewInsetsForTabDocumentView:(TabDocumentView *)arg1 unobscuredSafeAreaInsets:(struct UIEdgeInsets *)arg2;
- (_Bool)inElementFullscreenForTabDocumentView:(TabDocumentView *)arg1;
- (_Bool)shouldModifyWebViewGeometryForTabDocumentView:(TabDocumentView *)arg1;
- (_Bool)shouldFreezeWebViewUpdatesForTabDocumentView:(TabDocumentView *)arg1;

@optional
- (_Bool)shouldAdjustContentOffsetForTabDocumentView:(TabDocumentView *)arg1;
@end
