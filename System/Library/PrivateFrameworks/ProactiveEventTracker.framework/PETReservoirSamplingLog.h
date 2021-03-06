/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PETReservoirSamplingLogStore;
#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class NSObject;

@interface PETReservoirSamplingLog : NSObject {

	opaque_pthread_mutex_t _lock;
	NSObject*<PETReservoirSamplingLogStore> _store;
	unsigned _limit;
	SCD_Struct_PE7 _rng;

}
-(void)_gc;
-(void)clear;
-(void)_unlock;
-(void)log:(id)arg1 ;
-(void)dealloc;
-(BOOL)_lock;
-(id)init;
-(BOOL)_readHeader;
-(id)initWithStore:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)initWithPath:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)initInMemoryWithLimit:(unsigned long long)arg1 ;
-(void)enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(void)_clearLocked;
-(void)_enumerateItemsWithBlockLocked:(/*^block*/id)arg1 ;
-(void)enumerateAndClearItemsWithBlock:(/*^block*/id)arg1 ;
@end

