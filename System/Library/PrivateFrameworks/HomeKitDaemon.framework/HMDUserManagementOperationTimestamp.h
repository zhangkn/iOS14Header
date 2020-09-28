/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDDevice, NSDate, NSNumber;

@interface HMDUserManagementOperationTimestamp : HMFObject <NSSecureCoding> {

	HMDDevice* _device;
	NSDate* _timestamp;
	NSNumber* _state;

}

@property (readonly) HMDDevice * device;              //@synthesize device=_device - In the implementation block
@property (readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) NSNumber * state;                //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDDevice *)device;
-(id)attributeDescriptions;
-(NSDate *)timestamp;
-(id)shortDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)state;
-(id)initWithDevice:(id)arg1 state:(unsigned long long)arg2 ;
@end
