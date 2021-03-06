/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttributeDialog.h>

@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog {

	NSString* _code;

}

@property (nonatomic,copy) NSString * code;                                  //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateFormat; 
+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(NSString *)predicateFormat;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INCodableDescriptionFormatStringIDKey;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSString *)code;
-(id)__INCodableDescriptionFormatStringKey;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)__INCodableDescriptionCodeKey;
-(id)__INCodableDescriptionKey;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(id)__INIntentResponseCodableDescriptionCodeKey;
-(unsigned long long)hash;
-(id)__INTypeCodableDescriptionKey;
-(id)__INTypeCodableDescriptionCodeKey;
@end

