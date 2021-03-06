/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MSIdleAutosaveItem : NSObject <NSSecureCoding> {

	NSString* _autosaveIdentifier;
	NSString* _subject;

}

@property (nonatomic,copy,readonly) NSString * autosaveIdentifier;              //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)withAutosaveIdentifier:(id)arg1 subject:(id)arg2 ;
-(NSString *)autosaveIdentifier;
-(NSString *)subject;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAutosaveIdentifier:(id)arg1 subject:(id)arg2 ;
@end

