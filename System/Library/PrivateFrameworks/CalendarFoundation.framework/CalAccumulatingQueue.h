/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface CalAccumulatingQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _tags;
	NSMutableDictionary* _context;
	/*^block*/id _block;
	float _delay;
	BOOL _executionPending;

}
-(void)executeBlock;
-(void)updateTags:(id)arg1 withContext:(id)arg2 ;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 delay:(float)arg3 ;
-(void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2 ;
-(void)updateTags:(id)arg1 ;
-(void)updateTagsAndExecuteBlock:(id)arg1 ;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
@end

