/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface QuickTypePFLTrainingData : NSObject {

	NSMutableArray* _sentences;
	unsigned long long _iterator;
	BOOL _processingNewRecord;
	unsigned long long _maxSequenceLength;

}

@property (nonatomic,retain) NSMutableArray * sentences;                           //@synthesize sentences=_sentences - In the implementation block
@property (assign,nonatomic) unsigned long long iterator;                          //@synthesize iterator=_iterator - In the implementation block
@property (assign,nonatomic) BOOL processingNewRecord;                             //@synthesize processingNewRecord=_processingNewRecord - In the implementation block
@property (nonatomic,readonly) unsigned long long numTrainingSamples; 
@property (assign,nonatomic) unsigned long long maxSequenceLength;                 //@synthesize maxSequenceLength=_maxSequenceLength - In the implementation block
+(void)initialize;
+(unsigned long long)defaultMaxSequenceLength;
+(id)trainingDataFor:(long long)arg1 andLocale:(id)arg2 ;
-(void)addResource:(id)arg1 ;
-(void)rewind;
-(id)init;
-(void)setIterator:(unsigned long long)arg1 ;
-(NSMutableArray *)sentences;
-(unsigned long long)numTrainingSamples;
-(unsigned long long)maxSequenceLength;
-(unsigned long long)iterator;
-(void)setMaxSequenceLength:(unsigned long long)arg1 ;
-(BOOL)loadFromCoreDuet:(id)arg1 withLocale:(id)arg2 andLMStreamTokenizationBlock:(/*^block*/id)arg3 ;
-(BOOL)loadFromCoreDuet:(id)arg1 ;
-(id)getTrainingDataBatch:(unsigned long long)arg1 ;
-(id)getEvaluationDataPoint;
-(BOOL)processingNewRecord;
-(void)setProcessingNewRecord:(BOOL)arg1 ;
-(void)setSentences:(NSMutableArray *)arg1 ;
@end

