//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SiriUIContentButton, UILabel;

@interface SRTapToEditView : UIView
{
    UILabel *_tapToEditLabel;	// 8 = 0x8
    SiriUIContentButton *_circleButton;	// 16 = 0x10
    SiriUIContentButton *_chevronButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100056af8
- (double)_circleToLabelHeightDifference;	// IMP=0x0000000100056a60
- (void)_setHighlighted:(_Bool)arg1;	// IMP=0x00000001000569a8
- (double)baselineOffsetFromBottom;	// IMP=0x0000000100056918
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x0000000100056894
- (void)layoutSubviews;	// IMP=0x000000010005668c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100056608
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000565f8
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000565e8
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000565d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100056110

@end

