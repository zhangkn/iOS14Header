/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RCChangeTag : NSObject <RCSerializable, NSSecureCoding> {

	NSString* _identifier;
	NSString* _contentHash;
	NSString* _lastModifiedString;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentHash;                     //@synthesize contentHash=_contentHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastModifiedString;              //@synthesize lastModifiedString=_lastModifiedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)identifier;
-(NSString *)contentHash;
-(id)initWithIdentifier:(id)arg1 contentHash:(id)arg2 lastModifiedString:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)lastModifiedString;
-(id)dictionaryRepresentation;
@end
