/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSCHChartLayoutCache : NSObject {

	NSMutableArray* mCacheItems;
	BOOL mIgnoreInvalidation;

}

@property (assign,nonatomic) BOOL ignoreInvalidation; 
+(id)cacheWithCacheItem:(id)arg1 ;
-(void)invalidate;
-(id)init;
-(id)initWithCacheItem:(id)arg1 ;
-(void)accessWithCacheItemBlock:(/*^block*/id)arg1 calculateBlock:(/*^block*/id)arg2 ;
-(void)printDebug;
-(BOOL)ignoreInvalidation;
-(void)setIgnoreInvalidation:(BOOL)arg1 ;
@end
