/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EXExtensionContextVending <NSObject>
@required
-(void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)_hostDidBecomeActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)_hostWillResignActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)_hostDidEnterBackgroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)_hostWillEnterForegroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2;

@end
