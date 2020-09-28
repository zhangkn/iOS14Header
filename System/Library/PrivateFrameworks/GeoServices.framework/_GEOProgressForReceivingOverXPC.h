/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface _GEOProgressForReceivingOverXPC : NSProgress {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)cancel;
-(void)_handleEvent:(id)arg1 ;
-(void)dealloc;
-(id)initVendingEndpoint:(id*)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
@end
