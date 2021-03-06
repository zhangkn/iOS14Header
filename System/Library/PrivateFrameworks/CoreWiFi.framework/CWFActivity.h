/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface CWFActivity : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _reason;
	long long _type;
	unsigned long long _timeout;

}

@property (nonatomic,copy) NSUUID * UUID;                             //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long timeout;              //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activityWithType:(long long)arg1 reason:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timeout;
-(NSUUID *)UUID;
-(void)setTimeout:(unsigned long long)arg1 ;
-(id)init;
-(void)setReason:(NSString *)arg1 ;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSString *)reason;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqualToActivity:(id)arg1 ;
@end

