/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTPromise.h>

@class NSRecursiveLock, CUTResult, NSMutableArray;

@interface _CUTLockingPromise : CUTPromise {

	NSRecursiveLock* _lock;
	BOOL _done;
	CUTResult* _result;
	NSMutableArray* _resultBlocks;

}

@property (nonatomic,retain) NSRecursiveLock * lock;                     //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL done;                                  //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultBlocks;              //@synthesize resultBlocks=_resultBlocks - In the implementation block
-(void)setDone:(BOOL)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)lock;
-(CUTResult *)result;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(BOOL)done;
-(id)init;
-(void)setResult:(CUTResult *)arg1 ;
-(void)setResultBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)resultBlocks;
-(void)_fulfillWithResult:(id)arg1 ;
@end
