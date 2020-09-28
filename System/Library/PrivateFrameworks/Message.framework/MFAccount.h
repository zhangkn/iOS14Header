/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/EDAccount.h>
#import <libobjc.A.dylib/ECAuthenticatableAccount.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString, ACAccount, NSMutableDictionary, NSArray, ECAccount, EFLocked, NSDictionary, ECAuthenticationScheme;

@interface MFAccount : NSObject <EDAccount, ECAuthenticatableAccount, EFPubliclyDescribable> {

	ACAccount* _persistentAccount;
	os_unfair_lock_s _persistentAccountLock;
	NSMutableDictionary* _unsavedAccountProperties;
	os_unfair_lock_s _descriptionLock;
	os_unfair_lock_s _privacyDescriptionLock;
	NSString* _cachedPrivacySafeDescription;
	NSString* _cachedDescription;
	NSArray* emailAddressStrings;
	ECAccount* _baseAccount;
	NSString* _sourceApplicationBundleIdentifier;
	EFLocked* _currentConnections;

}

@property (nonatomic,readonly) EFLocked * currentConnections;                           //@synthesize currentConnections=_currentConnections - In the implementation block
@property (readonly) ACAccount * accountForRenewingCredentials; 
@property (readonly) ACAccount * persistentAccount; 
@property (readonly) ACAccount * parentAccount; 
@property (readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) ECAccount * baseAccount;                                 //@synthesize baseAccount=_baseAccount - In the implementation block
@property (getter=isManaged,nonatomic,readonly) BOOL managed; 
@property (readonly) NSDictionary * properties; 
@property (readonly) NSString * uniqueID; 
@property (copy,readonly) NSString * identifier; 
@property (readonly) NSString * syncStoreIdentifier; 
@property (readonly) NSString * type; 
@property (readonly) NSString * personaIdentifier; 
@property (readonly) NSString * managedTag; 
@property (retain) NSString * username; 
@property (nonatomic,copy) NSString * hostname; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,readonly) BOOL connectionsAreConstrained; 
@property (nonatomic,retain,readonly) NSString * oauth2Token; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;                //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * domain; 
@property (nonatomic,retain) ECAuthenticationScheme * preferredAuthScheme; 
@property (nonatomic,readonly) ACAccount * systemAccount; 
@property (nonatomic,copy,readonly) NSString * statisticsKind; 
@property (nonatomic,readonly) BOOL primaryiCloudAccount; 
@property (nonatomic,copy,readonly) NSArray * emailAddressStrings; 
@property (nonatomic,copy) NSString * password; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(id)accountTypeString;
+(BOOL)usesSSL;
+(id)hostname;
+(id)accountTypeIdentifier;
+(unsigned)defaultSecurePortNumber;
+(BOOL)shouldHealAccounts;
+(id)accountWithProperties:(id)arg1 ;
+(id)_accountClass;
+(id)_newPersistentAccount;
+(id)releaseAllConnectionsScheduler;
+(id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2 ;
+(BOOL)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3 ;
+(id)displayedAccountTypeString;
+(id)excludedAccountPropertyKeys;
+(id)predefinedValueForKey:(id)arg1 ;
+(void)setShouldHealAccounts:(BOOL)arg1 ;
+(id)newAccountWithDictionary:(id)arg1 ;
+(id)authSchemesForAccountClass;
+(id)accountWithPersistentAccount:(id)arg1 ;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(BOOL)isPredefinedAccountType;
+(id)propertiesWhichRequireValidation;
+(id)displayedShortAccountTypeString;
+(void*)legacyKeychainProtocol;
+(id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2 ;
+(BOOL)isCommonPortNumber:(unsigned)arg1 ;
+(BOOL)isSSLEditable;
+(id)saslProfileName;
+(id)supportedDataclasses;
+(unsigned)defaultPortNumber;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)identifier;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)ef_publicDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)syncStoreIdentifier;
-(id)accountPropertyForKey:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)_credential;
-(BOOL)usesSSL;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(ACAccount *)parentAccount;
-(NSString *)parentAccountIdentifier;
-(id)_password;
-(NSString *)username;
-(void)setHostname:(NSString *)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(BOOL)requiresAuthentication;
-(BOOL)isActive;
-(id)enabledDataclasses;
-(NSString *)personaIdentifier;
-(NSString *)uniqueID;
-(NSString *)hostname;
-(id)init;
-(BOOL)isManaged;
-(BOOL)primaryiCloudAccount;
-(NSDictionary *)properties;
-(NSString *)type;
-(id)_newConnection;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)domain;
-(unsigned)defaultSecurePortNumber;
-(id)initWithPersistentAccount:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(void)setPersistentAccount:(ACAccount *)arg1 ;
-(void)releaseAllConnections;
-(ECAccount *)baseAccount;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(ACAccount *)systemAccount;
-(id)_objectForAccountInfoKey:(id)arg1 ;
-(id)_privacySafeDescription;
-(ACAccount *)persistentAccount;
-(void)accountInfoDidChange;
-(void)setOAuth2Token:(id)arg1 refreshToken:(id)arg2 ;
-(void)_queueAccountInfoDidChange;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(ECAuthenticationScheme *)preferredAuthScheme;
-(BOOL)_boolForAccountInfoKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)_credentialCreateIfNecessary:(BOOL)arg1 error:(id*)arg2 ;
-(id)_passwordWithError:(id*)arg1 ;
-(ACAccount *)accountForRenewingCredentials;
-(BOOL)_renewCredentialsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)authenticatedConnection;
-(unsigned)portNumber;
-(BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned)arg1 ;
-(Class)connectionClass;
-(EFLocked *)currentConnections;
-(BOOL)_connectAndAuthenticate:(id)arg1 ;
-(void)setUsesSSL:(BOOL)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(id)certUIService;
-(id)clientCertificates;
-(void)setClientCertificates:(id)arg1 ;
-(void)setTryDirectSSL:(BOOL)arg1 ;
-(id)secureServiceName;
-(CFStringRef)connectionServiceType;
-(BOOL)allowsTrustPrompt;
-(id)networkAccountIdentifier;
-(NSString *)oauth2Token;
-(id)defaultConnectionSettings;
-(unsigned long long)credentialAccessibility;
-(id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3 ;
-(void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2 ;
-(id)missingPasswordErrorWithTitle:(id)arg1 ;
-(NSArray *)emailAddressStrings;
-(BOOL)canAuthenticateWithCurrentCredentials;
-(BOOL)hasPasswordCredential;
-(void)savePersistentAccount;
-(NSString *)statisticsKind;
-(void)setMissingPasswordError;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(void)removePersistentAccount;
-(void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2 ;
-(void)removeValueInAccountPropertiesForKey:(id)arg1 ;
-(id)valueInAccountPropertiesForKey:(id)arg1 ;
-(BOOL)canGoOffline;
-(NSString *)managedTag;
-(BOOL)supportsMailDrop;
-(id)_credentialCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)renewCredentialsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)fetchTokensIfNecessary:(id*)arg1 ;
-(void)releaseAllForcedConnections;
-(void)setPreferredAuthScheme:(ECAuthenticationScheme *)arg1 ;
-(BOOL)connectionsAreConstrained;
-(void)applySettingsAsDefault:(id)arg1 ;
-(id)alternateConnectionSettings;
-(id)insecureConnectionSettings;
-(id)secureConnectionSettings;
-(id)nameForMailboxUid:(id)arg1 ;
-(BOOL)shouldEnableAfterError:(id)arg1 ;
-(BOOL)enableAccount;
-(BOOL)isSyncingNotes;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(id)inaccessiblePasswordErrorWithTitle:(id)arg1 ;
-(id)loginDisabledErrorWithTitle:(id)arg1 ;
-(NSString *)password;
-(void)setDomain:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)serviceName;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)description;
-(unsigned)defaultPortNumber;
-(id)copyDiagnosticInformation;
-(id)accountClass;
@end
