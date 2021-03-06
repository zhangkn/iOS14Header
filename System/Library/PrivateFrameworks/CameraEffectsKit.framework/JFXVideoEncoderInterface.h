/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXVideoEncoderInterface : NSObject {

	HEVCLosslessEncoder* m_encoder;
	CVBufferRef m_preparedPixelBuffer;
	BOOL m_encoderInitialized;
	promise<opaqueCMSampleBuffer *>* m_sampleBufferPromise;
	double m_expectedFrameRate;
	opaqueCMSampleBufferRef _currentBuffer;

}

@property (assign) opaqueCMSampleBufferRef currentBuffer;              //@synthesize currentBuffer=_currentBuffer - In the implementation block
-(void)dealloc;
-(id)init;
-(opaqueCMSampleBufferRef)currentBuffer;
-(void)writeSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)skipFrame;
-(void)setupEncoderWithWidth:(int)arg1 andHeight:(int)arg2 imageFormat:(int)arg3 andFramerate:(double)arg4 ;
-(id)initWithExpectedFrameRate:(double)arg1 ;
-(opaqueCMSampleBufferRef)encodeFrame:(CVBufferRef)arg1 presentationTime:(SCD_Struct_JF3)arg2 frameProperties:(CFDictionaryRef)arg3 ;
-(void)closeEncoder;
-(void)setCurrentBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

