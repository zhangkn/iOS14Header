//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC8AppStore16DynamicTypeLabel, _TtC8AppStore17DynamicTypeButton;

@interface _TtC8AppStore19BreakoutDetailsView : UIView
{
    MISSING_TYPE *badge;	// 8 = 0x8
    MISSING_TYPE *badgeLabel;	// 24 = 0x18
    MISSING_TYPE *badgeWordmark;	// 32 = 0x20
    MISSING_TYPE *titleLabel;	// 40 = 0x28
    MISSING_TYPE *descriptionLabel;	// 48 = 0x30
    MISSING_TYPE *backgroundMaterialView;	// 56 = 0x38
    MISSING_TYPE *callToActionButton;	// 64 = 0x40
    MISSING_TYPE *callToActionButtonHandler;	// 72 = 0x48
    MISSING_TYPE *config;	// 88 = 0x58
    MISSING_TYPE *detailTextAlignment;	// 96 = 0x60
    MISSING_TYPE *detailBackgroundStyle;	// 97 = 0x61
}

- (void).cxx_destruct;	// IMP=0x00000001000904a8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100090448
@property(nonatomic, readonly) _TtC8AppStore17DynamicTypeButton *accessibilityCallToActionButton;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityDescriptionLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityBadgeLabel;
- (void)didTapActionButton;	// IMP=0x0000000100090354
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010009028c
- (void)layoutSubviews;	// IMP=0x0000000100090260
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010008fdf4
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000010008fd50
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008eaec

@end

