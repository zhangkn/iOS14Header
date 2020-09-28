/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPresent;
	BOOL _isEditable;
	BOOL _isRead;
	NSString* _label;
	NSString* _number;
	NSString* _displayPhoneNumber;

}

@property (nonatomic,retain) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * number;                          //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) NSString * displayPhoneNumber;              //@synthesize displayPhoneNumber=_displayPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL isPresent;                             //@synthesize isPresent=_isPresent - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                            //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) BOOL isRead;                                //@synthesize isRead=_isRead - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)number;
-(BOOL)isEditable;
-(void)setIsEditable:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRead;
-(void)setIsPresent:(BOOL)arg1 ;
-(void)setNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayPhoneNumber;
-(BOOL)isPresent;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDisplayPhoneNumber:(NSString *)arg1 ;
-(id)description;
-(void)setIsRead:(BOOL)arg1 ;
@end
