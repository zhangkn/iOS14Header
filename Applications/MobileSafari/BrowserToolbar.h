//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFToolbar.h>

@class UIToolbar;

@interface BrowserToolbar : _SFToolbar
{
    UIToolbar *_replacementToolbar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000733d4
@property(readonly, nonatomic) UIToolbar *replacementToolbar; // @synthesize replacementToolbar=_replacementToolbar;
- (void)_sceneWillEnterForeground:(id)arg1;	// IMP=0x0000000100073314
- (void)_sceneDidEnterBackground:(id)arg1;	// IMP=0x0000000100073254
- (void)setItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100073198
- (void)setReplacementToolbar:(id)arg1 tintStyle:(unsigned long long)arg2 withAnimationDelay:(double)arg3;	// IMP=0x0000000100072de8
- (void)_updateItemsForReplacementToolbar;	// IMP=0x0000000100072c48
- (void)layoutSubviews;	// IMP=0x0000000100072bf8
- (id)initWithPlacement:(long long)arg1;	// IMP=0x0000000100072ae0

@end
