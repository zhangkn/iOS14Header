/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HAMenstrualAlgorithmsStats;

@interface HAMenstrualAlgorithmsAnalysis : NSObject {

	NSArray* _menstruationPredictions;
	NSArray* _fertilityPredictions;
	HAMenstrualAlgorithmsStats* _stats;

}

@property (nonatomic,retain) NSArray * menstruationPredictions;               //@synthesize menstruationPredictions=_menstruationPredictions - In the implementation block
@property (nonatomic,retain) NSArray * fertilityPredictions;                  //@synthesize fertilityPredictions=_fertilityPredictions - In the implementation block
@property (nonatomic,retain) HAMenstrualAlgorithmsStats * stats;              //@synthesize stats=_stats - In the implementation block
-(HAMenstrualAlgorithmsStats *)stats;
-(NSArray *)menstruationPredictions;
-(void)setMenstruationPredictions:(NSArray *)arg1 ;
-(NSArray *)fertilityPredictions;
-(void)setFertilityPredictions:(NSArray *)arg1 ;
-(void)setStats:(HAMenstrualAlgorithmsStats *)arg1 ;
@end

