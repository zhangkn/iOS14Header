/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthService.h>

@interface HDEurotasService : HDHealthService
+(id)serviceUUID;
+(long long)serviceType;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4 ;
-(id)servicesInProfile;
@end
