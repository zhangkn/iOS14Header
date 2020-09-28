/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNAnalyzing <SNProcessing>
@property (nonatomic,readonly) Box* resultsBox; 
@optional
-(void)primeGraph;

@required
-(Box*)resultsBox;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2;
-(id)sharedProcessorConfiguration;

@end
