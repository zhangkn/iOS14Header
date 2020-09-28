/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMService.h>

@class NSString, IMAccount, NSDictionary, NSData, NSArray;

@interface IMServiceImpl : IMService {

	NSString* _name;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSString* _countryCode;
	IMAccount* _bestAccount;
	NSDictionary* _serviceDefaults;
	NSDictionary* _defaultSettings;
	NSData* _imageData;
	NSArray* _emailDomains;
	NSArray* _siblingServiceNames;
	unsigned _screenNameSensitivity;
	BOOL _hasLoadedServiceProperties;
	BOOL _handlesChatInvites;
	BOOL _supportsSMS;
	BOOL _supportsPhoneNumberMapping;
	BOOL _supportsGroupAttachments;
	BOOL _supportsMutatingGroupMembers;
	BOOL _supportsOneSessionForAllAccounts;
	BOOL _supportsAuthorization;
	BOOL _supportsRegistration;
	BOOL _supportsAdding;
	BOOL _supportsPresence;
	BOOL _supportsIDStatusLookup;
	BOOL _supportsDatabaseStorage;
	BOOL _supportsAudioMessages;
	BOOL _shouldInternationalizeNumbers;
	BOOL _supportsOfflineTransfers;
	BOOL _shouldDisableDeactivation;
	BOOL _ignoresNetworkConnectivity;
	BOOL _isPersistent;
	BOOL _isPlugInService;
	BOOL _allowsMultipleConnections;
	NSArray* _abProperties;
	NSDictionary* _serviceProps;
	NSArray* _addressBookProperties;
	NSString* _addressBookProperty;

}

