/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _powerOn;
	BOOL _isDiscoverable;
	BOOL _isConnectable;
	BOOL _isScanning;
	NSString* _address;
	NSArray* _devices;

}

@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (assign,nonatomic) BOOL powerOn;                             //@synthesize powerOn=_powerOn - In the implementation block
@property (nonatomic,copy) NSString * address;                         //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL isDiscoverable;                      //@synthesize isDiscoverable=_isDiscoverable - In the implementation block
@property (assign,nonatomic) BOOL isConnectable;                       //@synthesize isConnectable=_isConnectable - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                          //@synthesize isScanning=_isScanning - In the implementation block
@property (nonatomic,copy) NSArray * devices;                          //@synthesize devices=_devices - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionary;
-(void)setIsScanning:(BOOL)arg1 ;
-(BOOL)isDiscoverable;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(void)dealloc;
-(BOOL)isConnectable;
-(NSString *)address;
-(BOOL)powerOn;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)devices;
-(unsigned long long)hash;
-(BOOL)isScanning;
-(id)description;
-(void)setPowerOn:(BOOL)arg1 ;
-(BOOL)isEqualToBluetoothStatus:(id)arg1 ;
-(void)setIsDiscoverable:(BOOL)arg1 ;
-(void)setIsConnectable:(BOOL)arg1 ;
@end

