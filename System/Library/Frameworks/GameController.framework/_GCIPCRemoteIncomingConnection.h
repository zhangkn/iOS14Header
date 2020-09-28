/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/_GCIPCRemoteConnection.h>
#import <libobjc.A.dylib/_GCIPCIncomingConnection.h>

@class _GCIPCRemoteProcess;

@interface _GCIPCRemoteIncomingConnection : _GCIPCRemoteConnection <_GCIPCIncomingConnection> {

	_GCIPCRemoteProcess* _process;

}

@property (nonatomic,__weak,readonly) id<_GCIPCProcess> process;              //@synthesize process=_process - In the implementation block
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
+(id)sharedConnectionWorkloop;
-(id)valueForEntitlement:(id)arg1 ;
-(id)initWithConnection:(id)arg1 fromProcess:(id)arg2 ;
-(id<_GCIPCProcess>)process;
-(id)initWithConnection:(id)arg1 ;
-(id)remoteProxy;
-(id)remoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end
