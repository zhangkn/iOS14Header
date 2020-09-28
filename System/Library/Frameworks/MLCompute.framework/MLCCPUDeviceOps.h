/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCDeviceOps.h>

@class _MLCCPULayer, NSData, NSArray, NSMutableArray, MLCTensor, NSNumber;

@interface MLCCPUDeviceOps : MLCDeviceOps {

	BOOL _inferenceOnly;
	BOOL _computeWeightsAndBiasOnly;
	BOOL _isFusedBNNSFilter;
	BOOL _useSourceGradientDeviceMemoryForResultGradientTensor;
	BOOL _useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
	BOOL _binaryOperation;
	BOOL _hasBias;
	BOOL _transposeX;
	BOOL _transposeY;
	BOOL _leftIsAWeight;
	BOOL _rightIsAWeight;
	BOOL _scaleGradientByFrequency;
	int _deviceOpType;
	int _paddingPolicy;
	float _lossWeight;
	_MLCCPULayer* _layer;
	unsigned long long _sourceStride;
	unsigned long long _sourceStrideSecondary;
	unsigned long long _sourceStrideTertiary;
	unsigned long long _resultStride;
	unsigned long long _sourceDataOffset;
	unsigned long long _secondarySourceDataOffset;
	unsigned long long _tertiarySourceDataOffset;
	unsigned long long _resultDataOffset;
	NSData* _params;
	NSData* _fusedPrimitiveParams;
	NSArray* _inDeltaData;
	NSArray* _outDeltaData;
	NSData* _weightsDeltaData;
	NSData* _biasDeltaData;
	NSMutableArray* _weightsMomentumData;
	NSMutableArray* _biasMomentumData;
	NSData* _betaDeltaData;
	NSData* _gammaDeltaData;
	NSMutableArray* _betaMomentumData;
	NSMutableArray* _gammaMomentumData;
	MLCTensor* _movingMean;
	MLCTensor* _movingVariance;
	void* _BNNSFilter;
	unsigned long long _softmaxDimension;
	NSNumber* _paddingIndex;
	NSArray* _embeddingParams;
	NSData* _weightsDeltaDataBytes;
	NSData* _biasDeltaDataBytes;
	NSMutableArray* _weightsDeltaDataBytesArray;
	NSMutableArray* _biasDeltaDataBytesArray;
	NSData* _betaDeltaDataBytes;
	NSData* _gammaDeltaDataBytes;
	NSMutableArray* _weightsMomentumDataBytes;
	NSMutableArray* _biasMomentumDataBytes;
	NSMutableArray* _weightsMomentumDataBytesArray;
	NSMutableArray* _biasMomentumDataBytesArray;
	NSMutableArray* _betaMomentumDataBytes;
	NSMutableArray* _gammaMomentumDataBytes;

}

