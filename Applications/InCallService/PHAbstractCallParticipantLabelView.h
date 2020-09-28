//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PHCallParticipantLabelDescriptor, UIColor, UILabel;
@protocol PHCallParticipantLabelDelegate;

@interface PHAbstractCallParticipantLabelView : UIView
{
    _Bool _hidesLabel;	// 8 = 0x8
    _Bool _showsInfoButton;	// 9 = 0x9
    _Bool _enabled;	// 10 = 0xa
    _Bool _initialMarqueeViewScrollCompleted;	// 11 = 0xb
    unsigned short _activityState;	// 12 = 0xc
    UILabel *_participantMarqueeLabel;	// 16 = 0x10
    PHCallParticipantLabelDescriptor *_labelDescriptor;	// 24 = 0x18
    id <PHCallParticipantLabelDelegate> _delegate;	// 32 = 0x20
    UIColor *_textColor;	// 40 = 0x28
    NSString *_participantName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100060bf4
@property(nonatomic) _Bool initialMarqueeViewScrollCompleted; // @synthesize initialMarqueeViewScrollCompleted=_initialMarqueeViewScrollCompleted;
@property(copy, nonatomic) NSString *participantName; // @synthesize participantName=_participantName;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property __weak id <PHCallParticipantLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned short activityState; // @synthesize activityState=_activityState;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool showsInfoButton; // @synthesize showsInfoButton=_showsInfoButton;
@property(nonatomic) _Bool hidesLabel; // @synthesize hidesLabel=_hidesLabel;
@property(copy, nonatomic) PHCallParticipantLabelDescriptor *labelDescriptor; // @synthesize labelDescriptor=_labelDescriptor;
@property(retain) UILabel *participantMarqueeLabel; // @synthesize participantMarqueeLabel=_participantMarqueeLabel;
- (double)labelAlphaValueForActivityState:(unsigned short)arg1;	// IMP=0x0000000100060b50
- (void)setActivityState:(unsigned short)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100060ac4
- (void)setParticipantName:(id)arg1 marqueeEnabled:(_Bool)arg2;	// IMP=0x00000001000608b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000d63c

@end
