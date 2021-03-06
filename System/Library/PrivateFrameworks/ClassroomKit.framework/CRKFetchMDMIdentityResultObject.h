/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSData, NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject {

	NSData* _mdmIdentityPersistentID;
	NSString* _mdmIdentityCommonName;

}

@property (nonatomic,retain) NSData * mdmIdentityPersistentID;              //@synthesize mdmIdentityPersistentID=_mdmIdentityPersistentID - In the implementation block
@property (nonatomic,retain) NSString * mdmIdentityCommonName;              //@synthesize mdmIdentityCommonName=_mdmIdentityCommonName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)mdmIdentityPersistentID;
-(NSString *)mdmIdentityCommonName;
-(void)setMdmIdentityPersistentID:(NSData *)arg1 ;
-(void)setMdmIdentityCommonName:(NSString *)arg1 ;
@end

