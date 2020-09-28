/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _HMDDeviceHandle, HMDAccountHandle, NSString, NSData, NSUUID;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {

	_HMDDeviceHandle* _internal;

}

@property (copy,readonly) _HMDDeviceHandle * internal;                   //@synthesize internal=_internal - In the implementation block
@property (copy,readonly) HMDAccountHandle * accountHandle; 
@property (copy,readonly) NSString * destination; 
@property (copy,readonly) NSData * pushToken; 
@property (getter=isLocal,readonly) BOOL local; 
@property (getter=isGlobal,readonly) BOOL global; 
@property (copy,readonly) NSUUID * identifier; 
+(BOOL)supportsSecureCoding;
+(id)deviceHandleForDestination:(id)arg1 ;
-(NSData *)pushToken;
-(BOOL)isLocal;
-(NSUUID *)identifier;
-(NSString *)destination;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(id)initWithInternal:(id)arg1 ;
-(id)shortDescription;
-(id)init;
-(_HMDDeviceHandle *)internal;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
-(BOOL)matchesPushToken:(id)arg1 ;
@end
