/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordID, NSData;

@interface CKUserIdentityLookupInfo : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying> {

	BOOL _shouldReportMissingIdentity;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	CKRecordID* _userRecordID;
	NSData* _encryptedPersonalInfo;

}

@property (nonatomic,copy) NSString * emailAddress;                         //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) CKRecordID * userRecordID;                       //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL shouldReportMissingIdentity;              //@synthesize shouldReportMissingIdentity=_shouldReportMissingIdentity - In the implementation block
@property (nonatomic,retain) NSData * encryptedPersonalInfo;                //@synthesize encryptedPersonalInfo=_encryptedPersonalInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)lookupInfosWithPhoneNumbers:(id)arg1 ;
+(id)lookupInfosWithRecordIDs:(id)arg1 ;
+(id)lookupInfosWithEmails:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)emailAddress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(BOOL)shouldReportMissingIdentity;
-(long long)lookupField;
-(void)_stripPersonalInfo;
-(void)setShouldReportMissingIdentity:(BOOL)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)ckShortDescription;
-(id)CKPropertiesDescription;
-(id)CKXPCSuitableString;
-(BOOL)isEqual:(id)arg1 ;
-(id)lookupValue;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(id)initWithUserRecordID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(unsigned long long)hash;
-(NSData *)encryptedPersonalInfo;
-(void)setEncryptedPersonalInfo:(NSData *)arg1 ;
-(id)description;
-(CKRecordID *)userRecordID;
@end
