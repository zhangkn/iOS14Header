/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface KNAnimationDelayedCallback : NSObject {

	double _delay;
	double _startTime;
	id _target;
	SEL _selector;
	id _object;
	/*^block*/id _block;
	NSObject*<OS_dispatch_source> _sourceTimer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)cancel;
-(void)pause;
-(void)run;
-(void)resume;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)initWithBlock:(/*^block*/id)arg1 delay:(double)arg2 ;
-(void)p_performSelectorOnTarget;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
@end

