/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString, NSMutableOrderedSet;

@interface SGDWorkQueue : NSObject {

	NSString* _dir;
	Aq _counter;
	NSMutableOrderedSet* _pendingNames;
	opaque_pthread_mutex_t _lock;
	long long _priority;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) long long priority;                    //@synthesize priority=_priority - In the implementation block
+(id)pathForNewMessagesQueue;
+(id)pathForOldMessagesQueue;
-(id)_pop;
-(id)addDictionary:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 ;
-(void)resetForTesting;
-(id)popDictionary;
-(id)_popName:(id)arg1 ;
-(id)init;
-(void)closeDatabase;
-(id)initWithDirectory:(id)arg1 priority:(long long)arg2 ;
-(unsigned long long)count;
-(id)popDictionaryBySourceId:(id)arg1 messageId:(id)arg2 ;
-(long long)priority;
-(id)addDictionary:(id)arg1 withSourceId:(id)arg2 messageId:(id)arg3 ;
-(id)popDictionaryById:(id)arg1 ;
-(id)description;
@end

