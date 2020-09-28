//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PHAudioControlsButtonMenuDataSource-Protocol.h"

@class NSArray, NSString;
@protocol PHAudioCallControlsViewDelegate;

@interface PHAudioCallControlsView : UIView <PHAudioControlsButtonMenuDataSource>
{
    _Bool _buttonsEnabled;	// 8 = 0x8
    id <PHAudioCallControlsViewDelegate> _delegate;	// 16 = 0x10
    NSArray *_buttonsArray;	// 24 = 0x18
}

+ (_Bool)audioCallControlTypeDependsUponImage:(unsigned long long)arg1;	// IMP=0x000000010008d2f8
- (void).cxx_destruct;	// IMP=0x000000010001ed9c
@property(copy) NSArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(nonatomic) _Bool buttonsEnabled; // @synthesize buttonsEnabled=_buttonsEnabled;
@property(nonatomic) __weak id <PHAudioCallControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)menuForAudioControlsButton:(id)arg1;	// IMP=0x000000010008d894
- (double)_horizontalSpacing;	// IMP=0x00000001000174f0
- (double)_verticalSpacing;	// IMP=0x000000010001755c
- (double)_topMargin;	// IMP=0x0000000100017534
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000100015778
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x0000000100019fa8
- (id)buttonForControlType:(unsigned long long)arg1;	// IMP=0x000000010008d748
- (void)setSelectedState:(_Bool)arg1 forControlType:(unsigned long long)arg2;	// IMP=0x000000010008d6fc
- (void)buttonLongPressGestureRecognizer:(id)arg1;	// IMP=0x000000010008d64c
- (void)buttonShortPressGestureRecognizer:(id)arg1;	// IMP=0x000000010008d59c
- (void)buttonTapped:(id)arg1;	// IMP=0x000000010008d518
- (void)assignControlType:(unsigned long long)arg1 toButton:(id)arg2;	// IMP=0x0000000100018c98
- (void)reloadButtonViewStates;	// IMP=0x0000000100017bf8
- (void)updateControls;	// IMP=0x000000010001c8bc
- (_Bool)needsReloadButtonViews;	// IMP=0x000000010008cd38
- (void)reloadButtonViews;	// IMP=0x0000000100015848
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100019854
- (id)init;	// IMP=0x0000000100015674

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
