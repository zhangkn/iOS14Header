/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSNovDetector : NSObject {

	void* _novDetect;

}
-(void)resetBest;
-(id)getAnalyzedResultForPhraseId:(unsigned)arg1 ;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)reset;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getOptionValue:(id)arg1 ;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(unsigned)numResultsAvailable;
@end

