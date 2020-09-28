//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface BCAlertHeaderTableViewCell : UITableViewCell
{
    _Bool _shouldShowVerifiedIcon;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subTitleLabel;	// 24 = 0x18
    UIImageView *_mainImageView;	// 32 = 0x20
    UIImageView *_verifiedIconView;	// 40 = 0x28
}

+ (double)heightForActionItem:(id)arg1 forWidth:(double)arg2;	// IMP=0x000000010000418c
+ (id)reuseIdentifier;	// IMP=0x0000000100004180
- (void).cxx_destruct;	// IMP=0x0000000100005714
@property(readonly, nonatomic) UIImageView *verifiedIconView; // @synthesize verifiedIconView=_verifiedIconView;
@property(nonatomic) _Bool shouldShowVerifiedIcon; // @synthesize shouldShowVerifiedIcon=_shouldShowVerifiedIcon;
@property(readonly, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(readonly, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)loadContentView;	// IMP=0x0000000100004398
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100004104

@end
