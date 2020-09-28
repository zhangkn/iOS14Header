//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SFFeedbackListener-Protocol.h"

@class NSString, SFCard, SFCardSectionEngagementFeedback, UIView, UIViewController;

@protocol SearchUIFeedbackDelegate <SFFeedbackListener>

@optional
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)updateViewControllerTitle:(NSString *)arg1;
- (void)presentViewControllerForCard:(SFCard *)arg1 animate:(_Bool)arg2;
- (void)willDismissViewController:(UIViewController *)arg1;
- (void)presentViewController:(UIViewController *)arg1;
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1 animate:(_Bool)arg2;
- (_Bool)shouldHandleCardSectionEngagement:(SFCardSectionEngagementFeedback *)arg1;
@end
