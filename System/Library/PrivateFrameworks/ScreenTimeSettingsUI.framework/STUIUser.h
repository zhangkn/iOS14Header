/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSManagedObjectID;

@interface STUIUser : NSObject <NSCopying> {

	BOOL _screenTimeEnabled;
	BOOL _managed;
	BOOL _webUsageEnabled;
	BOOL _remoteUser;
	BOOL _hasAllowances;
	unsigned long long _source;
	NSString* _name;
	NSNumber* _dsid;
	NSString* _altDSID;
	unsigned long long _type;
	NSString* _passcode;
	NSString* _recoveryAltDSID;
	NSManagedObjectID* _userObjectID;

}

@property (nonatomic,copy) NSManagedObjectID * userObjectID;                                 //@synthesize userObjectID=_userObjectID - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                                  //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                               //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,getter=isScreenTimeEnabled,nonatomic) BOOL screenTimeEnabled;              //@synthesize screenTimeEnabled=_screenTimeEnabled - In the implementation block
@property (assign,getter=isManaged,nonatomic) BOOL managed;                                  //@synthesize managed=_managed - In the implementation block
@property (assign,getter=isWebUsageEnabled,nonatomic) BOOL webUsageEnabled;                  //@synthesize webUsageEnabled=_webUsageEnabled - In the implementation block
@property (assign,getter=isRemoteUser,nonatomic) BOOL remoteUser;                            //@synthesize remoteUser=_remoteUser - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasAllowances;                                             //@synthesize hasAllowances=_hasAllowances - In the implementation block
@property (nonatomic,readonly) BOOL hasPasscode; 
@property (nonatomic,copy) NSString * passcode;                                              //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,copy) NSString * recoveryAltDSID;                                       //@synthesize recoveryAltDSID=_recoveryAltDSID - In the implementation block
@property (nonatomic,readonly) BOOL needsRecoveryAppleID; 
@property (nonatomic,readonly) BOOL canRecoveryAuthenticate; 
@property (nonatomic,copy,readonly) NSString * givenName; 
@property (nonatomic,readonly) BOOL isParent; 
@property (nonatomic,readonly) BOOL isChild; 
+(id)keyPathsForValuesAffectingHasPasscode;
+(id)keyPathsForValuesAffectingGivenName;
-(NSNumber *)dsid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)recoveryAltDSID;
-(NSString *)givenName;
-(BOOL)isRemoteUser;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(BOOL)isWebUsageEnabled;
-(void)setManaged:(BOOL)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(void)setWebUsageEnabled:(BOOL)arg1 ;
-(void)setRecoveryAltDSID:(NSString *)arg1 ;
-(NSString *)passcode;
-(NSManagedObjectID *)userObjectID;
-(void)setRemoteUser:(BOOL)arg1 ;
-(BOOL)canRecoveryAuthenticate;
-(BOOL)isManaged;
-(void)setAltDSID:(NSString *)arg1 ;
-(BOOL)isChild;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(BOOL)needsRecoveryAppleID;
-(void)setType:(unsigned long long)arg1 ;
-(BOOL)isParent;
-(BOOL)isScreenTimeEnabled;
-(void)setPasscode:(NSString *)arg1 ;
-(unsigned long long)source;
-(void)setUserObjectID:(NSManagedObjectID *)arg1 ;
-(NSString *)name;
-(void)setHasAllowances:(BOOL)arg1 ;
-(BOOL)hasPasscode;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(BOOL)hasAllowances;
@end

