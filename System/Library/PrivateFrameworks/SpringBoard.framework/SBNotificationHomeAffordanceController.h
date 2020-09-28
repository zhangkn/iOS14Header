/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@class NSMapTable, SBHomeGesturePanGestureRecognizer, SBScreenEdgePanGestureRecognizer, BSAnimationSettings, NSString;

@interface SBNotificationHomeAffordanceController : NSObject <SBHomeGestureParticipantDelegate> {

	NSMapTable* _clientsToParticipants;
	SBHomeGesturePanGestureRecognizer* _screenEdgePanGesture;

}

@property (nonatomic,readonly) SBScreenEdgePanGestureRecognizer * screenEdgePanGesture; 
@property (nonatomic,readonly) BSAnimationSettings * hideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) BSAnimationSettings * unhideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)unregisterClient:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)registerClient:(id)arg1 withIdentifier:(long long)arg2 ;
-(BSAnimationSettings *)hideHomeAffordanceAnimationSettings;
-(BSAnimationSettings *)unhideHomeAffordanceAnimationSettings;
-(id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescription;
-(SBScreenEdgePanGestureRecognizer *)screenEdgePanGesture;
@end
