/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponentsFormatter;

@interface CNContactFormatter : NSFormatter <NSSecureCoding> {

	BOOL _ignoresOrganization;
	BOOL _ignoresNickname;
	BOOL _emphasizesPrimaryNameComponent;
	NSPersonNameComponentsFormatter* _nameFormatter;
	long long _style;
	unsigned long long _fallbackStyle;
	long long _sortOrder;

}

@property (assign,nonatomic) BOOL ignoresOrganization;                         //@synthesize ignoresOrganization=_ignoresOrganization - In the implementation block
@property (assign,nonatomic) BOOL ignoresNickname;                             //@synthesize ignoresNickname=_ignoresNickname - In the implementation block
@property (assign,nonatomic) unsigned long long fallbackStyle;                 //@synthesize fallbackStyle=_fallbackStyle - In the implementation block
@property (assign,nonatomic) BOOL emphasizesPrimaryNameComponent;              //@synthesize emphasizesPrimaryNameComponent=_emphasizesPrimaryNameComponent - In the implementation block
@property (assign,nonatomic) long long sortOrder;                              //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) long long style;                                  //@synthesize style=_style - In the implementation block
+(id)sharedFullNameFormatterWithFallBacks;
+(id)sharedFullNameFormatter;
+(id)abbreviatedStringFromContact:(id)arg1 trimmingWhitespace:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)stringFromContact:(id)arg1 style:(long long)arg2 ;
+(long long)nameOrderForContact:(id)arg1 ;
+(id)descriptorForRequiredKeysForStyle:(long long)arg1 ;
+(id)attributedStringFromContact:(id)arg1 style:(long long)arg2 defaultAttributes:(id)arg3 ;
+(id)delimiterForContact:(id)arg1 ;
+(id)descriptorForRequiredKeysForNameOrder;
+(id)descriptorForRequiredKeysForDelimiter;
-(id)stringFromGroupIdentity:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(long long)sortOrder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortOrder:(long long)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)stringFromContact:(id)arg1 ;
-(void)setFallbackStyle:(unsigned long long)arg1 ;
-(void)setEmphasizesPrimaryNameComponent:(BOOL)arg1 ;
-(void)setIgnoresNickname:(BOOL)arg1 ;
-(long long)style;
-(id)descriptorForRequiredKeys;
-(id)stringFromPotentiallySuggestedContact:(id)arg1 relatedToProperty:(id)arg2 ;
-(id)init;
-(BOOL)ignoresOrganization;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)ignoresNickname;
-(void)setStyle:(long long)arg1 ;
-(unsigned long long)fallbackStyle;
-(id)attributedStringFromContact:(id)arg1 defaultAttributes:(id)arg2 ;
-(id)stringFromContact:(id)arg1 attributes:(id)arg2 ;
-(void)setIgnoresOrganization:(BOOL)arg1 ;
-(BOOL)emphasizesPrimaryNameComponent;
@end

