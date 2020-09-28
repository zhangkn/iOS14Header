/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptor.h>

@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor {

	MTLRenderPassAttachmentDescriptorPrivate _private;

}
+(id)attachmentDescriptor;
-(id)texture;
-(unsigned long long)level;
-(void)setLoadAction:(unsigned long long)arg1 ;
-(unsigned long long)depthPlane;
-(unsigned long long)storeAction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)yInvert;
-(SCD_Struct_MT93)clearColor;
-(id)resolveTexture;
-(void)setResolveSlice:(unsigned long long)arg1 ;
-(unsigned long long)slice;
-(unsigned long long)resolveDepthPlane;
-(void)dealloc;
-(void)setYInvert:(BOOL)arg1 ;
-(void)setResolveTexture:(id)arg1 ;
-(unsigned long long)resolveLevel;
-(void)setClearColor:(SCD_Struct_MT93)arg1 ;
-(void)setDepthPlane:(unsigned long long)arg1 ;
-(id)init;
-(void)setResolveDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)loadAction;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStoreAction:(unsigned long long)arg1 ;
-(unsigned long long)storeActionOptions;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)setSlice:(unsigned long long)arg1 ;
-(void)setResolveLevel:(unsigned long long)arg1 ;
-(unsigned long long)resolveSlice;
-(unsigned long long)hash;
-(void)setStoreActionOptions:(unsigned long long)arg1 ;
-(void)setTexture:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPassAttachmentDescriptorPrivate*)_descriptorPrivate;
-(id)description;
@end
