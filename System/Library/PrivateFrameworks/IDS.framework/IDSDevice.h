/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class _IDSDevice, NSArray, NSUUID, NSData, NSDate, IDSEndpointCapabilities, NSString, IDSDestination;

@interface IDSDevice : NSObject {

	_IDSDevice* _internal;

}

@property (nonatomic,readonly) NSArray * linkedUserURIs; 
@property (setter=setNSUUID:,nonatomic,retain) NSUUID * nsuuid; 
@property (nonatomic,readonly) BOOL supportsApplePay; 
@property (nonatomic,readonly) BOOL supportsTethering; 
@property (nonatomic,readonly) BOOL supportsHandoff; 
@property (nonatomic,readonly) BOOL supportsiCloudPairing; 
@property (nonatomic,readonly) BOOL supportsSMSRelay; 
@property (nonatomic,readonly) BOOL supportsMMSRelay; 
@property (nonatomic,readonly) BOOL supportsPhoneCalls; 
@property (nonatomic,readonly) NSArray * identities; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSDate * lastActivityDate; 
@property (nonatomic,readonly) BOOL isCloudConnected; 
@property (nonatomic,readonly) IDSEndpointCapabilities * capabilities; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * uniqueIDOverride; 
@property (nonatomic,readonly) NSString * modelIdentifier; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) SCD_Struct_ID4 operatingSystemVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * service; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) BOOL isHSATrusted; 
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isLocallyPaired; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) long long relationship; 
@property (nonatomic,readonly) unsigned long long pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned long long minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long maxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long serviceMinCompatibilityVersion; 
@property (getter=isNearby,nonatomic,readonly) BOOL nearby; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) IDSDestination * destination; 
@property (nonatomic,readonly) BOOL locallyPresent; 
-(NSString *)productVersion;
-(NSData *)pushToken;
-(IDSDestination *)destination;
-(BOOL)supportsHandoff;
-(void)_setService:(id)arg1 ;
-(BOOL)isConnected;
-(id)fullDescription;
-(void)_addIdentity:(id)arg1 ;
-(NSArray *)linkedUserURIs;
-(BOOL)supportsSMSRelay;
-(BOOL)supportsMMSRelay;
-(BOOL)isHSATrusted;
-(IDSEndpointCapabilities *)capabilities;
-(BOOL)supportsPhoneCalls;
-(BOOL)locallyPresent;
-(unsigned long long)maxCompatibilityVersion;
-(unsigned long long)serviceMinCompatibilityVersion;
-(SCD_Struct_ID4)operatingSystemVersion;
-(NSUUID *)nsuuid;
-(void)dealloc;
-(NSString *)productName;
-(long long)relationship;
-(id)compactDescription;
-(NSString *)enclosureColor;
-(id)_initWithDictionary:(id)arg1 ;
-(BOOL)isActive;
-(NSString *)uniqueID;
-(NSString *)deviceColor;
-(BOOL)isNearby;
-(NSDate *)lastActivityDate;
-(NSString *)service;
-(BOOL)supportsTethering;
-(NSArray *)identities;
-(BOOL)isDefaultPairedDevice;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)minCompatibilityVersion;
-(NSString *)name;
-(BOOL)isCloudConnected;
-(BOOL)supportsApplePay;
-(void)setNSUUID:(id)arg1 ;
-(NSString *)uniqueIDOverride;
-(unsigned long long)pairingProtocolVersion;
-(NSString *)modelIdentifier;
-(void)_setAccount:(id)arg1 ;
-(id)description;
-(BOOL)isLocallyPaired;
-(BOOL)supportsiCloudPairing;
-(id)_internal;
-(NSString *)productBuildVersion;
@end

