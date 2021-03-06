/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface HMFaceprint : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSData* _data;
	NSUUID* _modelUUID;
	NSUUID* _faceCropUUID;

}

@property (copy,readonly) NSUUID * UUID;                      //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (copy,readonly) NSUUID * modelUUID;                 //@synthesize modelUUID=_modelUUID - In the implementation block
@property (copy,readonly) NSUUID * faceCropUUID;              //@synthesize faceCropUUID=_faceCropUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(NSUUID *)modelUUID;
-(NSUUID *)UUID;
-(NSUUID *)faceCropUUID;
-(id)initWithUUID:(id)arg1 data:(id)arg2 modelUUID:(id)arg3 faceCropUUID:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

