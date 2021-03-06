/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate <SiriPresentationControllerDelegate>
@optional
-(void)siriPresentation:(id)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateHomeGestureSharing:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForTapOutsideContentTo:(BOOL)arg2;

@required
-(void)screenWakeRequested;
-(void)screenWakeIdleTimerResetRequested;
-(BOOL)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2;

@end

