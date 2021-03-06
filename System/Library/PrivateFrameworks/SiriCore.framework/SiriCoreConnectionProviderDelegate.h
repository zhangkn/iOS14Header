/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriCoreConnectionProviderDelegate <NSObject>
@optional
-(void)connectionProvider:(id)arg1 receivedViabilityChangeNotification:(BOOL)arg2;
-(void)connectionProviderReceivedBetterRouteNotification:(id)arg1;

@required
-(void)connectionProvider:(id)arg1 receivedError:(id)arg2;

@end

