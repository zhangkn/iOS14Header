/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class NSMutableIndexSet;

@interface TSTConcurrentMutableIndexSet : NSObject {

	opaque_pthread_rwlock_t mRWLock;
	NSMutableIndexSet* mMutableIndexSet;

}
-(void)dealloc;
-(void)removeAllIndexes;
-(id)init;
-(void)enumerateIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)addIndex:(unsigned long long)arg1 ;
@end

