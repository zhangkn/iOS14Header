/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:21 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface FigCaptureThermalMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _thermalHandler;
	OpaqueFigSimpleMutexRef _thermalNotificationLock;
	float _maxTorchLevel;
	int _thermalLevel;

}

@property (readonly) float maxTorchLevel; 
@property (readonly) int thermalLevel; 
+(void)initialize;
-(float)maxTorchLevel;
-(void)dealloc;
-(int)thermalLevel;
-(id)init;
-(void)_thermalNotification:(int)arg1 ;
-(void)setThermalHandler:(/*^block*/id)arg1 ;
@end
