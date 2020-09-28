//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, UIButton, UILabel, UIView;
@protocol BookmarkFavoritesGridSectionHeaderViewDelegate;

@interface BookmarkFavoritesGridSectionHeaderView : UICollectionReusableView
{
    NSLayoutConstraint *_leadingTitleConstraint;	// 8 = 0x8
    NSLayoutConstraint *_trailingTitleConstraint;	// 16 = 0x10
    NSLayoutConstraint *_trailingControlSpaceConstraint;	// 24 = 0x18
    NSLayoutConstraint *_trailingAccessoryViewTrailingSpaceConstraint;	// 32 = 0x20
    UIButton *_toggleButton;	// 40 = 0x28
    _Bool _shouldShowAsToggled;	// 48 = 0x30
    _Bool _shouldDisableShowLess;	// 49 = 0x31
    UILabel *_titleLabel;	// 56 = 0x38
    double _horizontalMargin;	// 64 = 0x40
    long long _buttonStyle;	// 72 = 0x48
    long long _sectionType;	// 80 = 0x50
    UIView *_bottomAccessoryView;	// 88 = 0x58
    id <BookmarkFavoritesGridSectionHeaderViewDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100091e7c
@property(nonatomic) __weak id <BookmarkFavoritesGridSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *bottomAccessoryView; // @synthesize bottomAccessoryView=_bottomAccessoryView;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(nonatomic) _Bool shouldDisableShowLess; // @synthesize shouldDisableShowLess=_shouldDisableShowLess;
@property(nonatomic) _Bool shouldShowAsToggled; // @synthesize shouldShowAsToggled=_shouldShowAsToggled;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_uninstallToggleButton;	// IMP=0x0000000100091d3c
- (void)_updateToggleButtonFont;	// IMP=0x0000000100091bb4
- (void)_installToggleButton;	// IMP=0x0000000100091788
- (void)_updateToggleButtonTitle;	// IMP=0x0000000100091584
- (void)_didSelectToggleButton;	// IMP=0x00000001000913f4
@property(readonly, nonatomic) double minimumDisplayHeight;
- (void)tintColorDidChange;	// IMP=0x00000001000911cc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000909d4

@end
