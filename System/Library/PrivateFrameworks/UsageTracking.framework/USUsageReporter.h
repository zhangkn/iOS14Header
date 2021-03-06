/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface USUsageReporter : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)getLocalDeviceIdentifierAndReturnError:(id*)arg1 ;
+(void)synchronizeUsageWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)dealloc;
-(id)init;
-(void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)getLocalDeviceIdentifierAndReturnError:(id*)arg1 ;
-(void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

