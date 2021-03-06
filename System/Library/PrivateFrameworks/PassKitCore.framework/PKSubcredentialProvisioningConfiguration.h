/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKSubcredentialProvisioningConfiguration : NSObject {

	long long _configurationType;

}

@property (nonatomic,readonly) long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
-(id)transitionTable;
-(id)initWithConfigurationType:(long long)arg1 ;
-(id)remoteDeviceInvitation;
-(id)remoteDeviceConfiguration;
-(long long)startingState;
-(long long)configurationType;
-(id)acceptInvitationConfiguration;
-(id)localDeviceConfiguration;
-(id)ownerConfiguration;
@end

