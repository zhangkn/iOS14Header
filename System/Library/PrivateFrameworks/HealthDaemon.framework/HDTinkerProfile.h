/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDProfile.h>

@interface HDTinkerProfile : HDProfile
-(void)triggerDeletion;
-(void)awakeFromDisk;
-(id)pairedNRDeviceUUIDWithError:(id*)arg1 ;
-(BOOL)setPairedNRDeviceUUID:(id)arg1 error:(id*)arg2 ;
-(id)dsidWithError:(id*)arg1 ;
-(BOOL)setDSID:(id)arg1 error:(id*)arg2 ;
@end

