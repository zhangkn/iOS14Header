/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKGreenfieldAddWatchFaceManagerDelegate <NSObject>
@required
-(void)didStartLoadingInAddWatchFaceManager:(id)arg1;
-(void)addWatchFaceManager:(id)arg1 updateStateToWelcomeWithCanAddFaceDirectly:(BOOL)arg2;
-(void)addWatchFaceManager:(id)arg1 updateStateToComplicationsNotAvailableWithSlots:(id)arg2 unavailableTitle:(id)arg3 unavailableDescription:(id)arg4;
-(void)addWatchFaceManager:(id)arg1 updateStateToAddComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;
-(void)addWatchFaceManager:(id)arg1 updateStateToRevisitComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;
-(void)addWatchFaceManager:(id)arg1 updateStateToCompletedWithSkippedComplicationSlots:(id)arg2 canRevisit:(BOOL)arg3;
-(void)addWatchFaceManager:(id)arg1 didFinishAddingFaceWithError:(id)arg2;

@end
