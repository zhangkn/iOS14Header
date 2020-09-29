/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:21 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class FigVideoCaptureConnectionConfiguration, FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigCaptureSourceConfiguration;

@interface FigCaptureSessionParsedPreviewSinkConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoThumbnailConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _previewTimeMachineConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;
	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigCaptureSourceConfiguration* _cameraConfiguration;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;                     //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoThumbnailConnectionConfiguration;                       //@synthesize videoThumbnailConnectionConfiguration=_videoThumbnailConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * previewTimeMachineConnectionConfiguration;                   //@synthesize previewTimeMachineConnectionConfiguration=_previewTimeMachineConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                      //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                           //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceConfiguration * cameraConfiguration;                                                  //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                                                                 //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(int)sourceDeviceType;
-(void)dealloc;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)previewTimeMachineConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoThumbnailConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(id)initWithParsedCameraSourceConfiguration:(id)arg1 sourceDeviceType:(int)arg2 ;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
@end
