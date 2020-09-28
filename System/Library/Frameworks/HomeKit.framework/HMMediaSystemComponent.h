/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFUnfairLock, HMMediaProfile, HMMediaSystemRole, NSUUID, HMAccessory, NSString;

@interface HMMediaSystemComponent : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {

	HMFUnfairLock* _lock;
	HMMediaProfile* _mediaProfile;
	HMMediaSystemRole* _role;
	NSUUID* _uniqueIdentifier;
	HMAccessory* _accessory;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMMediaProfile * mediaProfile;              //@synthesize mediaProfile=_mediaProfile - In the implementation block
@property (nonatomic,readonly) HMMediaSystemRole * role;                          //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)serialize;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUID:(id)arg1 mediaProfile:(id)arg2 role:(id)arg3 ;
-(id)initWithMediaProfile:(id)arg1 role:(id)arg2 ;
-(void)_updateAccessoryReference:(id)arg1 ;
-(HMMediaSystemRole *)role;
-(HMMediaProfile *)mediaProfile;
-(HMAccessory *)accessory;
-(void)setRole:(HMMediaSystemRole *)arg1 ;
-(id)init;
-(NSUUID *)uniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)logIdentifier;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(void)_unconfigure;
-(NSString *)description;
@end
