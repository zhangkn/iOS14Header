/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <Vision/Vision-Structs.h>
@class VNSession, VNRequestPerformer;

@interface VNSequenceRequestHandler : NSObject {

	VNSession* _session;
	VNRequestPerformer* _requestPerformer;

}
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestForcedCleanup;
+(void)forcedCleanup;
-(id)initWithSession:(id)arg1 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performRequests:(id)arg1 onImageBuffer:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCMSampleBuffer:(opaqueCMSampleBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCMSampleBuffer:(opaqueCMSampleBufferRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCMSampleBuffer:(opaqueCMSampleBufferRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCMSampleBuffer:(opaqueCMSampleBufferRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 error:(id*)arg3 ;
@end

