/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;
@interface IMPerfSinkPair : NSObject {

	id<IMPerfProfilerBehavior> _behavior;
	id<IMPerfProfilerSink> _sink;

}

@property (nonatomic,readonly) id<IMPerfProfilerBehavior> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) id<IMPerfProfilerSink> sink;                      //@synthesize sink=_sink - In the implementation block
-(id<IMPerfProfilerSink>)sink;
-(id<IMPerfProfilerBehavior>)behavior;
-(id)initWithBehavior:(id)arg1 sink:(id)arg2 ;
@end
