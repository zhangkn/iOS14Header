/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUXPCCodable.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString;

@interface NXClient : NSObject <CUXPCCodable> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSObject*<OS_xpc_object> _xpcCnx;
	unsigned char _flags;
	unsigned _clientID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSObject*<OS_xpc_object> _testListenerEndpoint;

}

@property (assign,nonatomic) unsigned clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned char flags;                                        //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                       //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                             //@synthesize label=_label - In the implementation block
-(NSObject*<OS_xpc_object>)testListenerEndpoint;
-(unsigned)clientID;
-(void)setTestListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)invalidationHandler;
-(void)invalidate;
-(id)_ensureXPCStarted;
-(unsigned char)flags;
-(void)setFlags:(unsigned char)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_invalidated;
-(void)_xpcReceivedEvent:(id)arg1 ;
-(void)dealloc;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticShow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setClientID:(unsigned)arg1 ;
-(id)init;
-(void)_interrupted;
-(void)_xpcReceivedMessage:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)liveActionPerform:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(id)description;
@end
