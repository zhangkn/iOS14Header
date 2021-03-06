/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/Platform-Bluetooth.platform/Platform-Bluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCPlatformBluetoothStatusPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@optional
-(void)stopCheckingForUpdates:(id)arg1 forAccessory:(id)arg2;
-(void)startCheckingForUpdates:(id)arg1 forAccessory:(id)arg2;
-(int)updateBTComponent:(id)arg1 forAccessory:(id)arg2 withEnabledState:(BOOL)arg3;

@required
-(id)accessoryAttached:(id)arg1;
-(void)accessoryDetached:(id)arg1;

@end

