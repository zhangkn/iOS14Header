/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSSOCore/AppSSOCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface SOProfile : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSArray* _URLPrefix;
	NSArray* _hosts;
	NSString* _extensionBundleIdentifier;
	NSString* _realm;

}

@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * URLPrefix;                               //@synthesize URLPrefix=_URLPrefix - In the implementation block
@property (nonatomic,retain) NSArray * hosts;                                   //@synthesize hosts=_hosts - In the implementation block
@property (nonatomic,retain) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * realm;                                  //@synthesize realm=_realm - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringWithProfileType:(long long)arg1 ;
-(NSString *)realm;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(NSArray *)URLPrefix;
-(void)setExtensionBundleIdentifier:(NSString *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setHosts:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(NSArray *)hosts;
-(void)setURLPrefix:(NSArray *)arg1 ;
-(id)description;
@end

