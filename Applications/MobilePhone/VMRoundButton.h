//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface VMRoundButton : UIButton
{
    unsigned long long _type;	// 8 = 0x8
    UIColor *_actualBackgroundColor;	// 16 = 0x10
    UIColor *_actualTintColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010007332c
@property(retain, nonatomic) UIColor *actualTintColor; // @synthesize actualTintColor=_actualTintColor;
@property(retain, nonatomic) UIColor *actualBackgroundColor; // @synthesize actualBackgroundColor=_actualBackgroundColor;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)_updateButtonState;	// IMP=0x00000001000731a0
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000100073058
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000100072ed4
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100072e08
- (void)configureButtonUsingAudioRoute:(id)arg1;	// IMP=0x0000000100072bfc
- (void)setButtonType:(unsigned long long)arg1 enabled:(_Bool)arg2;	// IMP=0x00000001000729f8
- (void)layoutSubviews;	// IMP=0x0000000100072964
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x0000000100072830

@end

