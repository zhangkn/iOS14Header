/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationLoginChoice : NSObject <NSCopying, NSSecureCoding> {

	BOOL _appleIDAuth;
	BOOL _createAppleID;
	NSString* _user;
	NSString* _site;

}

@property (nonatomic,copy) NSString * user;                                               //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * site;                                               //@synthesize site=_site - In the implementation block
@property (assign,getter=isAppleIDAuthorization,nonatomic) BOOL appleIDAuth;              //@synthesize appleIDAuth=_appleIDAuth - In the implementation block
@property (assign,getter=shouldCreateAppleID,nonatomic) BOOL createAppleID;               //@synthesize createAppleID=_createAppleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)user;
-(NSString *)site;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSite:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUser:(id)arg1 site:(id)arg2 ;
-(BOOL)isAppleIDAuthorization;
-(void)setAppleIDAuth:(BOOL)arg1 ;
-(BOOL)shouldCreateAppleID;
-(void)setCreateAppleID:(BOOL)arg1 ;
-(id)description;
@end

