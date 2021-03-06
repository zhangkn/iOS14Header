/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NSURL, NSString, NUImageExportFormat, NUAdjustment;

@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions {

	BOOL _renderCompanionResources;
	BOOL _applyImageOrientationAsMetadata;
	BOOL _applyVideoOrientationAsMetadata;
	NSURL* _primaryURL;
	NSURL* _videoComplementURL;
	NSURL* _videoPosterFrameURL;
	NSString* _videoCodecType;
	NUImageExportFormat* _imageExportFormat;
	NUAdjustment* _reframeCropAdjustment;
	NUAdjustment* _reframeVideoAdjustment;

}

@property (retain) NSURL * primaryURL;                                 //@synthesize primaryURL=_primaryURL - In the implementation block
@property (retain) NSURL * videoComplementURL;                         //@synthesize videoComplementURL=_videoComplementURL - In the implementation block
@property (retain) NSURL * videoPosterFrameURL;                        //@synthesize videoPosterFrameURL=_videoPosterFrameURL - In the implementation block
@property (nonatomic,copy) NSString * videoCodecType;                  //@synthesize videoCodecType=_videoCodecType - In the implementation block
@property (copy) NUImageExportFormat * imageExportFormat;              //@synthesize imageExportFormat=_imageExportFormat - In the implementation block
@property (assign) BOOL renderCompanionResources;                      //@synthesize renderCompanionResources=_renderCompanionResources - In the implementation block
@property (retain) NUAdjustment * reframeCropAdjustment;               //@synthesize reframeCropAdjustment=_reframeCropAdjustment - In the implementation block
@property (retain) NUAdjustment * reframeVideoAdjustment;              //@synthesize reframeVideoAdjustment=_reframeVideoAdjustment - In the implementation block
@property (assign) BOOL applyImageOrientationAsMetadata;               //@synthesize applyImageOrientationAsMetadata=_applyImageOrientationAsMetadata - In the implementation block
@property (assign) BOOL applyVideoOrientationAsMetadata;               //@synthesize applyVideoOrientationAsMetadata=_applyVideoOrientationAsMetadata - In the implementation block
-(NSString *)videoCodecType;
-(NSURL *)videoComplementURL;
-(BOOL)renderCompanionResources;
-(void)setReframeVideoAdjustment:(NUAdjustment *)arg1 ;
-(void)setReframeCropAdjustment:(NUAdjustment *)arg1 ;
-(void)setPrimaryURL:(NSURL *)arg1 ;
-(void)setApplyVideoOrientationAsMetadata:(BOOL)arg1 ;
-(void)setRenderCompanionResources:(BOOL)arg1 ;
-(void)setVideoPosterFrameURL:(NSURL *)arg1 ;
-(void)setVideoCodecType:(NSString *)arg1 ;
-(BOOL)applyVideoOrientationAsMetadata;
-(void)setVideoComplementURL:(NSURL *)arg1 ;
-(NSURL *)primaryURL;
-(NUImageExportFormat *)imageExportFormat;
-(void)setImageExportFormat:(NUImageExportFormat *)arg1 ;
-(BOOL)applyImageOrientationAsMetadata;
-(void)setApplyImageOrientationAsMetadata:(BOOL)arg1 ;
-(NSURL *)videoPosterFrameURL;
-(NUAdjustment *)reframeCropAdjustment;
-(NUAdjustment *)reframeVideoAdjustment;
@end

