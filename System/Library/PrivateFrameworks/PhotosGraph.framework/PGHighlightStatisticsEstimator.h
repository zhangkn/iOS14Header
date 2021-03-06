/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGManager, NSDictionary, NSString;

@interface PGHighlightStatisticsEstimator : NSObject {

	PGManager* _manager;
	NSDictionary* _highlightEstimatesDictionary;

}

@property (retain) PGManager * manager;                                                  //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSDictionary * highlightEstimatesDictionary;              //@synthesize highlightEstimatesDictionary=_highlightEstimatesDictionary - In the implementation block
@property (nonatomic,readonly) NSString * highlightEstimatesDescription; 
-(void)setManager:(PGManager *)arg1 ;
-(PGManager *)manager;
-(NSDictionary *)highlightEstimatesDictionary;
-(id)initWithManager:(id)arg1 ;
-(NSString *)highlightEstimatesDescription;
-(id)_createHighlightEstimatesDictionary;
-(BOOL)_isUtilityAsset:(id)arg1 ;
-(unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)arg1 ;
-(id)_collectDetailsForTripsAndWeekends:(id)arg1 ;
-(id)_collectDetailsForAggregations:(id)arg1 ;
-(id)_highlightEstimatesDescriptionWithData:(id)arg1 ;
-(id)_stringDescriptionForTripWeekendDetails:(id)arg1 ;
-(id)_stringDescriptionForHomeWorkAggregations:(id)arg1 ;
-(id)_stringDescriptionForMomentsDetails:(id)arg1 ;
@end

