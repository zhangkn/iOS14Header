/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATOperation;

@interface CRKWaitForProgressOperation : CATOperation {

	CATOperationQueue* _operationQueue;
	CATOperation* _operation;
	long long _expectedTotalUnitCount;
	long long _expctedCompletedUnitCount;

}

@property (nonatomic,readonly) CATOperationQueue * operationQueue;               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) CATOperation * operation;                         //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) long long expectedTotalUnitCount;                 //@synthesize expectedTotalUnitCount=_expectedTotalUnitCount - In the implementation block
@property (nonatomic,readonly) long long expctedCompletedUnitCount;              //@synthesize expctedCompletedUnitCount=_expctedCompletedUnitCount - In the implementation block
-(void)cancel;
-(CATOperationQueue *)operationQueue;
-(CATOperation *)operation;
-(BOOL)isAsynchronous;
-(void)main;
-(id)initWithOperationQueue:(id)arg1 operation:(id)arg2 expectedCompletedUnitCount:(long long)arg3 expectedTotalUnitCount:(long long)arg4 ;
-(void)observedOperationDidProgress:(id)arg1 ;
-(void)observedOperationDidFail:(id)arg1 ;
-(long long)expectedTotalUnitCount;
-(long long)expctedCompletedUnitCount;
@end
