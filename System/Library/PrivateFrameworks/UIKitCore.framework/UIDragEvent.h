/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class _UIDragEventSample, UIView, NSMutableSet, NSHashTable, _UIInternalDraggingSessionDestination, _UIInternalDraggingSessionSource, NSSet, _UIDropSessionImpl, UIWindow;

@interface UIDragEvent : UIEvent {

	_UIDragEventSample* _currentSample;
	UIView* _previousEventView;
	UIView* _eventView;
	NSMutableSet* _beginningGestureRecognizers;
	NSMutableSet* _updatingGestureRecognizers;
	NSMutableSet* _exitingGestureRecognizers;
	NSMutableSet* _endingGestureRecognizers;
	NSMutableSet* _ignoredGestureRecognizers;
	NSMutableSet* _dynamicGestureRecognizers;
	NSHashTable* _viewsQueriedForDynamicGestures;
	NSMutableSet* _dynamicInteractions;
	BOOL _ignoreDragEnd;
	BOOL _needsHitTestReset;
	BOOL _dragFailed;
	/*^block*/id _dragFailedCallback;
	unsigned _dragSessionID;
	_UIInternalDraggingSessionDestination* _sessionDestination;
	_UIInternalDraggingSessionSource* _sessionSource;

}

@property (getter=_hitTestedView,nonatomic,readonly) UIView * hitTestedView; 
@property (getter=_dynamicGestureRecognizers,nonatomic,readonly) NSSet * dynamicGestureRecognizers; 
@property (getter=_sessionDestination,nonatomic,readonly) _UIInternalDraggingSessionDestination * sessionDestination;              //@synthesize sessionDestination=_sessionDestination - In the implementation block
@property (getter=_sessionSource,nonatomic,readonly) _UIInternalDraggingSessionSource * sessionSource;                             //@synthesize sessionSource=_sessionSource - In the implementation block
@property (getter=_dropSession,nonatomic,readonly) _UIDropSessionImpl * dropSession; 
@property (nonatomic,readonly) UIWindow * eventWindow; 
@property (nonatomic,readonly) BOOL isPolicyDriven; 
@property (nonatomic,readonly) BOOL hasActiveGestureRecognizers; 
@property (getter=_touchRoutingPolicyContextID,nonatomic,readonly) unsigned touchRoutingPolicyContextID; 
@property (getter=_windowServerHitTestContextID,nonatomic,readonly) unsigned windowServerHitTestContextID; 
@property (nonatomic,readonly) unsigned dragSessionID;                                                                             //@synthesize dragSessionID=_dragSessionID - In the implementation block
@property (nonatomic,readonly) CGPoint locationInSceneReferenceSpace; 
@property (nonatomic,readonly) BOOL isFromAccessibilitySession; 
+(BOOL)_isSessionIDValid:(unsigned)arg1 ;
+(void)_invalidateSessionID:(unsigned)arg1 ;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(id)_windows;
-(void)_reset;
-(void)dealloc;
-(void)_ignoreGestureRecognizer:(id)arg1 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(id)_sessionDestination;
-(long long)type;
-(id)_dynamicGestureRecognizers;
-(BOOL)isFromAccessibilitySession;
-(UIWindow *)eventWindow;
-(id)_dropSession;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(unsigned)dragSessionID;
-(void)_sendIfNeeded;
-(void)_wasDeliveredToGestureRecognizers;
-(unsigned)_windowServerHitTestContextID;
-(BOOL)_shouldSendEvent;
-(void)_updateFromCurrentSample;
-(void)_updateGesturesFromCurrentSample;
-(id)_updatingDropGestureRecognizers;
-(void)_ignoreDragEnd;
-(BOOL)_isReadyForReset;
-(id)initWithDragSessionID:(unsigned)arg1 environment:(id)arg2 ;
-(id)_hitTestedView;
-(BOOL)_isTouchRoutingPolicyBased;
-(CGPoint)locationInSceneReferenceSpace;
-(CGPoint)locationInView:(id)arg1 ;
-(unsigned)_touchRoutingPolicyContextID;
-(void)_setNeedsHitTestReset;
-(BOOL)hasActiveGestureRecognizers;
-(id)_sessionSource;
-(void)_dragFailedWithCallback:(/*^block*/id)arg1 ;
-(BOOL)isPolicyDriven;
@end

