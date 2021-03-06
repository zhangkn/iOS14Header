/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface NEIPv6Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSArray* _addresses;
	NSArray* _networkPrefixLengths;
	NSArray* _includedRoutes;
	NSArray* _excludedRoutes;
	long long _configMethod;
	NSString* _router;

}

@property (assign) long long configMethod;                        //@synthesize configMethod=_configMethod - In the implementation block
@property (copy) NSString * router;                               //@synthesize router=_router - In the implementation block
@property (readonly) NSArray * addresses;                         //@synthesize addresses=_addresses - In the implementation block
@property (readonly) NSArray * networkPrefixLengths;              //@synthesize networkPrefixLengths=_networkPrefixLengths - In the implementation block
@property (copy) NSArray * includedRoutes;                        //@synthesize includedRoutes=_includedRoutes - In the implementation block
@property (copy) NSArray * excludedRoutes;                        //@synthesize excludedRoutes=_excludedRoutes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)addresses;
-(NSString *)router;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIncludedRoutes:(NSArray *)arg1 ;
-(id)initWithAddresses:(id)arg1 networkPrefixLengths:(id)arg2 ;
-(long long)configMethod;
-(NSArray *)includedRoutes;
-(NSArray *)excludedRoutes;
-(void)setConfigMethod:(long long)arg1 ;
-(void)setRouter:(NSString *)arg1 ;
-(void)setExcludedRoutes:(NSArray *)arg1 ;
-(BOOL)hasDefaultRoute;
-(NSArray *)networkPrefixLengths;
@end

