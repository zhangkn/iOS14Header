//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface TSSIMUnlockListCell : UITableViewCell
{
    UILabel *_lockTypeLabel;	// 8 = 0x8
    long long _lockType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000d794
@property(nonatomic) long long lockType; // @synthesize lockType=_lockType;
- (void)_configureLockTypeLabelText;	// IMP=0x000000010000d5fc
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000d534
- (void)prepareForReuse;	// IMP=0x000000010000d4e0
- (void)layoutSubviews;	// IMP=0x000000010000d3c8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010000d2a4

@end
