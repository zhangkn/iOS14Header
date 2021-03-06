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

@class NSString;

@interface W5BluetoothDevice : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPaired;
	BOOL _isCloudPaired;
	BOOL _isConnected;
	BOOL _isLowEnergy;
	BOOL _isAppleDevice;
	NSString* _name;
	NSString* _address;
	unsigned long long _majorClass;
	unsigned long long _minorClass;
	long long _rssi;
	NSString* _afhMap;
	long long _connectionMode;
	unsigned long long _connectionModeInterval;
	long long _manufacturer;
	unsigned long long _lmpVersion;
	unsigned long long _lmpSubversion;
	long long _role;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * address;                                       //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL isPaired;                                          //@synthesize isPaired=_isPaired - In the implementation block
@property (assign,nonatomic) BOOL isCloudPaired;                                     //@synthesize isCloudPaired=_isCloudPaired - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                                       //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) unsigned long long majorClass;                          //@synthesize majorClass=_majorClass - In the implementation block
@property (assign,nonatomic) unsigned long long minorClass;                          //@synthesize minorClass=_minorClass - In the implementation block
@property (assign,nonatomic) BOOL isLowEnergy;                                       //@synthesize isLowEnergy=_isLowEnergy - In the implementation block
@property (assign,nonatomic) long long rssi;                                         //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy) NSString * afhMap;                                        //@synthesize afhMap=_afhMap - In the implementation block
@property (assign,nonatomic) long long connectionMode;                               //@synthesize connectionMode=_connectionMode - In the implementation block
@property (assign,nonatomic) unsigned long long connectionModeInterval;              //@synthesize connectionModeInterval=_connectionModeInterval - In the implementation block
@property (assign,nonatomic) long long manufacturer;                                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (assign,nonatomic) unsigned long long lmpVersion;                          //@synthesize lmpVersion=_lmpVersion - In the implementation block
@property (assign,nonatomic) unsigned long long lmpSubversion;                       //@synthesize lmpSubversion=_lmpSubversion - In the implementation block
@property (assign,nonatomic) long long role;                                         //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL isAppleDevice;                                     //@synthesize isAppleDevice=_isAppleDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setConnectionMode:(long long)arg1 ;
-(long long)manufacturer;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)isAppleDevice;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isConnected;
-(void)setRssi:(long long)arg1 ;
-(void)setManufacturer:(long long)arg1 ;
-(void)dealloc;
-(long long)role;
-(void)setRole:(long long)arg1 ;
-(NSString *)address;
-(long long)rssi;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)afhMap;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIsConnected:(BOOL)arg1 ;
-(BOOL)isPaired;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(long long)connectionMode;
-(id)description;
-(void)setIsPaired:(BOOL)arg1 ;
-(BOOL)isCloudPaired;
-(unsigned long long)majorClass;
-(unsigned long long)minorClass;
-(unsigned long long)connectionModeInterval;
-(unsigned long long)lmpVersion;
-(unsigned long long)lmpSubversion;
-(BOOL)isLowEnergy;
-(BOOL)isEqualToBluetoothDevice:(id)arg1 ;
-(void)setIsCloudPaired:(BOOL)arg1 ;
-(void)setMajorClass:(unsigned long long)arg1 ;
-(void)setMinorClass:(unsigned long long)arg1 ;
-(void)setAfhMap:(NSString *)arg1 ;
-(void)setConnectionModeInterval:(unsigned long long)arg1 ;
-(void)setLmpVersion:(unsigned long long)arg1 ;
-(void)setLmpSubversion:(unsigned long long)arg1 ;
-(void)setIsLowEnergy:(BOOL)arg1 ;
-(void)setIsAppleDevice:(BOOL)arg1 ;
@end

