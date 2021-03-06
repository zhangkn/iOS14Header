/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, ACAccount, NSObject, ACAccountStore, NSMutableDictionary, MCProfileConnection;

@interface WFManagedConfigurationProfile : NSObject {

	NSSet* _managedAppBundleIDs;
	ACAccount* _primaryAppleAccount;
	NSObject*<OS_dispatch_queue> _operatingQueue;
	ACAccountStore* _accountStore;
	NSMutableDictionary* _accounts;
	NSMutableDictionary* _accountIdentifiersByDataClass;
	MCProfileConnection* _profileConnection;

}

@property (nonatomic,readonly) ACAccount * primaryAppleAccount; 
@property (readonly) BOOL isOpenInRestrictionInEffect; 
@property (readonly) BOOL mayOpenFromUnmanagedToManaged; 
@property (readonly) BOOL mayOpenFromManagedToUnmanaged; 
@property (readonly) BOOL isWiFiPowerModificationAllowed; 
@property (readonly) BOOL isBluetoothModificationAllowed; 
@property (nonatomic,copy,readonly) NSSet * managedAppBundleIDs;                                 //@synthesize managedAppBundleIDs=_managedAppBundleIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> operatingQueue;                      //@synthesize operatingQueue=_operatingQueue - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccount * primaryAppleAccount;                                  //@synthesize primaryAppleAccount=_primaryAppleAccount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * accounts;                                   //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * accountIdentifiersByDataClass;              //@synthesize accountIdentifiersByDataClass=_accountIdentifiersByDataClass - In the implementation block
@property (nonatomic,copy,readonly) MCProfileConnection * profileConnection;                     //@synthesize profileConnection=_profileConnection - In the implementation block
+(id)defaultProfile;
-(NSSet *)managedAppBundleIDs;
-(BOOL)isBluetoothModificationAllowed;
-(BOOL)isOpenInRestrictionInEffect;
-(id)accountIdentifiersEnabledForDataclass:(id)arg1 ;
-(ACAccount *)primaryAppleAccount;
-(ACAccount *)primaryAppleAccount;
-(ACAccountStore *)accountStore;
-(BOOL)isWiFiPowerModificationAllowed;
-(id)init;
-(NSMutableDictionary *)accounts;
-(id)accountWithIdentifier:(id)arg1 ;
-(BOOL)mayOpenFromManagedToUnmanaged;
-(BOOL)isAppManaged:(id)arg1 ;
-(MCProfileConnection *)profileConnection;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)mayOpenFromUnmanagedToManaged;
-(void)handleAccountStoreDidChangeNotification:(id)arg1 ;
-(id)initWithProfileConnection:(id)arg1 accountStore:(id)arg2 ;
-(void)removeCachedChildrenAccountForAccount:(id)arg1 ;
-(void)handleManagedAppDidChangeNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)operatingQueue;
-(NSMutableDictionary *)accountIdentifiersByDataClass;
-(BOOL)isAccountBasedSourceApp:(id)arg1 ;
-(unsigned long long)managedLevelForContentOfURL:(id)arg1 ;
@end

