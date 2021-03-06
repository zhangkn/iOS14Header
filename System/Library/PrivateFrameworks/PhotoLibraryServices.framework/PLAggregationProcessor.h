/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCalendar, NSMutableDictionary;

@interface PLAggregationProcessor : NSObject {

	NSCalendar* _calendar;
	NSMutableDictionary* _curatedAssetCountByMomentUUID;

}

@property (nonatomic,retain) NSCalendar * calendar;                                            //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * curatedAssetCountByMomentUUID;              //@synthesize curatedAssetCountByMomentUUID=_curatedAssetCountByMomentUUID - In the implementation block
+(void)initialize;
+(unsigned long long)maximumNumberOfAssetsPerMoment;
+(BOOL)isEnabled;
+(unsigned long long)maximumNumberOfAssetsPerAggregation;
+(unsigned long long)maximumNumberOfDaysPerAggregation;
+(void)restoreDefaultEnablement;
+(void)setEnabled:(BOOL)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)init;
-(BOOL)_shouldAggregateMoment:(id)arg1 ;
-(id)sortedNeighborMomentClustersOfMomentClusters:(id)arg1 forAllMomentClusters:(id)arg2 ;
-(id)processAggregationsWithSortedMomentClusters:(id)arg1 momentsContainedInOtherHighlights:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)curatedAssetCountByMomentUUID;
-(id)_aggregationMomentClustersForMomentClusters:(id)arg1 ;
-(void)setCuratedAssetCountByMomentUUID:(NSMutableDictionary *)arg1 ;
@end

