/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NDNewsService <NSObject>
@required
-(void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)fetchPlaceholderResultsWithOperationInfo:(id)arg1 syncCompletion:(/*^block*/id)arg2;
-(void)fetchLatestResultsWithParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1;

@end
