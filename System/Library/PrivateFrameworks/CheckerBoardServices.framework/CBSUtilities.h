/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CBSUtilities : NSObject
+(id)proxyServer;
+(BOOL)_currentProcessHasEntitlement:(id)arg1 ;
+(BOOL)isCheckerBoardActive;
+(void)exitCheckerBoard;
+(void)showSceneStatusBar;
+(void)hideSceneStatusBar;
+(void)dimDisplay;
+(void)undimDisplay;
+(void)disableNetworkReconnect;
+(void)enableNetworkReconnect;
+(BOOL)rebootToCheckerBoard;
+(void)sceneStatusBarStyle:(long long)arg1 ;
@end
