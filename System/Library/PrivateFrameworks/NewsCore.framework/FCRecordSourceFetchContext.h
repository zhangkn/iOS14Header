/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCRecordSourceFetchContext : NSObject {

	BOOL _refresh;
	unsigned long long _cachePolicy;
	double _maxCachedAge;

}

@property (assign,nonatomic) BOOL refresh;                                //@synthesize refresh=_refresh - In the implementation block
@property (assign,nonatomic) unsigned long long cachePolicy;              //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) double maxCachedAge;                         //@synthesize maxCachedAge=_maxCachedAge - In the implementation block
-(BOOL)refresh;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(unsigned long long)cachePolicy;
-(void)setMaxCachedAge:(double)arg1 ;
-(void)setRefresh:(BOOL)arg1 ;
-(double)maxCachedAge;
@end

