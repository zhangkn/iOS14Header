/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSDevice : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfileVersion;
+(id)productVersion;
+(id)bagSubProfile;
+(id)deviceName;
+(id)bagKeySet;
+(id)phoneNumber;
+(id)serialNumber;
+(BOOL)isGift;
+(BOOL)saveDeviceOffersForAccount:(id)arg1 response:(id)arg2 logKey:(id)arg3 ;
+(BOOL)shouldPresentSetupOffersForAccount:(id)arg1 ;
+(void)setDeviceOffersCheckEncodingForRequestParameters:(id)arg1 ;
+(id)macAddressData;
+(BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 ;
+(BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 ;
+(void)registerCompanionWithSerialNumber:(id)arg1 ;
+(id)_dataForNVRAMKey:(id)arg1 ;
+(id)_systemVersionDictionary;
+(void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bagContract:(id)arg3 logKey:(id)arg4 ;
+(void)setBiometricState:(long long)arg1 ;
+(BOOL)isSecureElementAvailable;
+(BOOL)deviceIsiPod;
+(BOOL)deviceIsSeedBuild;
+(BOOL)deviceIsAppleTV;
+(id)macAddress;
+(id)language;
+(id)productType;
+(id)ROMAddress;
+(id)screenScale;
+(id)operatingSystem;
+(id)createBagForSubProfile;
+(BOOL)deviceIsAudioAccessory;
+(id)compatibleProductType;
+(id)deviceGUID;
+(id)uniqueDeviceId;
+(BOOL)deviceIsiPhone;
+(BOOL)isRunningInStoreDemoMode;
+(long long)biometricState;
+(BOOL)deviceIsiPad;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(BOOL)deviceIsAppleWatch;
+(BOOL)deviceIsMac;
+(id)buildVersion;
+(id)deviceOffers;
+(void)_performAuth;
+(id)MLBSerialNumber;
+(id)localIPAddress;
+(BOOL)deviceIsInternalBuild;
+(void)startListeningForDeviceLanguageChangeWithBagContract:(id)arg1 ;
+(void)stopListeningForDeviceLanguageChange;
+(BOOL)_setRawDeviceOffers:(id)arg1 offersStore:(id)arg2 ;
+(BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4 logKey:(id)arg5 ;
+(id)_followUpItemWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4 ;
+(BOOL)tearDownAllDeviceOfferFollowUpsForAccount:(id)arg1 logKey:(id)arg2 ;
+(BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bag:(id)arg3 logKey:(id)arg4 ;
+(BOOL)isEligibleForOffers;
+(void)_setDeviceEligibilityKeepingExistingDeviceOffers:(id)arg1 offersStore:(id)arg2 ;
+(void)saveDeviceOffers:(id)arg1 ;
+(BOOL)shouldPresentSetupOffersForAccount:(id)arg1 issues:(long long*)arg2 ;
+(BOOL)tearDownDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3 ;
+(BOOL)_shouldPostOffersUpdatedNotification:(id)arg1 oldOffers:(id)arg2 ;
+(BOOL)expressedIntent;
+(id)hardwarePlatform;
+(BOOL)deviceOffersContainType:(unsigned long long)arg1 ;
+(id)deviceOffersForType:(unsigned long long)arg1 ;
+(id)thinnedAppVariantId;
+(void)registerCompanionWithSerialNumber:(id)arg1 bag:(id)arg2 ;
+(id)_notificationIdFromFollowUpId:(id)arg1 account:(id)arg2 ;
+(void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 logKey:(id)arg4 ;
+(void)saveDeviceOfferEligibility:(id)arg1 ;
@end

