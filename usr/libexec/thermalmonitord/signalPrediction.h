//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel;

@interface signalPrediction : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)urlOfModelInThisBundle;	// IMP=0x00000001000563f4
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000568b8
- (id)predictionFromTemp:(double)arg1 temp1:(double)arg2 temp2:(double)arg3 temp3:(double)arg4 power:(double)arg5 power1:(double)arg6 power2:(double)arg7 power3:(double)arg8 error:(id *)arg9;	// IMP=0x000000010005680c
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000567a0
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100056750
- (id)initWithModelCollectionEntry:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000566b0
- (id)initWithModelCollectionEntry:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100056620
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005659c
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100056548
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000564cc
- (id)init;	// IMP=0x000000010005648c

@end
