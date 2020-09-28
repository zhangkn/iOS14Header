/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal, NSArray;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {

	AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal* _availableOutputDevices;

}

@property (nonatomic,readonly) NSArray * recentlyUsedDevices; 
@property (nonatomic,readonly) NSArray * otherDevices; 
+(id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)impl;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)availableOutputDeviceGroups;
-(NSArray *)otherDevices;
-(NSArray *)recentlyUsedDevices;
-(id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg1 ;
-(void)_loadOutputDevices;
@end
