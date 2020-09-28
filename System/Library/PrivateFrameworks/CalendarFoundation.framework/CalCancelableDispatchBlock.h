/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalCancelable.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CalCancelableDispatchBlock : NSObject <CalCancelable> {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id block;                                            //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)cancel;
-(void)performAfterDelay:(double)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 inQueue:(id)arg2 ;
-(void)performAsync;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
