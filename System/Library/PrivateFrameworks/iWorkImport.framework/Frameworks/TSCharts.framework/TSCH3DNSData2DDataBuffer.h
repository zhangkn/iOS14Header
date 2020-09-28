/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3D2DDataBuffer.h>

@class NSData, NSMutableData;

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer {

	NSData* mConstData;
	NSMutableData* mMutableData;

}

@property (nonatomic,readonly) NSData * NSData; 
+(id)bufferWithCapacityDimension:(const DataBuffer2DDimension*)arg1 mutableData:(id)arg2 ;
+(id)bufferWithCapacityDimension:(const DataBuffer2DDimension*)arg1 data:(id)arg2 ;
-(const void*)data;
-(void)dealloc;
-(NSData *)NSData;
-(unsigned long long)count;
-(void*)mutableData;
-(int)componentType;
-(unsigned long long)componentByteSize;
-(void)fillCapacity;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 data:(id)arg2 ;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 ;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 mutableData:(id)arg2 ;
-(void)resizeFillDimension:(const DataBuffer2DDimension*)arg1 ;
@end
