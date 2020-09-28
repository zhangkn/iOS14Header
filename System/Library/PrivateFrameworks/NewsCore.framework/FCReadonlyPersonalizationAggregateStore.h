/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCReadonlyPersonalizationAggregateStore.h>

@protocol FCReadonlyPersonalizationAggregateStore <NSObject>
@required
-(id)aggregatesForFeatures:(id)arg1;
-(void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2;
-(id)baselineAggregateWithConfigurableValues:(id)arg1;

@end


@protocol FCDerivedPersonalizationData;
@class NSMutableDictionary, NSString;

@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore> {

	id<FCDerivedPersonalizationData> _derivedPersonalizationData;
	NSMutableDictionary* _overrideAggregatesByFeatureKey;

}

@property (nonatomic,retain) id<FCDerivedPersonalizationData> derivedPersonalizationData;              //@synthesize derivedPersonalizationData=_derivedPersonalizationData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * overrideAggregatesByFeatureKey;                     //@synthesize overrideAggregatesByFeatureKey=_overrideAggregatesByFeatureKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDerivedPersonalizationData:(id<FCDerivedPersonalizationData>)arg1 ;
-(id)aggregatesForFeatures:(id)arg1 ;
-(id<FCDerivedPersonalizationData>)derivedPersonalizationData;
-(NSMutableDictionary *)overrideAggregatesByFeatureKey;
-(void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 configurableValues:(id)arg7 ;
-(void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(BOOL)arg5 configurableValues:(id)arg6 ;
-(void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2 ;
-(id)initWithDerivedPersonalizationData:(id)arg1 ;
-(void)setOverrideAggregatesByFeatureKey:(NSMutableDictionary *)arg1 ;
-(id)baselineAggregateWithConfigurableValues:(id)arg1 ;
@end
