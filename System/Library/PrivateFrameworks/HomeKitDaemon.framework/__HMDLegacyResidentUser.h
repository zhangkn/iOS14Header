/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUser.h>

@class HMDResidentUser;

@interface __HMDLegacyResidentUser : HMDUser {

	HMDResidentUser* _residentUser;

}

@property (nonatomic,readonly) HMDResidentUser * residentUser;              //@synthesize residentUser=_residentUser - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRemoteGateway;
-(id)initWithResidentUser:(id)arg1 ;
-(HMDResidentUser *)residentUser;
@end

