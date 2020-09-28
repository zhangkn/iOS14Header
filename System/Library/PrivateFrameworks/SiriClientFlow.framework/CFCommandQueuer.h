/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CFCommandQueuer : NSObject {

	NSObject*<OS_dispatch_queue> _commandQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)commandQueue;
-(void)setCommandQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dispatchOneWayCommand:(id)arg1 withServiceHelper:(id)arg2 ;
-(void)dispatchCommand:(id)arg1 withServiceHelper:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dispatchBlock:(/*^block*/id)arg1 ;
-(id)initWithCommandIdentifier:(id)arg1 ;
-(void)dispatchCommand:(id)arg1 isOneWay:(BOOL)arg2 withServiceHelper:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)initQueuesWithIdentifier:(id)arg1 ;
@end
