/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class NSMapTable, BKSHIDEventPointerAttributes;

@interface UIScrollEvent : UIEvent {

	NSMapTable* _gestureRecognizersByWindow;
	CGPoint _sceneReferenceLocation;
	unsigned long long _lastDeliveredPhase;
	unsigned long long _lastReceivedPhase;
	BKSHIDEventPointerAttributes* _pointerAttributes;
	unsigned long long _phase;

}

@property (getter=_scrollType,nonatomic,readonly) unsigned long long scrollType; 
@property (getter=_isHighResolution,nonatomic,readonly) BOOL highResolution; 
@property (getter=_scrollDeviceCategory,nonatomic,readonly) unsigned long long scrollDeviceCategory; 
@property (getter=_beganScrollTimestamp,nonatomic,readonly) double beganScrollTimestamp; 
@property (readonly) CGVector acceleratedDelta; 
@property (readonly) CGVector nonAcceleratedDelta; 
@property (readonly) BOOL directionInvertedFromDevice; 
@property (readonly) unsigned long long phase;                                                                    //@synthesize phase=_phase - In the implementation block
-(unsigned long long)phase;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(long long)subtype;
-(CGVector)nonAcceleratedDelta;
-(id)_windows;
-(id)_windowServerHitTestWindow;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(BOOL)_hasDeliveredTerminalPhase;
-(unsigned long long)_scrollType;
-(id)_init;
-(long long)type;
-(BOOL)_isHighResolution;
-(void)_sendCancelToGestureRecognizer:(id)arg1 ;
-(unsigned long long)_scrollDeviceCategory;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_removeGestureRecognizersFromWindows;
-(void)_wasDeliveredToGestureRecognizers;
-(BOOL)directionInvertedFromDevice;
-(CGPoint)locationInView:(id)arg1 ;
-(CGVector)acceleratedDelta;
-(double)_beganScrollTimestamp;
@end
