/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/_GEOMirroredProgress.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _GEOProgressForSendingOverXPC : _GEOMirroredProgress {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _endpoint;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _remoteConnections;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(void)cancel;
-(id)initWithMirroredProgress:(id)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(void)dealloc;
-(void)_connectionDidInvalidate;
-(void)_broadcastOverXPCConnections:(id)arg1 ;
-(id)initWithMirroredProgress:(id)arg1 endpoint:(id)arg2 ;
-(void)_update;
@end
