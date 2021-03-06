/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLearnedPlaceTypeInferenceStats, RTLearnedPlace;

@interface RTLearnedPlaceTypeInferencePlaceStats : NSObject {

	RTLearnedPlaceTypeInferenceStats* _stats;
	RTLearnedPlace* _place;
	unsigned long long _visitsCount;

}

@property (nonatomic,retain) RTLearnedPlace * place;                                  //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) unsigned long long visitsCount;                          //@synthesize visitsCount=_visitsCount - In the implementation block
@property (nonatomic,readonly) RTLearnedPlaceTypeInferenceStats * stats;              //@synthesize stats=_stats - In the implementation block
+(id)visitsWithDwellTimeBetweenDateRange:(id)arg1 start:(id)arg2 end:(id)arg3 ;
+(id)extractDailyStatsFromVisits:(id)arg1 ;
+(id)extractWeeklyStatsFromDailyStats:(id)arg1 ;
+(double)extractTopMedianDwellTimeFromVisits:(id)arg1 ;
-(RTLearnedPlace *)place;
-(RTLearnedPlaceTypeInferenceStats *)stats;
-(void)log;
-(void)setPlace:(RTLearnedPlace *)arg1 ;
-(id)description;
-(unsigned long long)visitsCount;
-(id)initWithPlace:(id)arg1 visits:(id)arg2 ;
-(void)setVisitsCount:(unsigned long long)arg1 ;
@end

