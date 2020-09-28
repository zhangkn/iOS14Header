/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString, TPSNotification;

@interface TPSDocument : TPSSerializableObject <NSCopying, NSSecureCoding, NAIdentifiable> {

	NSString* _identifier;
	NSString* _variantID;
	NSString* _language;
	TPSNotification* _notification;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * variantID;                        //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSString * language;                         //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) TPSNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classSet;
+(BOOL)supportsSecureCoding;
+(id)deliveryInfoIdForDictionary:(id)arg1 ;
+(id)na_identity;
+(id)documentsForDictionary:(id)arg1 ;
+(id)deliveryInfoForDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setVariantID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)variantID;
-(TPSNotification *)notification;
-(NSString *)language;
-(NSString *)debugDescription;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 identifierKey:(id)arg3 ;
-(void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setNotification:(TPSNotification *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end
