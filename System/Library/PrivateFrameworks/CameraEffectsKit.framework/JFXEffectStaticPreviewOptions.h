/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXEffectPreviewOptions.h>

@class JTImage;

@interface JFXEffectStaticPreviewOptions : JFXEffectPreviewOptions {

	BOOL _dontCacheToDisk;
	BOOL _dontCache;
	BOOL _dontUseThumbnailAssetWhenAvailable;
	JTImage* _renderBackgroundImage;
	/*^block*/id _renderPropertiesConfigurationBlock;
	SCD_Struct_JF3 _renderTime;
	CGRect _renderedImageCropRect;
	SCD_Struct_JF4 _renderRange;

}

@property (nonatomic,retain) JTImage * renderBackgroundImage;                      //@synthesize renderBackgroundImage=_renderBackgroundImage - In the implementation block
@property (assign,nonatomic) BOOL dontCacheToDisk;                                 //@synthesize dontCacheToDisk=_dontCacheToDisk - In the implementation block
@property (assign,nonatomic) BOOL dontCache;                                       //@synthesize dontCache=_dontCache - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 renderTime;                            //@synthesize renderTime=_renderTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF4 renderRange;                           //@synthesize renderRange=_renderRange - In the implementation block
@property (assign,nonatomic) BOOL dontUseThumbnailAssetWhenAvailable;              //@synthesize dontUseThumbnailAssetWhenAvailable=_dontUseThumbnailAssetWhenAvailable - In the implementation block
@property (assign,nonatomic) CGRect renderedImageCropRect;                         //@synthesize renderedImageCropRect=_renderedImageCropRect - In the implementation block
@property (nonatomic,copy) id renderPropertiesConfigurationBlock;                  //@synthesize renderPropertiesConfigurationBlock=_renderPropertiesConfigurationBlock - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_JF3)renderTime;
-(id)initStaticPreviewOptions;
-(JTImage *)renderBackgroundImage;
-(void)setRenderBackgroundImage:(JTImage *)arg1 ;
-(BOOL)dontCacheToDisk;
-(void)setDontCacheToDisk:(BOOL)arg1 ;
-(BOOL)dontCache;
-(void)setDontCache:(BOOL)arg1 ;
-(void)setRenderTime:(SCD_Struct_JF3)arg1 ;
-(SCD_Struct_JF4)renderRange;
-(void)setRenderRange:(SCD_Struct_JF4)arg1 ;
-(BOOL)dontUseThumbnailAssetWhenAvailable;
-(void)setDontUseThumbnailAssetWhenAvailable:(BOOL)arg1 ;
-(CGRect)renderedImageCropRect;
-(void)setRenderedImageCropRect:(CGRect)arg1 ;
-(id)renderPropertiesConfigurationBlock;
-(void)setRenderPropertiesConfigurationBlock:(id)arg1 ;
@end

