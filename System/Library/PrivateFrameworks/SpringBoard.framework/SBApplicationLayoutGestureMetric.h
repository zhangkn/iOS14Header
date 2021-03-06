/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class PETScalarEventTracker, NSString;

@interface SBApplicationLayoutGestureMetric : NSObject <SBFAnalyticsBackendEventHandling> {

	PETScalarEventTracker* _pinGestureCompletionTracker;
	PETScalarEventTracker* _unpinGestureCompletionTracker;
	PETScalarEventTracker* _movePIPGestureCompletionTracker;
	PETScalarEventTracker* _moveSideGestureCompletionTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(id)init;
-(unsigned long long)_moveActionForInitialSpaceConfig:(long long)arg1 finalConfig:(long long)arg2 ;
-(unsigned long long)_moveActionForInitialFloatingConfig:(long long)arg1 finalConfig:(long long)arg2 ;
@end

