/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface STDynamicActivityAttributionPublisher : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _serverXPCConnection;
	NSString* _cachedLocalizedPlistKey;
	NSString* _cachedAppBundleID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverXPCConnection;                     //@synthesize serverXPCConnection=_serverXPCConnection - In the implementation block
@property (nonatomic,retain) NSString * cachedLocalizedPlistKey;                        //@synthesize cachedLocalizedPlistKey=_cachedLocalizedPlistKey - In the implementation block
@property (nonatomic,retain) NSString * cachedAppBundleID;                              //@synthesize cachedAppBundleID=_cachedAppBundleID - In the implementation block
+(id)sharedInstance;
+(void)setCurrentAttributionKey:(id)arg1 andApp:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)_internalQueue_setupXPCConnectionIfNecessary;
-(NSXPCConnection *)serverXPCConnection;
-(void)setServerXPCConnection:(NSXPCConnection *)arg1 ;
-(void)_tearDownXPCConnection;
-(id)init;
-(void)setCurrentAttributionKey:(id)arg1 application:(id)arg2 ;
-(void)setCachedLocalizedPlistKey:(NSString *)arg1 ;
-(void)setCachedAppBundleID:(NSString *)arg1 ;
-(void)_internalQueue_sendAttributionKey:(id)arg1 andApp:(id)arg2 ;
-(void)_resendAttributionData;
-(NSString *)cachedLocalizedPlistKey;
-(NSString *)cachedAppBundleID;
@end

