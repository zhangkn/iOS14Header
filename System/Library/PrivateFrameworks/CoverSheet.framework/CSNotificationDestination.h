/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSNotificationDestination <CSCoverSheetParticipating,SBFNotificationExtensionVisibilityProviding,SBFNotificationLongLookPresenting>
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher; 
@required
-(void)updateNotificationRequest:(id)arg1;
-(void)postNotificationRequest:(id)arg1;
-(void)setDispatcher:(id)arg1;
-(void)withdrawNotificationRequest:(id)arg1;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1;
-(id<CSNotificationDispatcher>)dispatcher;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;

@end

