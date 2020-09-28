//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHCarPlayGenericViewController.h"

#import "TUCallProviderManagerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, PHCarPlayProgressView, TPBadgeView, UIButton, UILabel, UIStackView, VMVoicemail;

@interface PHCarPlayVoicemailPlayerViewController : PHCarPlayGenericViewController <TUCallProviderManagerDelegate>
{
    _Bool _firstAppearanceEvent;	// 8 = 0x8
    _Bool _isPlaying;	// 9 = 0x9
    VMVoicemail *_representedVoicemail;	// 16 = 0x10
    UILabel *_nameLabel;	// 24 = 0x18
    UILabel *_detailLabel;	// 32 = 0x20
    PHCarPlayProgressView *_progressView;	// 40 = 0x28
    UIButton *_callBackButton;	// 48 = 0x30
    UIButton *_rewindButton;	// 56 = 0x38
    UIButton *_playPauseButton;	// 64 = 0x40
    NSLayoutConstraint *_nameLabelBaselineConstraint;	// 72 = 0x48
    NSLayoutConstraint *_labelStackViewBaselineConstraint;	// 80 = 0x50
    TPBadgeView *_badgeView;	// 88 = 0x58
    UIStackView *_labelStackView;	// 96 = 0x60
}

+ (id)detailStringForVoicemail:(id)arg1;	// IMP=0x00000001000c658c
- (void).cxx_destruct;	// IMP=0x00000001000c6930
@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(retain, nonatomic) TPBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) NSLayoutConstraint *labelStackViewBaselineConstraint; // @synthesize labelStackViewBaselineConstraint=_labelStackViewBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nameLabelBaselineConstraint; // @synthesize nameLabelBaselineConstraint=_nameLabelBaselineConstraint;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property _Bool firstAppearanceEvent; // @synthesize firstAppearanceEvent=_firstAppearanceEvent;
@property(retain) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain) UIButton *rewindButton; // @synthesize rewindButton=_rewindButton;
@property(retain) UIButton *callBackButton; // @synthesize callBackButton=_callBackButton;
@property(retain) PHCarPlayProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) VMVoicemail *representedVoicemail; // @synthesize representedVoicemail=_representedVoicemail;
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x00000001000c6798
- (void)_handleApplicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000001000c63e8
- (void)_handleVoicemailPlayerDidPlayToEnd:(id)arg1;	// IMP=0x00000001000c632c
- (void)_handleVoicemailPlayerRateChanged:(id)arg1;	// IMP=0x00000001000c6320
- (void)_handleVoicemailPlayerDidStartPlaying:(id)arg1;	// IMP=0x00000001000c6314
- (void)updatePlayPauseButton;	// IMP=0x00000001000c6250
- (void)_update;	// IMP=0x00000001000c5814
- (void)hardwareControlEventNotification:(id)arg1;	// IMP=0x00000001000c54bc
- (void)rewindButtonTapped:(id)arg1;	// IMP=0x00000001000c53dc
- (void)callBackButtonTapped:(id)arg1;	// IMP=0x00000001000c50e8
- (void)playPauseButtonTapped:(id)arg1;	// IMP=0x00000001000c5034
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000c4ec0
@property(readonly, nonatomic) double labelStackViewBaselineConstraintConstant;
@property(readonly, nonatomic) double nameLabelBaselineConstraintConstant;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000c4d5c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000c4c7c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000c4c48
- (void)loadView;	// IMP=0x00000001000c36a8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000c3600
- (void)dealloc;	// IMP=0x00000001000c3588
- (id)init;	// IMP=0x00000001000c3540

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
