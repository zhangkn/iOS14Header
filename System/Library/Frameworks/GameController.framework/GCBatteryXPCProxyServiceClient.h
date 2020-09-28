/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCBatteryXPCProxyServiceClient <_GCIPCServiceClient>
@property (readonly) id<_GCIPCEndpointConnection> batteryXPCProxyServiceConnection; 
@property (readonly) id<GCBatteryXPCProxyServiceRemoteServerInterface> batteryXPCProxyServiceRemoteServer; 
@required
-(id<_GCIPCEndpointConnection>)batteryXPCProxyServiceConnection;
-(id<GCBatteryXPCProxyServiceRemoteServerInterface>)batteryXPCProxyServiceRemoteServer;

@end
