/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface HREUserProfiler : NSObject {

	NSDictionary* _attributePrefrences;
	NSDictionary* _adjustedAttributePrefrences;
	double _averagePrefrenceScore;
	unsigned long long _userProficiency;

}

@property (nonatomic,retain) NSDictionary * attributePrefrences;                      //@synthesize attributePrefrences=_attributePrefrences - In the implementation block
@property (nonatomic,retain) NSDictionary * adjustedAttributePrefrences;              //@synthesize adjustedAttributePrefrences=_adjustedAttributePrefrences - In the implementation block
@property (assign,nonatomic) double averagePrefrenceScore;                            //@synthesize averagePrefrenceScore=_averagePrefrenceScore - In the implementation block
@property (assign,nonatomic) unsigned long long userProficiency;                      //@synthesize userProficiency=_userProficiency - In the implementation block
-(id)initWithHomeManager:(id)arg1 ;
-(id)description;
-(id)getUserPreferencesCategoriesMap;
-(id)getUserAttributePreferences:(id)arg1 homeManager:(id)arg2 ;
-(void)setAttributePrefrences:(NSDictionary *)arg1 ;
-(NSDictionary *)attributePrefrences;
-(double)getUserAverageAttributePreference:(id)arg1 ;
-(void)setAveragePrefrenceScore:(double)arg1 ;
-(id)getAdjustedUserAttributePreferences:(id)arg1 ;
-(void)setAdjustedAttributePrefrences:(NSDictionary *)arg1 ;
-(long long)calculateUserProficiency:(id)arg1 ;
-(void)setUserProficiency:(unsigned long long)arg1 ;
-(double)averagePrefrenceScore;
-(NSDictionary *)adjustedAttributePrefrences;
-(unsigned long long)userProficiency;
@end
