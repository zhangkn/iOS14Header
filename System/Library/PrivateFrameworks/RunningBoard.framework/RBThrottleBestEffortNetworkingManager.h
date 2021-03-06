/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBThrottleBestEffortNetworkingManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue;
@class NSObject, RBProcessIndex, RBProcessMap, NSString;

@interface RBThrottleBestEffortNetworkingManager : NSObject <RBThrottleBestEffortNetworkingManaging, RBStateCapturing> {

	NSObject*<OS_dispatch_queue> _queue;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	BOOL _throttleBestEffortNetworking;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(void)removeProcess:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)captureState;
-(NSString *)debugDescription;
-(id)init;
-(BOOL)isThrottleBestEffortNetworkingEnabled;
-(void)didUpdateProcessStates:(id)arg1 ;
@end

