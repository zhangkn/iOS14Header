/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAudioPCMBuffer, NSMutableArray;

@interface VCPLoudnessAnalyzer : NSObject {

	AVAudioPCMBuffer* _pcmBuffer;
	long long _framePosition;
	LkFsMeasure* _loudnessAnalyzer;
	CAStreamBasicDescription* _processFormat;
	float _sampleRate;
	vector<double, std::__1::allocator<double> >* _peakValues;
	vector<double, std::__1::allocator<double> >* _momentaryEnergyValues;
	vector<float, std::__1::allocator<float> >* _loudnessSampleBuffer;
	NSMutableArray* _loudnessResults;
	unsigned _samplesFor100ms;
	AUOutputBL* _samplesForProcessingBufferList;

}
-(id)results;
-(void)dealloc;
-(id)init;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 andSampleBatchSize:(int)arg2 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
@end

