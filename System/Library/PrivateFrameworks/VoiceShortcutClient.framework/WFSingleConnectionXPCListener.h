/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCInterface, NSXPCListener, NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface WFSingleConnectionXPCListener : NSObject <NSXPCListenerDelegate> {

	id _exportedObject;
	NSXPCInterface* _exportedInterface;
	NSXPCListener* _listener;
	NSXPCConnection* _activeConnection;

}

@property (nonatomic,readonly) id exportedObject;                               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,readonly) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * activeConnection;                //@synthesize activeConnection=_activeConnection - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)exportedObject;
-(NSXPCListenerEndpoint *)endpoint;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCConnection *)activeConnection;
-(NSXPCInterface *)exportedInterface;
-(id)initWithExportedObject:(id)arg1 exportedInterface:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setActiveConnection:(NSXPCConnection *)arg1 ;
@end

