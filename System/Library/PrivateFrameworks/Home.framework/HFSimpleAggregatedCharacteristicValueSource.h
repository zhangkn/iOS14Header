/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:25 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFLightProfileAggregatedValueSource.h>
#import <libobjc.A.dylib/HFAggregatedCharacteristicValueSource.h>

@protocol HFCharacteristicValueSource;
@class NSSet, HFServiceDescriptor, NSDictionary, NSString;

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFLightProfileAggregatedValueSource, HFAggregatedCharacteristicValueSource> {

	NSSet* _allServices;
	NSSet* _characteristics;
	HFServiceDescriptor* _primaryServiceDescriptor;
	id<HFCharacteristicValueSource> _valueSource;
	NSDictionary* _characteristicsByType;

}

@property (nonatomic,readonly) NSSet * lightProfiles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * characteristicsByType;                   //@synthesize characteristicsByType=_characteristicsByType - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allServices;                                    //@synthesize allServices=_allServices - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;                 //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,copy,readonly) NSSet * characteristics;                                //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,readonly) HFServiceDescriptor * primaryServiceDescriptor;              //@synthesize primaryServiceDescriptor=_primaryServiceDescriptor - In the implementation block
+(id)na_identity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristics:(id)arg2 primaryServiceDescriptor:(id)arg3 ;
-(BOOL)isNaturalLightingSupported;
-(id)writeNaturalLightEnabledState:(BOOL)arg1 ;
-(NSSet *)characteristics;
-(HFServiceDescriptor *)primaryServiceDescriptor;
-(NSDictionary *)characteristicsByType;
-(void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3 ;
-(void)commitTransactionWithReason:(id)arg1 ;
-(id)readValuesForCharacteristicTypes:(id)arg1 ;
-(id)writeValuesForCharacteristicTypes:(id)arg1 ;
-(id)metadataForCharacteristicType:(id)arg1 ;
-(id)readValuesForServiceStateRecipe:(id)arg1 ;
-(id)writeValuesForCharacteristicRecipes:(id)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(unsigned long long)hash;
-(id)allCharacteristicsForCharacteristicType:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 services:(id)arg2 primaryServiceDescriptor:(id)arg3 ;
-(NSSet *)allServices;
-(BOOL)isNaturalLightingEnabled;
-(NSSet *)lightProfiles;
@end

