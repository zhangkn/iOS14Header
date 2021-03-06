/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <AccessoryiAP2Shim/AccessoryiAP2Shim-Structs.h>
@class NSMutableDictionary, NSObject, NSLock;

@interface ACCiAP2ShimServer : NSObject {

	BOOL _isShuttingDown;
	struct {
		unsigned deathBecomesUs : 1;
		unsigned serverExiting : 1;
		unsigned reserved : 30;
	}  _serverFlags;
	int _iap2AvailableNotifyToken;
	NSMutableDictionary* _delegateList;
	NSMutableDictionary* _accessoryViaKeyUIDList;
	NSMutableDictionary* _accessoryViaConnectionIDList;
	NSObject*<OS_dispatch_queue> _listQueue;
	NSObject*<OS_xpc_object> _listener;
	NSObject*<OS_dispatch_queue> _iap2dhighPriorityRootQueue;
	NSObject*<OS_dispatch_queue> _internalListenerQueue;
	NSMutableDictionary* _clients;
	NSLock* _clientLock;

}

@property (nonatomic,retain) NSMutableDictionary * delegateList;                                     //@synthesize delegateList=_delegateList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryViaKeyUIDList;                           //@synthesize accessoryViaKeyUIDList=_accessoryViaKeyUIDList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryViaConnectionIDList;                     //@synthesize accessoryViaConnectionIDList=_accessoryViaConnectionIDList - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> listQueue;                               //@synthesize listQueue=_listQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> listener;                                    //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) BOOL isShuttingDown;                                                  //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> iap2dhighPriorityRootQueue;              //@synthesize iap2dhighPriorityRootQueue=_iap2dhighPriorityRootQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalListenerQueue;                   //@synthesize internalListenerQueue=_internalListenerQueue - In the implementation block
@property (readonly) _serverFlags serverFlags;                                                       //@synthesize serverFlags=_serverFlags - In the implementation block
@property (readonly) NSMutableDictionary * clients;                                                  //@synthesize clients=_clients - In the implementation block
@property (readonly) NSLock * clientLock;                                                            //@synthesize clientLock=_clientLock - In the implementation block
@property (readonly) int iap2AvailableNotifyToken;                                                   //@synthesize iap2AvailableNotifyToken=_iap2AvailableNotifyToken - In the implementation block
+(id)sharedInstance;
+(void)postNSDistributeNotificationType:(id)arg1 notifyDict:(id)arg2 ;
+(void)resetServerState;
+(id)stringForClientID:(unsigned)arg1 ;
+(void)postiAP2NotificationType:(id)arg1 notifyDict:(id)arg2 ;
+(void)postNotifydNotificationType:(id)arg1 ;
+(void)postiAP2AppNotificationType:(id)arg1 notifyDict:(id)arg2 ;
-(NSMutableDictionary *)clients;
-(BOOL)isShuttingDown;
-(void)removeDelegate:(id)arg1 ;
-(void)notifyEAClientsOfAccessoryEvent:(const char*)arg1 accessory:(id)arg2 ;
-(void)removeAllClients;
-(void)addDelegate:(id)arg1 ;
-(void)_pollForDeathAfterPromptCompletes;
-(id)findClientWithID:(unsigned)arg1 ;
-(void)addAccessory:(id)arg1 ;
-(void)_startServer;
-(NSMutableDictionary *)accessoryViaConnectionIDList;
-(id)_findAccessoryForAccessoryUID:(id)arg1 andKeyTag:(id)arg2 ;
-(unsigned)addClientWithCapabilities:(unsigned)arg1 auditToken:(SCD_Struct_AC1)arg2 currentClientID:(unsigned)arg3 xpcConnection:(id)arg4 eaProtocols:(id)arg5 notifyOfAlreadyConnectedAccessories:(BOOL)arg6 andBundleId:(id)arg7 ;
-(void)_removeAccessory:(id)arg1 ;
-(void)setAccessoryViaKeyUIDList:(NSMutableDictionary *)arg1 ;
-(id)findAccessoryForConnectionID:(unsigned)arg1 ;
-(void)iterateDelegatesSync:(/*^block*/id)arg1 ;
-(void)setDelegateList:(NSMutableDictionary *)arg1 ;
-(void)stopServer;
-(void)dealloc;
-(void)_stopServer;
-(void)iterateDelegatesAsync:(/*^block*/id)arg1 ;
-(int)iap2AvailableNotifyToken;
-(void)removeClientForXPCConnection:(id)arg1 ;
-(void)_attachAccessory:(id)arg1 ;
-(id)findAccessoryForAccessoryUID:(id)arg1 andKeyTag:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)listQueue;
-(void)_addAccessory:(id)arg1 ;
-(void)removeClientWithID:(unsigned)arg1 ;
-(void)notifyEAClient:(id)arg1 ofAccessoryEvent:(const char*)arg2 accessory:(id)arg3 ;
-(id)findAccessoryForConnectionID:(unsigned)arg1 andKeyTag:(id)arg2 ;
-(_serverFlags)serverFlags;
-(void)_removeDelegate:(id)arg1 ;
-(id)init;
-(void)notifyEAClientsOfAccessoryConnection:(id)arg1 ;
-(void)_addDelegate:(id)arg1 ;
-(NSMutableDictionary *)delegateList;
-(id)_findAccessoryForConnectionID:(unsigned)arg1 ;
-(id)_findAccessoryForConnectionID:(unsigned)arg1 andKeyTag:(id)arg2 ;
-(void)notifyEAClientsOfAccessoryDisconnection:(id)arg1 ;
-(void)iterateAccessoriesAsync:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalListenerQueue;
-(NSLock *)clientLock;
-(void)_iterateAccessories:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)iap2dhighPriorityRootQueue;
-(void)setAccessoryViaConnectionIDList:(NSMutableDictionary *)arg1 ;
-(void)_iterateDelegates:(/*^block*/id)arg1 ;
-(void)startServer;
-(NSMutableDictionary *)accessoryViaKeyUIDList;
-(void)_takeClientAssertionsForAccessoryDisconnection;
-(void)_takeClientAssertionsForAccessoryConnection;
-(void)_detachAccessory:(id)arg1 ;
-(void)_resetServerState;
-(void)processDetachXPCConnection:(id)arg1 ;
-(BOOL)processXPCMessage:(id)arg1 connection:(id)arg2 ;
-(NSObject*<OS_xpc_object>)listener;
-(id)findClientWithXPCConnection:(id)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(unsigned)generateClientID;
-(void)notifyEAClientsOfAccessoryReconnection:(id)arg1 ;
-(void)iterateAccessoriesSync:(/*^block*/id)arg1 ;
@end

