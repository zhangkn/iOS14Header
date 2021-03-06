/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIMotionEffectEventProvider.h>

@class CMMotionManager, NSOperationQueue;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {

	CMMotionManager* _motionManager;
	NSOperationQueue* _motionEventQueue;

}
-(void)startGeneratingEvents;
-(BOOL)shouldLogEvents;
-(void)setSlowUpdatesEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stopGeneratingEvents;
-(id)currentEvent;
-(double)slowUpdateIntervalForLogs;
-(double)fastUpdateIntervalForLogs;
@end

