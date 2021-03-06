/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumber;

@interface _DASPriorityQueue : NSObject {

	unsigned long long _count;
	NSMutableDictionary* _objects;
	NSNumber* _lowestPriority;
	NSNumber* _highestPriority;

}

@property (nonatomic,retain) NSMutableDictionary * objects;              //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSNumber * lowestPriority;                  //@synthesize lowestPriority=_lowestPriority - In the implementation block
@property (nonatomic,retain) NSNumber * highestPriority;                 //@synthesize highestPriority=_highestPriority - In the implementation block
+(id)priorityQueue;
-(NSNumber *)lowestPriority;
-(id)allObjects;
-(void)setObjects:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)objects;
-(void)removeObject:(id)arg1 atPriority:(unsigned long long)arg2 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)popLast;
-(id)init;
-(void)setHighestPriority:(NSNumber *)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(id)popFirst;
-(NSNumber *)highestPriority;
-(void)setLowestPriority:(NSNumber *)arg1 ;
-(id)description;
@end

