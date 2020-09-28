//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayRenderOverlay.h"

#import "CAAnimationDelegate-Protocol.h"

@class CAContext, NSString;

@interface BKDisplayRenderOverlayImage : BKDisplayRenderOverlay <CAAnimationDelegate>
{
    CAContext *_context;	// 8 = 0x8
    struct CGImage *_imageRef;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100021d18
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;	// IMP=0x00000001000219e4
- (id)_animationForKeyPath:(id)arg1 withSettings:(id)arg2;	// IMP=0x0000000100021934
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100021848
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010002183c
- (void)_cleanup;	// IMP=0x0000000100021790
- (id)_persistenceData;	// IMP=0x0000000100021728
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x0000000100021598
- (void)_freeze;	// IMP=0x0000000100021540
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x00000001000209e8
- (_Bool)disablesDisplayUpdates;	// IMP=0x00000001000209ac
@property(readonly, nonatomic) struct CGImage *image;
- (void)dealloc;	// IMP=0x0000000100020934
- (id)_initWithPersistenceData:(id)arg1;	// IMP=0x0000000100020880
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x0000000100020824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
