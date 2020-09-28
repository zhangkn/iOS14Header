/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VFXCore.Renderer : _UKNOWN_SUPERCLASS_ {

	 device;
	 lock;
	 renderOutputs;
	 renderOutputsForThisFrame;
	 GPUToolBox;
	 texturePool;
	 shaderPool;
	 bufferPool;
	 wholeFrameBufferPool;
	 uniformBufferPool;
	 commandQueue;
	 showDebugMenu;
	 canUseImgui;
	 isPostFXEnabled;
	 outputCommandBuffer;
	 currentCommandBuffer;
	 currentEncoder;
	 currentRenderPassDescriptor;
	 cachedMTLRenderPassDescriptor;
	 performanceCounterRecorder;
	 _renderOutputPassDescriptor;
	 renderOutputRenderPassFormat;
	 encoders;
	 mtkMeshBufferAllocator;
	 opaqueDepthState;
	 transparentDepthState;
	 transparentStencilOverdrawDepthState;
	 depthAlwaysNoWriteState;
	 reversedDepthState;
	 reversedNoWriteDepthState;
	 inFlightSemaphore;
	 defaultSampler;
	 defaultSamplerClampMipNearest;
	 defaultSamplerRepeatMipNearest;
	 defaultSamplerRepeatSMipNearest;
	 defaultSamplerMirrorRepeatMipNearest;
	 _defaultIrradianceTexture;
	 _defaultRadianceTexture;
	 _defaultBrdfLutTexture;
	 _defaultWhiteTexture;
	 _defaultGreyTexture;
	 _defaultBlackTexture;
	 _defaultNormalMapTexture;
	 frameTimestamp;
	 currentRenderOutputHandle;
	 colorRamps;
	 stripIndexBuffers;
	 deformedBuffers;

}
@end
