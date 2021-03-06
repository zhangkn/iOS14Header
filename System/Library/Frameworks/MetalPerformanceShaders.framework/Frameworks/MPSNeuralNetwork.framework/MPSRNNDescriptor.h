/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSCNNConvolutionDataSource;
@interface MPSRNNDescriptor : NSObject {

	BOOL _useLayerInputUnitTransformMode;
	BOOL _useFloat32Weights;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	id<MPSCNNConvolutionDataSource> _inputTransform;
	id<MPSCNNConvolutionDataSource> _outputTransform;
	id<MPSCNNConvolutionDataSource> _recurrentOutputTransform;
	unsigned long long _layerSequenceDirection;
	unsigned long long _internalKernelSelector;

}

@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputTransform;                        //@synthesize inputTransform=_inputTransform - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> outputTransform;                       //@synthesize outputTransform=_outputTransform - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> recurrentOutputTransform;              //@synthesize recurrentOutputTransform=_recurrentOutputTransform - In the implementation block
@property (assign,nonatomic) unsigned long long internalKernelSelector;                             //@synthesize internalKernelSelector=_internalKernelSelector - In the implementation block
@property (assign,nonatomic) unsigned long long inputFeatureChannels;                               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long outputFeatureChannels;                              //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (assign,nonatomic) BOOL useLayerInputUnitTransformMode;                                   //@synthesize useLayerInputUnitTransformMode=_useLayerInputUnitTransformMode - In the implementation block
@property (assign,nonatomic) BOOL useFloat32Weights;                                                //@synthesize useFloat32Weights=_useFloat32Weights - In the implementation block
@property (assign,nonatomic) unsigned long long layerSequenceDirection;                             //@synthesize layerSequenceDirection=_layerSequenceDirection - In the implementation block
-(unsigned long long)outputFeatureChannels;
-(void)dealloc;
-(void)setUseFloat32Weights:(BOOL)arg1 ;
-(id<MPSCNNConvolutionDataSource>)outputTransform;
-(unsigned long long)inputFeatureChannels;
-(id)init;
-(id<MPSCNNConvolutionDataSource>)inputTransform;
-(void)setInputTransform:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setInputFeatureChannels:(unsigned long long)arg1 ;
-(void)setOutputFeatureChannels:(unsigned long long)arg1 ;
-(void)setOutputTransform:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)recurrentOutputTransform;
-(void)setRecurrentOutputTransform:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(BOOL)useLayerInputUnitTransformMode;
-(void)setUseLayerInputUnitTransformMode:(BOOL)arg1 ;
-(unsigned long long)layerSequenceDirection;
-(void)setLayerSequenceDirection:(unsigned long long)arg1 ;
-(BOOL)useFloat32Weights;
-(unsigned long long)internalKernelSelector;
-(void)setInternalKernelSelector:(unsigned long long)arg1 ;
@end

