/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HKSource : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _bundleIdentifier;
	BOOL _localDevice;
	NSString* _owningAppBundleIdentifier;
	NSNumber* _sourceID;
	NSString* _productType;
	unsigned long long _options;

}

@property (setter=_setOwningAppBundleIdentifier:,getter=_owningAppBundleIdentifier,nonatomic,copy) NSString * owningAppBundleIdentifier;              //@synthesize owningAppBundleIdentifier=_owningAppBundleIdentifier - In the implementation block
@property (setter=_setSourceID:,getter=_sourceID,nonatomic,retain) NSNumber * sourceID;                                                               //@synthesize sourceID=_sourceID - In the implementation block
@property (assign,setter=_setLocalDevice:,getter=_isLocalDevice,nonatomic) BOOL localDevice;                                                          //@synthesize localDevice=_localDevice - In the implementation block
@property (setter=_setProductType:,getter=_productType,nonatomic,copy) NSString * productType;                                                        //@synthesize productType=_productType - In the implementation block
@property (assign,setter=_setOptions:,getter=_options,nonatomic) unsigned long long options;                                                          //@synthesize options=_options - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * bundleIdentifier; 
+(id)_privateSourceForClinicalAccountIdentifier:(id)arg1 name:(id)arg2 ;
+(id)_publicSourceForGatewayExternalIdentifier:(id)arg1 name:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)_uncachedDefaultSource;
+(id)_uncachedDefaultSourceWithEntitlements:(id)arg1 ;
+(id)_sourceBundleIdentifierWithEntitlements:(id)arg1 processBundleIdentifier:(id)arg2 isExtension:(BOOL)arg3 ;
+(unsigned long long)_sourceOptionsForAppEntitlements:(id)arg1 ;
+(BOOL)_representsCurrentDeviceWithBundleIdentifier:(id)arg1 ;
+(id)_currentSourceProductType:(BOOL)arg1 ;
+(id)_sourceNameWithRepresentsCurrentDevice:(BOOL)arg1 defaultSource:(BOOL)arg2 ;
+(id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1 ;
+(id)defaultSource;
+(id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4 ;
+(id)_researchStudiesDirectoryURL;
+(id)_localDeviceSource;
+(id)_connectedGymSource;
+(id)_generateIdentifierForAppleDevice;
+(BOOL)_isPlaceholderBundleIdentifier:(id)arg1 ;
+(id)_sourceWithBundleIdentifier:(id)arg1 defaultBundleIdentifier:(id)arg2 appEntitlements:(id)arg3 name:(id)arg4 ;
-(void)_setName:(id)arg1 ;
-(BOOL)_isApplication;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_options;
-(NSString *)bundleIdentifier;
-(void)_setOptions:(unsigned long long)arg1 ;
-(void)_setProductType:(id)arg1 ;
-(void)_setLocalDevice:(BOOL)arg1 ;
-(id)_owningAppBundleIdentifier;
-(BOOL)_isClinicalSource;
-(BOOL)_isResearchStudy;
-(BOOL)_isAppleDevice;
-(id)_deducedClinicalAccountIdentifier;
-(id)_fetchBundleWithError:(id*)arg1 ;
-(BOOL)_hasFirstPartyBundleID;
-(BOOL)_isConnectedGymSource;
-(void)_setOwningAppBundleIdentifier:(id)arg1 ;
-(void)_setSourceID:(id)arg1 ;
-(BOOL)_isLocalDevice;
-(id)_init;
-(id)init;
-(id)_sourceID;
-(BOOL)_requiresAuthorization;
-(void)_setBundleIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)_productType;
-(BOOL)_isAppleWatch;
-(NSString *)name;
-(BOOL)_isHidden;
-(BOOL)_isPreferredSource;
-(id)description;
@end

