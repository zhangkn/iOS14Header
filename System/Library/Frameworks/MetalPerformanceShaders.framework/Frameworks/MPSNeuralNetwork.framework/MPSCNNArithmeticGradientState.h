/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNBinaryGradientState.h>

@interface MPSCNNArithmeticGradientState : MPSNNBinaryGradientState {

	unsigned long long _resourcePixelFormat;
	MPSImageCoordinate _resourceSize;
	unsigned long long _primaryFCStride;
	unsigned long long _secondaryFCStride;

}
-(void)dealloc;
-(id)init;
@end
