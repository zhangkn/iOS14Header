/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@interface PixelBufferUtility : NSObject
+(BOOL)isPixelBufferRawBayer:(CVBufferRef)arg1 ;
+(BOOL)isPixelBufferCompandedRawBayer:(CVBufferRef)arg1 ;
+(BOOL)isPixelFormatRawBayer:(unsigned)arg1 ;
+(CFDictionaryRef)createPixelBufferAttributesWithWidth:(unsigned)arg1 height:(unsigned)arg2 extendedPixelsPerRow:(unsigned)arg3 pixelFormat:(int)arg4 bytesPerRowAlignment:(unsigned)arg5 planeAlignment:(unsigned)arg6 ;
+(CFDictionaryRef)createPixelBufferAttributesWithWidth:(unsigned)arg1 height:(unsigned)arg2 pixelFormat:(int)arg3 bytesPerRow:(unsigned)arg4 ;
+(BOOL)splitBayerBuffer:(CVBufferRef)arg1 intoWarholPixelBuffer:(CVBufferRef)arg2 shiftBitsLeftBy:(int)arg3 ;
+(BOOL)splitBayerBuffer:(CVBufferRef)arg1 intoYUVPixelBuffer:(CVBufferRef)arg2 shiftBitsLeftBy:(int)arg3 ;
+(BOOL)joinYUVBuffer:(CVBufferRef)arg1 intoRawBayerPixelBuffer:(CVBufferRef)arg2 shiftBitsLeftBy:(int)arg3 msbReplication:(BOOL)arg4 ;
+(BOOL)splitCompandedBayerBuffer:(CVBufferRef)arg1 intoCompandedWarholPixelBuffer:(CVBufferRef)arg2 ;
+(CVBufferRef)createRawPixelBufferWithWidth:(unsigned)arg1 height:(unsigned)arg2 extendedRows:(unsigned)arg3 extendedPixelsPerRow:(unsigned)arg4 pixelFormat:(int)arg5 bytesPerRowAlignment:(unsigned)arg6 planeAlignment:(unsigned)arg7 bufferCacheMode:(unsigned)arg8 ;
+(BOOL)isPixelFormatCompandedRawBayer:(unsigned)arg1 ;
+(BOOL)copyData:(id)arg1 toPlanarPixelBuffer:(CVBufferRef)arg2 toPlane:(unsigned long long)arg3 ;
+(id)copyPixelBufferData:(CVBufferRef)arg1 ofPlane:(unsigned long long)arg2 ;
+(CVBufferRef)createRawPixelBufferWithWidth:(unsigned)arg1 height:(unsigned)arg2 pixelFormat:(int)arg3 bytesPerRow:(unsigned)arg4 ;
+(CVBufferRef)newPixelBufferRefCopy:(CVBufferRef)arg1 ;
+(BOOL)copyFromPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(CVBufferRef)arg2 andShiftBits:(int)arg3 ;
+(CVPixelBufferPoolRef)createNewL010PixelBufferPoolWithReferencePixelBuffer:(CVBufferRef)arg1 minimumBufferCount:(unsigned long long)arg2 ;
+(CVPixelBufferPoolRef)createNewL008PixelBufferPoolWithReferencePixelBuffer:(CVBufferRef)arg1 minimumBufferCount:(unsigned long long)arg2 ;
+(CVBufferRef)newWarholBufferFromRawBayerPixelBuffer:(CVBufferRef)arg1 withPixelBufferPool:(CVPixelBufferPoolRef)arg2 ;
+(CVBufferRef)newYUVBufferFromRawBayerPixelBuffer:(CVBufferRef)arg1 withPixelBufferPool:(CVPixelBufferPoolRef)arg2 ;
+(CVBufferRef)newRawBayerBufferFromYUVPixelBuffer:(CVBufferRef)arg1 withPixelBufferPool:(CVPixelBufferPoolRef)arg2 msbReplication:(BOOL)arg3 ;
+(CVBufferRef)newWarholBufferFromCompandedRawBayerPixelBuffer:(CVBufferRef)arg1 withPixelBufferPool:(CVPixelBufferPoolRef)arg2 ;
+(CVBufferRef)newWarholBufferFromRawBayerPixelBuffer:(CVBufferRef)arg1 ;
+(BOOL)fillPlaneOfPixelBuffer:(CVBufferRef)arg1 planeIndex:(int)arg2 withValue:(unsigned short)arg3 ;
+(void)writeBuffer:(const char*)arg1 ofSize:(unsigned long long)arg2 toFile:(id)arg3 ;
+(BOOL)joinWarholBuffer:(CVBufferRef)arg1 intoBayerBuffer:(CVBufferRef)arg2 shiftBitsRightBy:(int)arg3 msbReplication:(BOOL)arg4 ;
+(BOOL)joinCompandedWarholBuffer:(CVBufferRef)arg1 intoCompandedBayerBuffer:(CVBufferRef)arg2 ;
+(BOOL)verticallySplitPixelBuffer:(CVBufferRef)arg1 intoTopPixelBuffer:(CVBufferRef)arg2 bottomPixelBuffer:(CVBufferRef)arg3 ;
+(BOOL)concatPixelBuffer:(CVBufferRef)arg1 withPixelBuffer:(CVBufferRef)arg2 targetPixelBuffer:(CVBufferRef)arg3 ;
+(unsigned long long)extendedPixelsPerRowOfPixelBuffer:(CVBufferRef)arg1 ;
+(CVPixelBufferPoolRef)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 extendedPixelsPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5 ;
+(CVPixelBufferPoolRef)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 bytesPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5 ;
+(CVBufferRef)pixelBufferFromPool:(CVPixelBufferPoolRef)arg1 ;
+(BOOL)copyPixelBuffer:(CVBufferRef)arg1 toPixelBuffer:(CVBufferRef)arg2 bytesPerPixel:(unsigned long long)arg3 ;
+(BOOL)copyData:(id)arg1 toNonPlanarPixelBuffer:(CVBufferRef)arg2 ;
+(id)copyNonPlanarPixelBufferData:(CVBufferRef)arg1 ;
+(CVBufferRef)readFrameFromFile:(id)arg1 width:(unsigned)arg2 height:(unsigned)arg3 pixelFormat:(unsigned)arg4 ;
+(BOOL)writeBuffer:(CVBufferRef)arg1 toFile:(id)arg2 ;
+(CVBufferRef)create4444AYpCbCr16PixelBufferFillAlphaWithData:(CFDataRef)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
+(BOOL)copyMonochromeBuffer:(CVBufferRef)arg1 toAlphaChannelOfBuffer:(CVBufferRef)arg2 ;
+(BOOL)copyuint16Data:(unsigned short*)arg1 toAlphaChannelOfBuffer:(CVBufferRef)arg2 ;
+(BOOL)copyAlphaChannelOfBuffer:(CVBufferRef)arg1 touint16Data:(unsigned short*)arg2 ;
+(BOOL)copyAlphaChannelOfBuffer:(CVBufferRef)arg1 toMonochromeBuffer:(CVBufferRef)arg2 ;
@end

