/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSNNGramMatrixCallback;
@interface MPSNNGramMatrixCalculationNode : MPSNNFilterNode {

	float _alpha;
	id<MPSNNGramMatrixCallback> _propertyCallBack;

}

@property (nonatomic,readonly) float alpha;                                             //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,retain) id<MPSNNGramMatrixCallback> propertyCallBack;              //@synthesize propertyCallBack=_propertyCallBack - In the implementation block
+(id)nodeWithSource:(id)arg1 alpha:(float)arg2 ;
+(id)nodeWithSource:(id)arg1 ;
-(id<MPSNNGramMatrixCallback>)propertyCallBack;
-(void)setPropertyCallBack:(id<MPSNNGramMatrixCallback>)arg1 ;
-(void)dealloc;
-(float)alpha;
-(id)initWithSource:(id)arg1 alpha:(float)arg2 ;
-(id)initWithSource:(id)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
@end
