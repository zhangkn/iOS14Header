//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class MISSING_TYPE;

@interface _TtC8AppStore16FooterLockupView : UIVisualEffectView
{
    MISSING_TYPE *lockupView;	// 8 = 0x8
    MISSING_TYPE *arcadeLockupView;	// 16 = 0x10
    MISSING_TYPE *clickActionHandler;	// 24 = 0x18
    MISSING_TYPE *tapGestureRecognizer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000e2f10
- (id)initWithEffect:(id)arg1;	// IMP=0x00000001000e2f6c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000e2e08
- (void)layoutSubviews;	// IMP=0x00000001000e2ddc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000e2b48
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000001000e29c8
- (void)clickActionHandlerTrampoline;	// IMP=0x00000001000e2958
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e27a0
- (id)init;	// IMP=0x00000001000e2780

@end
