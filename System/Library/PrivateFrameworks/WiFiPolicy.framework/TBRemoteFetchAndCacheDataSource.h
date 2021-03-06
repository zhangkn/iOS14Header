/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TBCacheProvider;
@class TBDataSource;

@interface TBRemoteFetchAndCacheDataSource : NSObject {

	TBDataSource* _fetchDataSource;
	id<TBCacheProvider> _cacheProvider;

}

@property (nonatomic,retain) TBDataSource * fetchDataSource;                 //@synthesize fetchDataSource=_fetchDataSource - In the implementation block
@property (nonatomic,retain) id<TBCacheProvider> cacheProvider;              //@synthesize cacheProvider=_cacheProvider - In the implementation block
-(id)initWithFetchDataSource:(id)arg1 cacheProvider:(id)arg2 ;
-(id<TBCacheProvider>)cacheProvider;
-(void)setCacheProvider:(id<TBCacheProvider>)arg1 ;
-(TBDataSource *)fetchDataSource;
-(void)setFetchDataSource:(TBDataSource *)arg1 ;
@end

