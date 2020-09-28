/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLTileRenderPipelineColorAttachmentDescriptorArray, MTLPipelineBufferDescriptorArray, NSArray;

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> tileFunction; 
@property (assign,nonatomic) unsigned long long rasterSampleCount; 
@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray * colorAttachments; 
@property (assign,nonatomic) BOOL threadgroupSizeMatchesTileSize; 
@property (readonly) MTLPipelineBufferDescriptorArray * tileBuffers; 
@property (assign,nonatomic) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (nonatomic,copy) NSArray * binaryArchives; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end
