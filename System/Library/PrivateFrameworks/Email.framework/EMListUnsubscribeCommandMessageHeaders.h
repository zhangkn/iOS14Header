/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface EMListUnsubscribeCommandMessageHeaders : NSObject <NSSecureCoding> {

	NSString* _firstRecipient;
	NSString* _subject;
	NSString* _firstSenderAddress;
	NSString* _listID;

}

@property (nonatomic,readonly) NSString * firstRecipient;                  //@synthesize firstRecipient=_firstRecipient - In the implementation block
@property (nonatomic,readonly) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * firstSenderAddress;              //@synthesize firstSenderAddress=_firstSenderAddress - In the implementation block
@property (nonatomic,readonly) NSString * listID;                          //@synthesize listID=_listID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)subject;
-(id)initWithHeaders:(id)arg1 ;
-(NSString *)firstSenderAddress;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)listID;
-(NSString *)firstRecipient;
@end

