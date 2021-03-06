/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_LTClientConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSMutableArray, _LTTranslationServer, NSString;

@interface _LTDaemon : NSObject <NSXPCListenerDelegate, _LTClientConnectionDelegate> {

	NSXPCListener* _translationListener;
	NSObject*<OS_dispatch_queue> _listenerQueue;
	NSMutableArray* _connections;
	_LTTranslationServer* _server;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(void)_setupMemoryWarningListener;
-(void)clientConnectionClosed:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)init;
@end

