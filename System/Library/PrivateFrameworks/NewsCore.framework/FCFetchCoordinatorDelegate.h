/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCFetchCoordinatorDelegate <NSObject>
@required
-(void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
-(id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
-(void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(BOOL)arg3 context:(id)arg4;

@end

