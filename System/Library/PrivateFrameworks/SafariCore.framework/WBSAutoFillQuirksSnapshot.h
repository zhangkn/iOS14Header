/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSRemotePlistSnapshot.h>

@class NSDictionary, NSArray, NSSet, NSString;

@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {

	NSDictionary* _autoFillQuirks;
	NSArray* _domainsWithAssociatedCredentials;
	NSDictionary* _passwordRequirementsByDomain;
	NSArray* _domainsIneligibleForPasswordAuditing;
	NSArray* _domainsToConsiderIdentical;
	NSDictionary* _changePasswordURLsByDomain;
	NSSet* _domainsIneligibleForAutomaticLogin;
	NSSet* _domainsIneligibleForStreamlinedLogin;

}

@property (nonatomic,copy,readonly) NSDictionary * passwordRequirementsByDomain;                 //@synthesize passwordRequirementsByDomain=_passwordRequirementsByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainsWithAssociatedCredentials;                  //@synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainsIneligibleForPasswordAuditing;              //@synthesize domainsIneligibleForPasswordAuditing=_domainsIneligibleForPasswordAuditing - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainsToConsiderIdentical;                        //@synthesize domainsToConsiderIdentical=_domainsToConsiderIdentical - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * changePasswordURLsByDomain;                   //@synthesize changePasswordURLsByDomain=_changePasswordURLsByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSSet * domainsIneligibleForAutomaticLogin;                  //@synthesize domainsIneligibleForAutomaticLogin=_domainsIneligibleForAutomaticLogin - In the implementation block
@property (nonatomic,copy,readonly) NSSet * domainsIneligibleForStreamlinedLogin;                //@synthesize domainsIneligibleForStreamlinedLogin=_domainsIneligibleForStreamlinedLogin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)domainsIneligibleForAutomaticLogin;
-(NSSet *)domainsIneligibleForStreamlinedLogin;
-(id)init;
-(NSDictionary *)passwordRequirementsByDomain;
-(id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)plistDataWithFormat:(unsigned long long)arg1 ;
-(id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsToConsiderIdenticalFromAutoFillQuirls:(id)arg1 error:(id*)arg2 ;
-(id)_changePasswordURLStringsByDomainFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsIneligibleForAutomaticLoginFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(id)_domainsIneligibleForStreamlinedLoginFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(NSArray *)domainsWithAssociatedCredentials;
-(NSArray *)domainsIneligibleForPasswordAuditing;
-(NSArray *)domainsToConsiderIdentical;
-(NSDictionary *)changePasswordURLsByDomain;
@end

