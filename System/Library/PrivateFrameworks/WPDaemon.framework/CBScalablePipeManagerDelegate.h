/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBScalablePipeManagerDelegate <NSObject>
@optional
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;

@required
-(void)scalablePipeManagerDidUpdateState:(id)arg1;

@end
