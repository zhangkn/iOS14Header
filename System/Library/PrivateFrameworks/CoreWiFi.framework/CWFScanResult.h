/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSSet, NSData, NSString, CWFChannel, NSArray;

@interface CWFScanResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasWPAIE;
	BOOL _hasRSNIE;
	NSDictionary* _internal;

}

@property (nonatomic,copy) NSDictionary * internal;                                            //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSSet * properties; 
@property (nonatomic,copy,readonly) NSDictionary * scanRecord; 
@property (nonatomic,readonly) unsigned long long cacheAge; 
@property (nonatomic,copy,readonly) NSData * informationElementData; 
@property (nonatomic,copy,readonly) NSData * SSID; 
@property (nonatomic,copy,readonly) NSString * networkName; 
@property (nonatomic,copy,readonly) NSString * BSSID; 
@property (nonatomic,copy,readonly) CWFChannel * channel; 
@property (nonatomic,readonly) long long RSSI; 
@property (nonatomic,readonly) long long noise; 
@property (nonatomic,readonly) long long beaconInterval; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,readonly) long long airPortBaseStationModel; 
@property (nonatomic,readonly) BOOL isUnconfiguredAirPortBaseStation; 
@property (nonatomic,readonly) BOOL isPasspoint; 
@property (nonatomic,readonly) BOOL isPersonalHotspot; 
@property (nonatomic,readonly) BOOL isAppleSWAP; 
@property (nonatomic,readonly) BOOL isIBSS; 
@property (nonatomic,readonly) unsigned long long supportedSecurityTypes; 
@property (nonatomic,readonly) unsigned long long strongestSupportedSecurityType; 
@property (nonatomic,readonly) unsigned long long weakestSupportedSecurityType; 
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) BOOL isWEP; 
@property (nonatomic,readonly) BOOL isWAPI; 
@property (nonatomic,readonly) BOOL isWPA; 
@property (nonatomic,readonly) BOOL isWPA2; 
@property (nonatomic,readonly) BOOL isWPA3; 
@property (nonatomic,readonly) BOOL isEAP; 
@property (nonatomic,readonly) BOOL isPSK; 
@property (nonatomic,readonly) long long WAPISubtype; 
@property (nonatomic,readonly) int supportedPHYModes; 
@property (nonatomic,readonly) int fastestSupportedPHYMode; 
@property (nonatomic,readonly) int slowestSupportedPHYMode; 
@property (nonatomic,copy) NSDictionary * OSSpecificAttributes; 
@property (nonatomic,readonly) BOOL hasWPAIE;                                                  //@synthesize hasWPAIE=_hasWPAIE - In the implementation block
@property (nonatomic,readonly) unsigned long long WPAMulticastCipher; 
@property (nonatomic,readonly) NSArray * WPAUnicastCiphers; 
@property (nonatomic,readonly) NSArray * WPAAuthSelectors; 
@property (nonatomic,readonly) BOOL hasRSNIE;                                                  //@synthesize hasRSNIE=_hasRSNIE - In the implementation block
@property (nonatomic,readonly) unsigned long long RSNMulticastCipher; 
@property (nonatomic,readonly) unsigned long long RSNBroadcastCipher; 
@property (nonatomic,readonly) NSArray * RSNUnicastCiphers; 
@property (nonatomic,readonly) NSArray * RSNAuthSelectors; 
@property (nonatomic,readonly) int RSNCapabilities; 
@property (nonatomic,readonly) BOOL isMFPCapable; 
@property (nonatomic,readonly) BOOL isMFPRequired; 
@property (nonatomic,readonly) int accessNetworkType; 
@property (nonatomic,readonly) BOOL isInternetAccessible; 
@property (nonatomic,readonly) BOOL isAdditionalStepRequiredForAccess; 
@property (nonatomic,readonly) BOOL isEmergencyServicesReachable; 
@property (nonatomic,readonly) BOOL isUnauthenticatedEmergencyServiceAccessible; 
@property (nonatomic,readonly) long long venueGroup; 
@property (nonatomic,readonly) long long venueType; 
@property (nonatomic,copy,readonly) NSString * HESSID; 
@property (nonatomic,readonly) BOOL isUnconfiguredDevice; 
@property (nonatomic,readonly) BOOL providesInternetAccess; 
@property (nonatomic,readonly) BOOL supportsWPS; 
@property (nonatomic,readonly) BOOL supportsiAPOverWiFi; 
@property (nonatomic,readonly) BOOL supports2GHzNetworks; 
@property (nonatomic,readonly) BOOL supports5GHzNetworks; 
@property (nonatomic,readonly) BOOL supportsCarPlay; 
@property (nonatomic,readonly) BOOL supportsHomeKit; 
@property (nonatomic,readonly) BOOL supportsHomeKit2; 
@property (nonatomic,readonly) BOOL supportsAirPlay; 
@property (nonatomic,readonly) BOOL supportsAirPlay2; 
@property (nonatomic,readonly) BOOL supportsAirPrint; 
@property (nonatomic,readonly) BOOL supportsMFi; 
@property (nonatomic,readonly) BOOL supportsMFiHardwareAuth; 
@property (nonatomic,readonly) BOOL supportsMFiSoftwareTokenAuth; 
@property (nonatomic,readonly) BOOL supportsMFiSoftwareCertAuth; 
@property (nonatomic,readonly) BOOL supportsSecureWAC; 
@property (nonatomic,readonly) BOOL supportsWoW; 
@property (nonatomic,copy,readonly) NSString * friendlyName; 
@property (nonatomic,copy,readonly) NSString * manufacturerName; 
@property (nonatomic,copy,readonly) NSString * modelName; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * primaryMAC; 
@property (nonatomic,copy,readonly) NSString * bluetoothMAC; 
@property (nonatomic,copy,readonly) NSString * deviceID; 
@property (nonatomic,copy,readonly) NSDictionary * ANQPResponse; 
@property (nonatomic,copy,readonly) NSArray * cellularNetworkInfo; 
@property (nonatomic,copy,readonly) NSArray * NAIRealmNameList; 
@property (nonatomic,copy,readonly) NSArray * roamingConsortiumList; 
@property (nonatomic,copy,readonly) NSArray * operatorFriendlyNameList; 
@property (nonatomic,copy,readonly) NSArray * domainNameList; 
+(BOOL)supportsSecureCoding;
-(BOOL)isIBSS;
-(BOOL)isWEP;
-(BOOL)isWPA2;
-(BOOL)isOpen;
-(long long)RSSI;
-(BOOL)isEAP;
-(NSData *)SSID;
-(BOOL)isPasspoint;
-(BOOL)isWAPI;
-(long long)noise;
-(id)__descriptionForWPACipher:(int)arg1 ;
-(id)__descriptionForRSNIE;
-(BOOL)isAdditionalStepRequiredForAccess;
-(BOOL)isEqualToScanResult:(id)arg1 ;
-(unsigned long long)supportedSecurityTypes;
-(id)__requiredProperties;
-(void)setInternal:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)supportsAirPlay;
-(id)initWithScanRecord:(id)arg1 includeProperties:(id)arg2 ;
-(long long)venueType;
-(int)slowestSupportedPHYMode;
-(unsigned long long)RSNMulticastCipher;
-(long long)beaconInterval;
-(BOOL)isWPA3;
-(NSDictionary *)OSSpecificAttributes;
-(NSString *)countryCode;
-(NSArray *)WPAUnicastCiphers;
-(BOOL)hasWPAIE;
-(BOOL)supportsAirPlay2;
-(id)__descriptionForWPAIE;
-(unsigned long long)weakestSupportedSecurityType;
-(BOOL)isInternetAccessible;
-(unsigned long long)RSNBroadcastCipher;
-(BOOL)supports5GHzNetworks;
-(unsigned long long)strongestSupportedSecurityType;
-(int)fastestSupportedPHYMode;
-(BOOL)supportsMFiSoftwareCertAuth;
-(id)__descriptionForRSNCipher:(int)arg1 ;
-(long long)venueGroup;
-(BOOL)hasRSNIE;
-(NSArray *)RSNAuthSelectors;
-(BOOL)isPersonalHotspot;
-(NSString *)HESSID;
-(id)__descriptionForRSNAuthSel:(int)arg1 ;
-(NSDictionary *)scanRecord;
-(id)__descriptionForPHYMode:(int)arg1 ;
-(NSDictionary *)internal;
-(NSSet *)properties;
-(NSData *)informationElementData;
-(int)RSNCapabilities;
-(CWFChannel *)channel;
-(BOOL)providesInternetAccess;
-(BOOL)isUnconfiguredDevice;
-(NSArray *)domainNameList;
-(BOOL)isEmergencyServicesReachable;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)primaryMAC;
-(BOOL)supportsSecureWAC;
-(unsigned long long)WPAMulticastCipher;
-(id)initWithCoder:(id)arg1 ;
-(id)__internalDictionaryFromScanRecord:(id)arg1 includeProperties:(id)arg2 ;
-(BOOL)supportsHomeKit2;
-(NSString *)networkName;
-(int)accessNetworkType;
-(id)filteredScanResultWithProperties:(id)arg1 ;
-(NSArray *)WPAAuthSelectors;
-(BOOL)isWPA;
-(NSString *)deviceID;
-(long long)WAPISubtype;
-(BOOL)isUnconfiguredAirPortBaseStation;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPSK;
-(int)supportedPHYModes;
-(BOOL)supportsHomeKit;
-(NSArray *)roamingConsortiumList;
-(BOOL)supportsMFi;
-(BOOL)supportsMFiHardwareAuth;
-(NSArray *)NAIRealmNameList;
-(BOOL)supportsWoW;
-(BOOL)supportsAirPrint;
-(BOOL)isMFPCapable;
-(NSString *)manufacturerName;
-(BOOL)isUnauthenticatedEmergencyServiceAccessible;
-(unsigned long long)hash;
-(long long)airPortBaseStationModel;
-(BOOL)supportsWPS;
-(BOOL)supports2GHzNetworks;
-(id)__defaultProperties;
-(NSString *)BSSID;
-(BOOL)supportsiAPOverWiFi;
-(id)__descriptionForWPAAuthSel:(int)arg1 ;
-(NSArray *)cellularNetworkInfo;
-(NSString *)bluetoothMAC;
-(NSArray *)operatorFriendlyNameList;
-(id)__descriptionForAirPortBaseStationModel:(long long)arg1 ;
-(id)description;
-(NSArray *)RSNUnicastCiphers;
-(BOOL)isAppleSWAP;
-(BOOL)supportsMFiSoftwareTokenAuth;
-(NSString *)modelName;
-(NSString *)friendlyName;
-(BOOL)supportsCarPlay;
-(BOOL)isMFPRequired;
-(unsigned long long)cacheAge;
@end
