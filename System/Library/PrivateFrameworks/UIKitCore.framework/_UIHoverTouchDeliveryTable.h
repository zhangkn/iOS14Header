/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, UITouch, NSSet;

@interface _UIHoverTouchDeliveryTable : NSObject {

	NSMutableSet* _beginningGestureRecognizers;
	NSMutableSet* _updatingGestureRecognizers;
	NSMutableSet* _exitingGestureRecognizers;
	UITouch* _touch;

}

@property (nonatomic,readonly) UITouch * touch;                         //@synthesize touch=_touch - In the implementation block
@property (nonatomic,readonly) NSSet * gestureRecognizers; 
-(UITouch *)touch;
-(NSSet *)gestureRecognizers;
-(void)removeGestureRecognizer:(id)arg1 ;
-(void)_cancelAllGestureRecognizers;
-(id)initWithTouch:(id)arg1 ;
-(void)updateForEvent:(id)arg1 forcingHitTest:(BOOL)arg2 ;
-(long long)updateGestureRecognizerForDelivery:(id)arg1 ;
@end

