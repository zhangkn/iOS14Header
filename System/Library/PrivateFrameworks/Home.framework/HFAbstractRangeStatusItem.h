/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Home/HFStatusItem.h>

@interface HFAbstractRangeStatusItem : HFStatusItem
+(long long)currentStateForResponses:(id)arg1 ;
+(unsigned long long)badgeTypeForState:(long long)arg1 ;
+(unsigned long long)statusItemCategory;
+(id)titleStringForState:(long long)arg1 ;
+(id)descriptionStringForCharacteristicType:(id)arg1 withResponses:(id)arg2 ;
+(id)displayTitleStringForService:(id)arg1 withResponse:(id)arg2 multipleServices:(BOOL)arg3 updateOptions:(id)arg4 ;
+(unsigned long long)abstractTargetModeInResponse:(id)arg1 ;
+(unsigned long long)abstractCurrentModeInResponse:(id)arg1 ;
+(id)_localizedStateStringForKey:(id)arg1 ;
+(BOOL)shouldShowAverageForRange:(id)arg1 ;
+(id)formatValue:(id)arg1 forCharacteristic:(id)arg2 ;
+(id)customValueFormatter;
+(BOOL)isPercentRange;
+(id)_defaultValueFormatter;
+(id)_localizedStringForKey:(id)arg1 ;
+(id)_localizedRangeStringForKey:(id)arg1 ;
+(/*^block*/id)displayValueComparator;
+(id)localizationKeyPrefix;
+(id)controllableServiceTypes;
+(id)sensorServiceTypes;
+(id)currentValueCharacteristicType;
+(id)targetValueCharacteristicType;
+(id)minimumTargetValueCharacteristicType;
+(id)maximumTargetValueCharacteristicType;
+(id)currentModeCharacteristicTypes;
+(id)targetModeCharacteristicTypes;
-(id)title;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg1 ;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end
