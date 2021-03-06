/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLTexture;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUImageUndistortion : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _pipelineState;
	id<MTLComputePipelineState> _lutGenerationPipelineState;
	id<MTLTexture> _lut;
	SCD_Struct_AR25 _fisheyeIntrinsics;
	 _fisheyeRadialCoefficients;
	SCD_Struct_AR25 _rectilinearIntrinsics;

}
-(id)init;
-(void)undistortFisheyeImage:(CVBufferRef)arg1 withFisheyeIntrinsics:(SCD_Struct_AR25)arg2 withFisheyeRadialCoefficients:(_CVBuffer*)arg3 toRectilinearImage:(SCD_Struct_AR25)arg4 ;
@end