@property (nonatomic,readonly) BOOL _wantsInternationizedNumbers; 
@property (nonatomic,readonly) BOOL _supportsDatabaseStorage; 
@property (nonatomic,retain) NSDictionary * serviceDefaults;                         //@synthesize serviceDefaults=_serviceDefaults - In the implementation block
@property (nonatomic,readonly) NSArray * accountIDs; 
@property (nonatomic,retain) NSString * countryCode;                                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL handlesChatInvites;                              //@synthesize handlesChatInvites=_handlesChatInvites - In the implementation block
@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shortName;                                 //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,retain) NSDictionary * serviceProperties; 
@property (nonatomic,retain) NSDictionary * defaultAccountSettings;                  //@synthesize defaultSettings=_defaultSettings - In the implementation block
@property (nonatomic,readonly) BOOL supportsAdding;                                  //@synthesize supportsAdding=_supportsAdding - In the implementation block
@property (nonatomic,readonly) BOOL supportsPresence;                                //@synthesize supportsPresence=_supportsPresence - In the implementation block
@property (nonatomic,readonly) BOOL supportsGroupAttachments;                        //@synthesize supportsGroupAttachments=_supportsGroupAttachments - In the implementation block
@property (nonatomic,readonly) BOOL supportsMutatingGroupMembers;                    //@synthesize supportsMutatingGroupMembers=_supportsMutatingGroupMembers - In the implementation block
@property (nonatomic,readonly) BOOL supportsOneSessionForAllAccounts;                //@synthesize supportsOneSessionForAllAccounts=_supportsOneSessionForAllAccounts - In the implementation block
@property (nonatomic,readonly) BOOL supportsRegistration;                            //@synthesize supportsRegistration=_supportsRegistration - In the implementation block
@property (nonatomic,readonly) BOOL supportsAuthorization;                           //@synthesize supportsAuthorization=_supportsAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL supportsPhoneNumberMapping;                      //@synthesize supportsPhoneNumberMapping=_supportsPhoneNumberMapping - In the implementation block
@property (nonatomic,readonly) BOOL supportsIDStatusLookup;                          //@synthesize supportsIDStatusLookup=_supportsIDStatusLookup - In the implementation block
@property (nonatomic,readonly) BOOL supportsOfflineTransfers;                        //@synthesize supportsOfflineTransfers=_supportsOfflineTransfers - In the implementation block
@property (nonatomic,readonly) BOOL supportsAudioMessages;                           //@synthesize supportsAudioMessages=_supportsAudioMessages - In the implementation block
@property (nonatomic,readonly) BOOL isPersistent;                                    //@synthesize isPersistent=_isPersistent - In the implementation block
@property (nonatomic,readonly) BOOL ignoresNetworkConnectivity;                      //@synthesize ignoresNetworkConnectivity=_ignoresNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) long long maxAttachmentSize; 
@property (nonatomic,readonly) unsigned IDSensitivity;                               //@synthesize screenNameSensitivity=_screenNameSensitivity - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableDeactivation;                       //@synthesize shouldDisableDeactivation=_shouldDisableDeactivation - In the implementation block
@property (nonatomic,readonly) NSArray * siblingServices; 
@property (nonatomic,readonly) BOOL isPlugInService;                                 //@synthesize isPlugInService=_isPlugInService - In the implementation block
@property (getter=isDiscontinued,nonatomic,readonly) BOOL discontinued; 
@property (nonatomic,readonly) NSArray * emailDomains;                               //@synthesize emailDomains=_emailDomains - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleConnections;                       //@synthesize allowsMultipleConnections=_allowsMultipleConnections - In the implementation block
@property (nonatomic,readonly) long long buddyNotesMaxByteLength; 
@property (nonatomic,readonly) NSData * serviceImageData; 
@property (nonatomic,readonly) NSArray * addressBookProperties;                      //@synthesize addressBookProperties=_addressBookProperties - In the implementation block
@property (nonatomic,readonly) NSString * addressBookProperty;                       //@synthesize addressBookProperty=_addressBookProperty - In the implementation block
@property (nonatomic,readonly) Class accountClass; 
+(id)supportedCountryCodes;
+(BOOL)hasAlias:(id)arg1 onAccountForService:(id)arg2 ;
+(id)operationalServicesWithCapability:(unsigned long long)arg1 ;
+(id)allServicesNonBlocking;
+(BOOL)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)arg1 ;
+(id)servicesWithCapability:(unsigned long long)arg1 ;
+(BOOL)_isSIMIdIDSRegisteredSIM:(id)arg1 ;
+(void)setServiceClass:(Class)arg1 ;
+(BOOL)mmsEnabled;
+(BOOL)iMessageEnabled;
+(BOOL)_deviceIsAltAccount;
+(BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3 ;
+(id)connectedServicesWithCapability:(unsigned long long)arg1 ;
+(BOOL)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3 ;
+(BOOL)smsEnabled;
+(id)serviceWithInternalName:(id)arg1 ;
+(id)_phoneNumberOnSubscriptionWithSIMID:(id)arg1 ;
+(BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 ;
+(BOOL)systemSupportsSMSSending;
+(Class)serviceClass;
+(id)serviceWithName:(id)arg1 ;
+(BOOL)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)arg1 previousService:(id)arg2 ;
+(BOOL)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long*)arg2 ;
+(id)activeServices;
+(id)allServices;
+(BOOL)mmsEnabledforPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)_readMMSUserOverride;
+(id)connectedServices;
-(NSArray *)emailDomains;
-(BOOL)equalID:(id)arg1 andID:(id)arg2 ;
-(BOOL)handlesChatInvites;
-(id)canonicalFormOfID:(id)arg1 ;
-(BOOL)supportsRegistration;
-(BOOL)initialSyncPerformed;
-(BOOL)supportsAuthorization;
-(void)disconnect;
-(long long)compareNames:(id)arg1 ;
-(NSString *)internalName;
-(BOOL)isPersistent;
-(NSArray *)addressBookProperties;
-(void)setServiceDefaults:(NSDictionary *)arg1 ;
-(NSArray *)siblingServices;
-(id)subtypeInformationForAccount:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)localizedShortName;
-(NSString *)shortName;
-(void)_loadPropertiesIfNeeded;
-(BOOL)supportsIDStatusLookup;
-(NSString *)addressBookProperty;
-(long long)maxAttachmentSize;
-(void)_blockUntilInitialSyncPerformed;
-(NSString *)countryCode;
-(NSArray *)accountIDs;
-(void)activeAccountsChanged:(id)arg1 ;
-(void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(NSDictionary *)defaultAccountSettings;
-(BOOL)isEnabled;
-(id)localizedName;
-(BOOL)shouldDisableDeactivation;
-(BOOL)supportsAudioMessages;
-(void)dealloc;
-(NSDictionary *)serviceProperties;
-(BOOL)supportsMutatingGroupMembers;
-(BOOL)_supportsDatabaseStorage;
-(id)infoForScreenName:(id)arg1 ;
-(unsigned long long)status;
-(BOOL)isPlugInService;
-(BOOL)allowsMultipleConnections;
-(NSDictionary *)serviceDefaults;
-(id)normalizedFormOfID:(id)arg1 ;
-(long long)buddyNotesMaxByteLength;
-(BOOL)supportsAdding;
-(id)myScreenNames;
-(void)setServiceProperties:(NSDictionary *)arg1 ;
-(NSData *)serviceImageData;
-(void)setDefaultAccountSettings:(NSDictionary *)arg1 ;
-(void)defaultsChanged:(id)arg1 ;
-(void)_calculateBestAccount;
-(BOOL)supportsPhoneNumberMapping;
-(BOOL)supportsOneSessionForAllAccounts;
-(void)doneSetup;
-(id)infoForPreferredScreenNames;
-(BOOL)isDiscontinued;
-(void)_syncWithRemoteBuddies;
-(BOOL)ignoresNetworkConnectivity;
-(NSString *)name;
-(BOOL)supportsOfflineTransfers;
-(BOOL)_wantsInternationizedNumbers;
-(long long)maxChatParticipantsForHandle:(id)arg1 simID:(id)arg2 ;
-(unsigned)IDSensitivity;
-(BOOL)supportsPresence;
-(id)description;
-(BOOL)supportsGroupAttachments;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)infoForAllScreenNames;
-(Class)accountClass;
@end
