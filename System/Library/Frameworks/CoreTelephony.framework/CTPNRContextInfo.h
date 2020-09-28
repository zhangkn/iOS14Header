/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPNRContextInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isReady;
	NSString* _plmn;
	NSString* _imsi;
	NSString* _phoneNumber;
	NSString* _phoneNumberOnSIM;

}

@property (assign,nonatomic) BOOL isReady;                             //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,retain) NSString * plmn;                          //@synthesize plmn=_plmn - In the implementation block
@property (nonatomic,retain) NSString * imsi;                          //@synthesize imsi=_imsi - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneNumberOnSIM;              //@synthesize phoneNumberOnSIM=_phoneNumberOnSIM - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)plmn;
-(NSString *)imsi;
-(void)setPlmn:(NSString *)arg1 ;
-(void)setImsi:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToPNRContextInfo:(id)arg1 ;
-(NSString *)phoneNumberOnSIM;
-(void)setPhoneNumberOnSIM:(NSString *)arg1 ;
-(BOOL)isReady;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsReady:(BOOL)arg1 ;
-(id)description;
@end
