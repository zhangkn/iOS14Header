/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSUReadChannel.h>

@protocol OS_dispatch_data, OS_dispatch_queue;
@class NSObject, NSString;

@interface TSPMemoryReadChannel : NSObject <TSUReadChannel> {

	NSObject*<OS_dispatch_data> _dispatchData;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(void)close;
-(id)init;
-(BOOL)isValid;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(id)initWithNSData:(id)arg1 ;
-(id)initWithDispatchData:(id)arg1 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
-(void)readFromOffsetAndWait:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
@end

