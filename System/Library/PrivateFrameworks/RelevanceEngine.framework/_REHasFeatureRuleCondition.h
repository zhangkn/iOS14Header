/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REFeature;

@interface _REHasFeatureRuleCondition : RECondition <REAutomaticExportedInterface> {

	BOOL _contains;
	REFeature* _feature;

}

@property (nonatomic,readonly) REFeature * feature;              //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) BOOL contains;                    //@synthesize contains=_contains - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(REFeature *)feature;
-(unsigned long long)hash;
-(BOOL)contains;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(id)initWithFeature:(id)arg1 contains:(BOOL)arg2 ;
@end

