/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@interface TSCH3DDataBuffer : NSObject

@property (nonatomic,readonly) unsigned long long componentByteSize; 
@property (nonatomic,readonly) unsigned long long elementByteSize; 
@property (nonatomic,readonly) unsigned long long byteSize; 
@property (nonatomic,readonly) tvec3<int> size; 
@property (nonatomic,readonly) tvec2<int> size2; 
@property (nonatomic,readonly) BOOL hasLevels; 
-(unsigned long long)byteSize;
-(tvec2<int>)size2;
-(tvec3<int>)size;
-(id)description;
-(BOOL)hasLevels;
-(unsigned long long)elementByteSize;
-(unsigned long long)componentByteSize;
-(DataBufferInfo)bufferInfo;
-(DataBufferLevelData*)dataWithSizeGreaterOrEqualTo:(unsigned long long)arg1 ;
-(DataBufferLevelData*)dataAtLevel:(unsigned long long)arg1 ;
@end
