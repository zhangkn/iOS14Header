/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYStateLoggable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray, PBCodable;

@interface _SYMultiSuspendableQueue : NSObject <SYStateLoggable> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	unsigned long long _stateHandle;
	Ai _resumeCount;
	NSString* _logDescriptor;
	NSMutableArray* _latestSuspendBacktraces;
	NSMutableArray* _latestResumeBacktraces;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> targetQueue; 
@property (nonatomic,readonly) unsigned qosClass; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)async:(/*^block*/id)arg1 ;
-(void)sync:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)isSuspended;
-(void)barrierSync:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)suspend;
-(unsigned)qosClass;
-(id)init;
-(void)barrierAsync:(/*^block*/id)arg1 ;
-(void)resume;
-(id)initWithName:(id)arg1 qosClass:(unsigned)arg2 serial:(BOOL)arg3 target:(id)arg4 ;
-(PBCodable *)stateForLogging;
-(id)initWithName:(id)arg1 qosClass:(unsigned)arg2 serial:(BOOL)arg3 ;
-(NSString *)name;
@end

