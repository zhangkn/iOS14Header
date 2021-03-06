/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData;

@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying> {

	NSArray* _delegationAccountUUIDs;
	NSString* _deviceName;
	long long _securityMode;
	long long _serviceVersion;

}

@property (nonatomic,copy) NSArray * delegationAccountUUIDs;              //@synthesize delegationAccountUUIDs=_delegationAccountUUIDs - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) long long securityMode;                      //@synthesize securityMode=_securityMode - In the implementation block
@property (assign,nonatomic) long long serviceVersion;                    //@synthesize serviceVersion=_serviceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSData * TXTRecordData; 
-(NSString *)deviceName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)TXTRecordData;
-(id)initWithTXTRecordData:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setServiceVersion:(long long)arg1 ;
-(long long)serviceVersion;
-(void)setDelegationAccountUUIDs:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)delegationAccountUUIDs;
-(long long)securityMode;
-(unsigned long long)hash;
-(void)setSecurityMode:(long long)arg1 ;
-(id)description;
@end

