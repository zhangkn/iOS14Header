/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXVoicemailControllerHostProtocol.h>
#import <libobjc.A.dylib/CXVoicemailControllerVendorProtocol.h>

@protocol CXVoicemailControllerHostConnectionDelegate, OS_dispatch_queue;
@class NSString, NSURL, NSObject, NSXPCConnection, NSSet;

@interface CXVoicemailControllerHostConnection : NSObject <CXVoicemailControllerHostProtocol, CXVoicemailControllerVendorProtocol> {

	NSString* _applicationIdentifier;
	NSURL* _bundleURL;
	id<CXVoicemailControllerHostConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSXPCConnection* _connection;
	NSSet* _capabilities;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                       //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                                                 //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                                //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSSet * capabilities;                                                             //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) id<CXVoicemailControllerVendorProtocol> remoteObjectProxy; 
@property (getter=isPermittedToUsePrivateAPI,nonatomic,readonly) BOOL permittedToUsePrivateAPI; 
@property (assign,nonatomic,__weak) id<CXVoicemailControllerHostConnectionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCapabilities:(NSSet *)arg1 ;
-(NSURL *)bundleURL;
-(id<CXVoicemailControllerVendorProtocol>)remoteObjectProxy;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(BOOL)isPermittedToUsePrivateAPI;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSSet *)capabilities;
-(NSString *)applicationIdentifier;
-(NSXPCConnection *)connection;
-(void)dealloc;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)setDelegate:(id<CXVoicemailControllerHostConnectionDelegate>)arg1 ;
-(id<CXVoicemailControllerHostConnectionDelegate>)delegate;
-(NSString *)description;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 serialQueue:(id)arg2 ;
-(oneway void)requestVoicemails:(/*^block*/id)arg1 ;
-(oneway void)addOrUpdateVoicemails:(id)arg1 ;
-(oneway void)removeVoicemails:(id)arg1 ;
@end
