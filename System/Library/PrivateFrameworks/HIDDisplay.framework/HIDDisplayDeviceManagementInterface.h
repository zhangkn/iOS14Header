/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;

}
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(BOOL)factoryReset:(unsigned char)arg1 securityToken:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)getSecurityToken:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)getHIDDevices;
-(BOOL)setupInterface;
@end
