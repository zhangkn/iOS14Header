/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle {

	NSUUID* _deviceIdentifier;

}

@property (copy,readonly) NSUUID * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValidDestination:(id)arg1 ;
-(BOOL)isLocal;
-(NSUUID *)deviceIdentifier;
-(id)destination;
-(id)initWithDestination:(id)arg1 ;
-(id)privateDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

