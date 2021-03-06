/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSString, WFContentAttribution;

@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding> {

	INSpeakableString* _speakableString;
	NSString* _accountIdentifier;
	unsigned long long _managedLevel;

}

@property (nonatomic,copy,readonly) NSString * accountIdentifier;                            //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long managedLevel;                              //@synthesize managedLevel=_managedLevel - In the implementation block
@property (nonatomic,readonly) INSpeakableString * speakableString;                          //@synthesize speakableString=_speakableString - In the implementation block
@property (nonatomic,readonly) WFContentAttribution * targetContentAttribution; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)managedLevelForNotesAccounts;
-(NSString *)accountIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(INSpeakableString *)speakableString;
-(WFContentAttribution *)targetContentAttribution;
-(unsigned long long)managedLevel;
-(id)initWithNoteGroupSpeakableString:(id)arg1 accountIdentifier:(id)arg2 managedLavel:(unsigned long long)arg3 ;
-(id)initWithNoteGroupSpeakableString:(id)arg1 ;
-(id)descriptorWithTargetAccountIdentifier:(id)arg1 targetManagedLevel:(unsigned long long)arg2 ;
@end

