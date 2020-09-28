/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INVoiceCommandStepInfo : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _applicationIdentifier;
	long long _category;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) long long category;                                 //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)applicationIdentifier;
-(long long)category;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)initWithApplicationIdentifier:(id)arg1 category:(long long)arg2 name:(id)arg3 ;
-(NSString *)description;
@end
