/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ICLocalStoreAccountProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
+(BOOL)supportsSecureCoding;
-(NSString *)storefrontIdentifier;
-(NSDictionary *)propertyListRepresentation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(void)_copyLocalStoreAccountPropertiesToOtherInstance:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)description;
@end

