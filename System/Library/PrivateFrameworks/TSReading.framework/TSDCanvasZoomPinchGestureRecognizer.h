/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPinchGestureRecognizer.h>

@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer {

	BOOL mZoomTimedOut;

}
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)p_cancelAfterDelay;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)p_startCancellationTimer;
-(void)p_stopCancellationTimer;
@end

