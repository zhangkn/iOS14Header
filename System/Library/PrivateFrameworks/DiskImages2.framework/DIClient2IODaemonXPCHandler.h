/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiskImages2/DIBaseXPCHandler.h>

@class NSXPCListenerEndpoint;

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler {

	NSXPCListenerEndpoint* _xpcListenerEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * xpcListenerEndpoint;              //@synthesize xpcListenerEndpoint=_xpcListenerEndpoint - In the implementation block
-(void)createConnection;
-(id)remoteObjectInterface;
-(id)initWithEndpoint:(id)arg1 ;
-(BOOL)addToRefCountWithError:(id*)arg1 ;
-(NSXPCListenerEndpoint *)xpcListenerEndpoint;
-(void)setXpcListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
@end