@property (nonatomic,retain) NSData * weightsDeltaDataBytes;                                                  //@synthesize weightsDeltaDataBytes=_weightsDeltaDataBytes - In the implementation block
@property (nonatomic,retain) NSData * biasDeltaDataBytes;                                                     //@synthesize biasDeltaDataBytes=_biasDeltaDataBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * weightsDeltaDataBytesArray;                                     //@synthesize weightsDeltaDataBytesArray=_weightsDeltaDataBytesArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * biasDeltaDataBytesArray;                                        //@synthesize biasDeltaDataBytesArray=_biasDeltaDataBytesArray - In the implementation block
@property (nonatomic,retain) NSData * betaDeltaDataBytes;                                                     //@synthesize betaDeltaDataBytes=_betaDeltaDataBytes - In the implementation block
@property (nonatomic,retain) NSData * gammaDeltaDataBytes;                                                    //@synthesize gammaDeltaDataBytes=_gammaDeltaDataBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * weightsMomentumDataBytes;                                       //@synthesize weightsMomentumDataBytes=_weightsMomentumDataBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * biasMomentumDataBytes;                                          //@synthesize biasMomentumDataBytes=_biasMomentumDataBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * weightsMomentumDataBytesArray;                                  //@synthesize weightsMomentumDataBytesArray=_weightsMomentumDataBytesArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * biasMomentumDataBytesArray;                                     //@synthesize biasMomentumDataBytesArray=_biasMomentumDataBytesArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * betaMomentumDataBytes;                                          //@synthesize betaMomentumDataBytes=_betaMomentumDataBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * gammaMomentumDataBytes;                                         //@synthesize gammaMomentumDataBytes=_gammaMomentumDataBytes - In the implementation block
@property (nonatomic,retain) _MLCCPULayer * layer;                                                            //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) int deviceOpType;                                                              //@synthesize deviceOpType=_deviceOpType - In the implementation block
@property (assign,nonatomic) unsigned long long sourceStride;                                                 //@synthesize sourceStride=_sourceStride - In the implementation block
@property (assign,nonatomic) unsigned long long sourceStrideSecondary;                                        //@synthesize sourceStrideSecondary=_sourceStrideSecondary - In the implementation block
@property (assign,nonatomic) unsigned long long sourceStrideTertiary;                                         //@synthesize sourceStrideTertiary=_sourceStrideTertiary - In the implementation block
@property (assign,nonatomic) unsigned long long resultStride;                                                 //@synthesize resultStride=_resultStride - In the implementation block
@property (assign,nonatomic) unsigned long long sourceDataOffset;                                             //@synthesize sourceDataOffset=_sourceDataOffset - In the implementation block
@property (assign,nonatomic) unsigned long long secondarySourceDataOffset;                                    //@synthesize secondarySourceDataOffset=_secondarySourceDataOffset - In the implementation block
@property (assign,nonatomic) unsigned long long tertiarySourceDataOffset;                                     //@synthesize tertiarySourceDataOffset=_tertiarySourceDataOffset - In the implementation block
@property (assign,nonatomic) unsigned long long resultDataOffset;                                             //@synthesize resultDataOffset=_resultDataOffset - In the implementation block
@property (assign,nonatomic) BOOL inferenceOnly;                                                              //@synthesize inferenceOnly=_inferenceOnly - In the implementation block
@property (nonatomic,readonly) NSData * params;                                                               //@synthesize params=_params - In the implementation block
@property (nonatomic,retain) NSData * fusedPrimitiveParams;                                                   //@synthesize fusedPrimitiveParams=_fusedPrimitiveParams - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inDeltaData;                                                  //@synthesize inDeltaData=_inDeltaData - In the implementation block
@property (nonatomic,retain,readonly) NSArray * outDeltaData;                                                 //@synthesize outDeltaData=_outDeltaData - In the implementation block
@property (nonatomic,retain,readonly) NSData * weightsDeltaData;                                              //@synthesize weightsDeltaData=_weightsDeltaData - In the implementation block
@property (nonatomic,retain,readonly) NSData * biasDeltaData;                                                 //@synthesize biasDeltaData=_biasDeltaData - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * weightsMomentumData;                                   //@synthesize weightsMomentumData=_weightsMomentumData - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * biasMomentumData;                                      //@synthesize biasMomentumData=_biasMomentumData - In the implementation block
@property (assign,nonatomic) BOOL computeWeightsAndBiasOnly;                                                  //@synthesize computeWeightsAndBiasOnly=_computeWeightsAndBiasOnly - In the implementation block
@property (nonatomic,retain) NSData * betaDeltaData;                                                          //@synthesize betaDeltaData=_betaDeltaData - In the implementation block
@property (nonatomic,retain) NSData * gammaDeltaData;                                                         //@synthesize gammaDeltaData=_gammaDeltaData - In the implementation block
@property (nonatomic,retain) NSMutableArray * betaMomentumData;                                               //@synthesize betaMomentumData=_betaMomentumData - In the implementation block
@property (nonatomic,retain) NSMutableArray * gammaMomentumData;                                              //@synthesize gammaMomentumData=_gammaMomentumData - In the implementation block
@property (nonatomic,retain) MLCTensor * movingMean;                                                          //@synthesize movingMean=_movingMean - In the implementation block
@property (nonatomic,retain) MLCTensor * movingVariance;                                                      //@synthesize movingVariance=_movingVariance - In the implementation block
@property (assign,nonatomic) void* BNNSFilter;                                                                //@synthesize BNNSFilter=_BNNSFilter - In the implementation block
@property (assign,nonatomic) BOOL isFusedBNNSFilter;                                                          //@synthesize isFusedBNNSFilter=_isFusedBNNSFilter - In the implementation block
@property (assign,nonatomic) int paddingPolicy;                                                               //@synthesize paddingPolicy=_paddingPolicy - In the implementation block
@property (assign,nonatomic) BOOL useSourceGradientDeviceMemoryForResultGradientTensor;                       //@synthesize useSourceGradientDeviceMemoryForResultGradientTensor=_useSourceGradientDeviceMemoryForResultGradientTensor - In the implementation block
@property (assign,nonatomic) BOOL useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;              //@synthesize useSourceGradientDeviceMemoryForSecondaryResultGradientTensor=_useSourceGradientDeviceMemoryForSecondaryResultGradientTensor - In the implementation block
@property (assign,nonatomic) float lossWeight;                                                                //@synthesize lossWeight=_lossWeight - In the implementation block
@property (assign,nonatomic) BOOL binaryOperation;                                                            //@synthesize binaryOperation=_binaryOperation - In the implementation block
@property (assign,nonatomic) BOOL hasBias;                                                                    //@synthesize hasBias=_hasBias - In the implementation block
@property (assign,nonatomic) unsigned long long softmaxDimension;                                             //@synthesize softmaxDimension=_softmaxDimension - In the implementation block
@property (assign,nonatomic) BOOL transposeX;                                                                 //@synthesize transposeX=_transposeX - In the implementation block
@property (assign,nonatomic) BOOL transposeY;                                                                 //@synthesize transposeY=_transposeY - In the implementation block
@property (assign,nonatomic) BOOL leftIsAWeight;                                                              //@synthesize leftIsAWeight=_leftIsAWeight - In the implementation block
@property (assign,nonatomic) BOOL rightIsAWeight;                                                             //@synthesize rightIsAWeight=_rightIsAWeight - In the implementation block
@property (nonatomic,copy) NSNumber * paddingIndex;                                                           //@synthesize paddingIndex=_paddingIndex - In the implementation block
@property (nonatomic,copy) NSArray * embeddingParams;                                                         //@synthesize embeddingParams=_embeddingParams - In the implementation block
@property (assign,nonatomic) BOOL scaleGradientByFrequency;                                                   //@synthesize scaleGradientByFrequency=_scaleGradientByFrequency - In the implementation block
+(id)deviceOpsWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 ;
+(id)deviceOpsWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 ;
+(id)deviceOpsWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 betaDeltaData:(id)arg5 gammaDeltaData:(id)arg6 betaMomentumData:(id)arg7 gammaMomentumData:(id)arg8 ;
-(void)setLayer:(_MLCCPULayer *)arg1 ;
-(_MLCCPULayer *)layer;
-(NSData *)params;
-(int)paddingPolicy;
-(void)dealloc;
-(void)setPaddingPolicy:(int)arg1 ;
-(BOOL)hasBias;
-(int)deviceOpType;
-(id)initWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 betaDeltaData:(id)arg9 gammaDeltaData:(id)arg10 betaMomentumData:(id)arg11 gammaMomentumData:(id)arg12 ;
-(void)setSoftmaxDimension:(unsigned long long)arg1 ;
-(void)setTransposeX:(BOOL)arg1 ;
-(void)setTransposeY:(BOOL)arg1 ;
-(void)setInferenceOnly:(BOOL)arg1 ;
-(void)setLeftIsAWeight:(BOOL)arg1 ;
-(void)setRightIsAWeight:(BOOL)arg1 ;
-(BOOL)leftIsAWeight;
-(BOOL)rightIsAWeight;
-(void)setSourceStride:(unsigned long long)arg1 ;
-(void)setSourceStrideSecondary:(unsigned long long)arg1 ;
-(void)setResultStride:(unsigned long long)arg1 ;
-(BOOL)inferenceOnly;
-(NSArray *)inDeltaData;
-(NSArray *)outDeltaData;
-(unsigned long long)softmaxDimension;
-(BOOL)useSourceGradientDeviceMemoryForResultGradientTensor;
-(void)setUseSourceGradientDeviceMemoryForResultGradientTensor:(BOOL)arg1 ;
-(BOOL)useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
-(void)setUseSourceGradientDeviceMemoryForSecondaryResultGradientTensor:(BOOL)arg1 ;
-(BOOL)transposeX;
-(BOOL)transposeY;
-(void)setBNNSFilter:(void*)arg1 ;
-(void)setComputeWeightsAndBiasOnly:(BOOL)arg1 ;
-(NSData *)weightsDeltaData;
-(NSData *)biasDeltaData;
-(NSData *)betaDeltaData;
-(NSData *)gammaDeltaData;
-(NSData *)weightsDeltaDataBytes;
-(NSNumber *)paddingIndex;
-(NSMutableArray *)weightsDeltaDataBytesArray;
-(void)setWeightsDeltaDataBytes:(NSData *)arg1 ;
-(NSData *)biasDeltaDataBytes;
-(void)setBiasDeltaDataBytes:(NSData *)arg1 ;
-(NSMutableArray *)biasDeltaDataBytesArray;
-(void)setHasBias:(BOOL)arg1 ;
-(void)setWeightsDeltaDataBytesArray:(NSMutableArray *)arg1 ;
-(void)setBiasDeltaDataBytesArray:(NSMutableArray *)arg1 ;
-(void)setSourceStrideTertiary:(unsigned long long)arg1 ;
-(unsigned long long)sourceStride;
-(unsigned long long)sourceStrideSecondary;
-(unsigned long long)sourceStrideTertiary;
-(unsigned long long)resultStride;
-(NSMutableArray *)weightsMomentumDataBytesArray;
-(NSMutableArray *)biasMomentumDataBytesArray;
-(void)setBinaryOperation:(BOOL)arg1 ;
-(void)setWeightsMomentumDataBytes:(NSMutableArray *)arg1 ;
-(void)setBiasMomentumDataBytes:(NSMutableArray *)arg1 ;
-(void)setFusedPrimitiveParams:(NSData *)arg1 ;
-(void)setBetaDeltaData:(NSData *)arg1 ;
-(void)setBetaMomentumData:(NSMutableArray *)arg1 ;
-(void)setGammaMomentumData:(NSMutableArray *)arg1 ;
-(void)setBetaMomentumDataBytes:(NSMutableArray *)arg1 ;
-(void)setGammaDeltaData:(NSData *)arg1 ;
-(void)setBetaDeltaDataBytes:(NSData *)arg1 ;
-(void)setGammaDeltaDataBytes:(NSData *)arg1 ;
-(void)setGammaMomentumDataBytes:(NSMutableArray *)arg1 ;
-(void)setMovingMean:(MLCTensor *)arg1 ;
-(void)setMovingVariance:(MLCTensor *)arg1 ;
-(NSData *)fusedPrimitiveParams;
-(void)setIsFusedBNNSFilter:(BOOL)arg1 ;
-(BOOL)binaryOperation;
-(void*)BNNSFilter;
-(NSArray *)embeddingParams;
-(void)setSourceDataOffset:(unsigned long long)arg1 ;
-(void)setSecondarySourceDataOffset:(unsigned long long)arg1 ;
-(void)setTertiarySourceDataOffset:(unsigned long long)arg1 ;
-(void)setResultDataOffset:(unsigned long long)arg1 ;
-(BOOL)isFusedBNNSFilter;
-(float)lossWeight;
-(unsigned long long)resultDataOffset;
-(unsigned long long)sourceDataOffset;
-(BOOL)computeWeightsAndBiasOnly;
-(unsigned long long)secondarySourceDataOffset;
-(unsigned long long)tertiarySourceDataOffset;
-(BOOL)scaleGradientByFrequency;
-(void)setPaddingIndex:(NSNumber *)arg1 ;
-(void)setEmbeddingParams:(NSArray *)arg1 ;
-(void)setScaleGradientByFrequency:(BOOL)arg1 ;
-(NSMutableArray *)weightsMomentumData;
-(NSMutableArray *)weightsMomentumDataBytes;
-(void)setLossWeight:(float)arg1 ;
-(id)initWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 ;
-(id)initWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 betaDeltaData:(id)arg5 gammaDeltaData:(id)arg6 betaMomentumData:(id)arg7 gammaMomentumData:(id)arg8 ;
-(NSMutableArray *)biasMomentumData;
-(NSMutableArray *)betaMomentumData;
-(NSMutableArray *)gammaMomentumData;
-(MLCTensor *)movingMean;
-(MLCTensor *)movingVariance;
-(NSData *)betaDeltaDataBytes;
-(NSData *)gammaDeltaDataBytes;
-(NSMutableArray *)biasMomentumDataBytes;
-(void)setWeightsMomentumDataBytesArray:(NSMutableArray *)arg1 ;
-(void)setBiasMomentumDataBytesArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)betaMomentumDataBytes;
-(NSMutableArray *)gammaMomentumDataBytes;
@end
