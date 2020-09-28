/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject {

	MDLTexture* texture;
	MDLTextureFilter* hardwareFilter;
	MDLTransform* transform;
	unsigned long long mappingChannel;
	long long textureComponents;

}

@property (assign,nonatomic) unsigned long long mappingChannel; 
@property (assign,nonatomic) long long textureComponents; 
@property (nonatomic,retain) MDLTexture * texture; 
@property (nonatomic,retain) MDLTextureFilter * hardwareFilter; 
@property (nonatomic,retain) MDLTransform * transform; 
-(MDLTexture *)texture;
-(id)init;
-(MDLTransform *)transform;
-(void)setTransform:(MDLTransform *)arg1 ;
-(void)setTexture:(MDLTexture *)arg1 ;
-(MDLTextureFilter *)hardwareFilter;
-(void)setHardwareFilter:(MDLTextureFilter *)arg1 ;
-(unsigned long long)mappingChannel;
-(void)setMappingChannel:(unsigned long long)arg1 ;
-(long long)textureComponents;
-(void)setTextureComponents:(long long)arg1 ;
@end
