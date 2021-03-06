/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationThrottler.h>

@protocol FCOperationThrottler
@property (assign) BOOL suspended; 
@required
-(BOOL)suspended;
-(void)tickle;
-(void)tickleWithCompletion:(/*^block*/id)arg1;
-(void)setSuspended:(BOOL)arg1;

@end


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface FCOperationThrottler : NSObject <FCOperationThrottler> {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _handlerSynchronizationGroup;
	BOOL _suspended;

}

@property (assign) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(void)addCompletionForCurrentOperation:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)suspended;
-(void)tickle;
-(id)init;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 updateQueue:(id)arg2 ;
@end

