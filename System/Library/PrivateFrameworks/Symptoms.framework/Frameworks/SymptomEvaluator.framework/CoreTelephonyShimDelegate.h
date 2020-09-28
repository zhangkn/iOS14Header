/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyShimDelegate <NSObject>
@optional
-(void)infoLinkStateChangedForSubscription:(id)arg1;
-(void)signalStrengthChangedForSubscription:(id)arg1;
-(void)infoTrafficClassChangedForSubscription:(id)arg1;
-(void)infoDataStallChangedForSubscription:(id)arg1;
-(void)cellInfoChangedForSubscription:(id)arg1;
-(void)infoLinkPowerCostChangedForSubscription:(id)arg1;
-(void)ctServerConnectionNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2;
-(void)infoDataTransferTimeEnabledChangedForSubscription:(id)arg1;
-(void)signalStrengthChanged:(id)arg1;
-(void)infoLinkQualityFingeprintChangedForSubscription:(id)arg1;
-(void)infoDataTransferTimeChangedForSubscription:(id)arg1;
-(void)ratSelectionChangedForSubscription:(id)arg1;
-(void)operatorNameChangedForSubscription:(id)arg1;
-(void)currentDataSIMIdentifier:(id)arg1;
-(void)rnfSettingChangedToFeatureEnabled:(BOOL)arg1 userEnabled:(BOOL)arg2;

@end
