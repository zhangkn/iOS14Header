//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import "BFFNavigationControllerDelegate-Protocol.h"
#import "OBWelcomeHeaderAnimatable-Protocol.h"

@class NSString, OBAnimationController;

@interface OBWelcomeController (BuddyAnimation) <OBWelcomeHeaderAnimatable, BFFNavigationControllerDelegate>
+ (void)setAdditionalScaleForAnimation:(double)arg1 headerView:(id)arg2;	// IMP=0x000000010008a938
+ (void)setStandardBuddyScaleForAnimation:(id)arg1;	// IMP=0x000000010008a924
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x000000010008ac14
- (void)markPaneToAnimateHeaderOnNextAppearance;	// IMP=0x000000010008aa30
- (void)setAdditionalScaleForAnimation:(double)arg1;	// IMP=0x000000010008a8bc
- (void)setStandardBuddyScaleForAnimation;	// IMP=0x000000010008a8a8
- (id)bundleUrlForPackageName:(id)arg1;	// IMP=0x000000010008a7d8
- (id)buddy_animationController:(id)arg1;	// IMP=0x000000010008a678
- (id)buddy_animationController:(id)arg1 animatedStates:(id)arg2 startAtFirstState:(_Bool)arg3;	// IMP=0x000000010008a530

// Remaining properties
@property(retain, nonatomic) OBAnimationController *animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

