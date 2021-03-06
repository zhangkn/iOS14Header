/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface SecureBackupBeginPasscodeRequestResults : NSObject <NSSecureCoding> {

	NSString* _iCloudEnvironment;
	NSString* _escrowFederation;
	NSData* _cert;
	NSString* _dsid;
	NSString* _uuid;

}

@property (readonly) NSString * iCloudEnvironment;              //@synthesize iCloudEnvironment=_iCloudEnvironment - In the implementation block
@property (readonly) NSString * escrowFederation;               //@synthesize escrowFederation=_escrowFederation - In the implementation block
@property (readonly) NSData * cert;                             //@synthesize cert=_cert - In the implementation block
@property (readonly) NSString * dsid;                           //@synthesize dsid=_dsid - In the implementation block
@property (readonly) NSString * uuid;                           //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dsid;
-(NSData *)cert;
-(NSString *)iCloudEnvironment;
-(NSString *)escrowFederation;
-(id)initWithStoredCertificate:(id)arg1 uuid:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

