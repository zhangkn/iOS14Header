/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPEventStorage, _PASLock, PPCalendarInternPool, NSObject;

@interface PPEventCache : NSObject {

	PPEventStorage* _storage;
	_PASLock* _data;
	PPCalendarInternPool* _calendarInternPool;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned long long _memoryPressureStatus;

}
-(id)evictEventWithIdentifier:(id)arg1 ;
-(id)initWithEventStorage:(id)arg1 ;
-(void)removeAllObjects;
-(id)cachedEventHighlightForEvent:(id)arg1 rankingOptions:(int)arg2 ;
-(id)objectForRange:(NSRange)arg1 ;
-(void)evictAllEventsNotInRange:(NSRange)arg1 ;
-(void)setExtraSecondsToBackfill:(unsigned long long)arg1 ;
-(void)evictAllEventsNotInRanges:(id)arg1 ;
-(void)_refreshCachedEvent:(id)arg1 ;
-(id)refreshCacheWithChanges:(id)arg1 changesContainDeletion:(BOOL*)arg2 ;
-(void)_handleMemoryPressureStatus;
-(void)setEventHighlight:(id)arg1 ;
@end

