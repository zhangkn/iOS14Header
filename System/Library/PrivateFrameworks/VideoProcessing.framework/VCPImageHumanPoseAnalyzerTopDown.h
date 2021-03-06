/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNPersonDetector, VCPCNNPersonKeypointsDetector, NSMutableArray;

@interface VCPImageHumanPoseAnalyzerTopDown : VCPImageAnalyzer {

	int _maxNumRegions;
	int _inputWidth;
	int _inputHeight;
	VCPCNNPersonDetector* _personDetector;
	VCPCNNPersonKeypointsDetector* _personKeypointsDetector;
	NSMutableArray* _results;

}
-(id)initWithMaxNumRegions:(int)arg1 forceCPU:(BOOL)arg2 sharedModel:(BOOL)arg3 inputConfig:(id)arg4 ;
-(int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned*)arg3 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
@end

