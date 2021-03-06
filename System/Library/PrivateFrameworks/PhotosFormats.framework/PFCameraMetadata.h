/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, VNImageAestheticsObservation, VNSaliencyImageObservation, VNSceneObservation, NSString, NSData;

@interface PFCameraMetadata : NSObject <NSSecureCoding> {

	BOOL _horizonLinePresent;
	float _horizonLineAngleInDegrees;
	NSArray* _junkImageClassificationObservations;
	VNImageAestheticsObservation* _imageAestheticsObservation;
	VNSaliencyImageObservation* _saliencyObservation;
	VNSceneObservation* _scenePrintObservation;
	VNSceneObservation* _compressedScenePrintObservation;
	NSArray* _detectedHumanFaces;
	NSArray* _detectedHumanBodies;
	NSArray* _detectedCatBodies;
	NSArray* _detectedDogBodies;
	NSArray* _detectedSalientObjects;
	unsigned long long _stitchConfidence;
	NSString* _captureFolderPath;

}

@property (nonatomic,readonly) NSArray * junkImageClassificationObservations;                          //@synthesize junkImageClassificationObservations=_junkImageClassificationObservations - In the implementation block
@property (nonatomic,readonly) VNImageAestheticsObservation * imageAestheticsObservation;              //@synthesize imageAestheticsObservation=_imageAestheticsObservation - In the implementation block
@property (nonatomic,readonly) VNSaliencyImageObservation * saliencyObservation;                       //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
@property (nonatomic,readonly) VNSceneObservation * scenePrintObservation;                             //@synthesize scenePrintObservation=_scenePrintObservation - In the implementation block
@property (nonatomic,readonly) VNSceneObservation * compressedScenePrintObservation;                   //@synthesize compressedScenePrintObservation=_compressedScenePrintObservation - In the implementation block
@property (nonatomic,readonly) NSArray * detectedHumanFaces;                                           //@synthesize detectedHumanFaces=_detectedHumanFaces - In the implementation block
@property (nonatomic,readonly) NSArray * detectedHumanBodies;                                          //@synthesize detectedHumanBodies=_detectedHumanBodies - In the implementation block
@property (nonatomic,readonly) NSArray * detectedCatBodies;                                            //@synthesize detectedCatBodies=_detectedCatBodies - In the implementation block
@property (nonatomic,readonly) NSArray * detectedDogBodies;                                            //@synthesize detectedDogBodies=_detectedDogBodies - In the implementation block
@property (nonatomic,readonly) NSArray * detectedSalientObjects;                                       //@synthesize detectedSalientObjects=_detectedSalientObjects - In the implementation block
@property (nonatomic,readonly) unsigned long long stitchConfidence;                                    //@synthesize stitchConfidence=_stitchConfidence - In the implementation block
@property (nonatomic,readonly) BOOL horizonLinePresent;                                                //@synthesize horizonLinePresent=_horizonLinePresent - In the implementation block
@property (nonatomic,readonly) float horizonLineAngleInDegrees;                                        //@synthesize horizonLineAngleInDegrees=_horizonLineAngleInDegrees - In the implementation block
@property (nonatomic,readonly) NSString * captureFolderPath;                                           //@synthesize captureFolderPath=_captureFolderPath - In the implementation block
@property (readonly) NSData * JSONDebugDescription; 
+(BOOL)supportsSecureCoding;
-(VNSaliencyImageObservation *)saliencyObservation;
-(NSArray *)junkImageClassificationObservations;
-(VNSceneObservation *)scenePrintObservation;
-(VNImageAestheticsObservation *)imageAestheticsObservation;
-(id)initWithSpatialOverCapturePrivateClientMetadata:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithJunkImageClassificationObservations:(id)arg1 imageAestheticsObservation:(id)arg2 saliencyObservation:(id)arg3 scenePrintObservation:(id)arg4 compressedScenePrintObservation:(id)arg5 detectedObjectsInfoHumanFaces:(id)arg6 detectedObjectsInfoHumanBodies:(id)arg7 detectedObjectsInfoCatBodies:(id)arg8 detectedObjectsInfoDogBodies:(id)arg9 detectedObjectsSalientObjects:(id)arg10 stitchConfidence:(unsigned long long)arg11 horizonLinePresent:(BOOL)arg12 horizonLineAngleInDegrees:(float)arg13 captureFolderPath:(id)arg14 ;
-(NSData *)JSONDebugDescription;
-(VNSceneObservation *)compressedScenePrintObservation;
-(NSArray *)detectedHumanFaces;
-(NSArray *)detectedHumanBodies;
-(NSArray *)detectedCatBodies;
-(NSArray *)detectedDogBodies;
-(NSArray *)detectedSalientObjects;
-(unsigned long long)stitchConfidence;
-(BOOL)horizonLinePresent;
-(float)horizonLineAngleInDegrees;
-(NSString *)captureFolderPath;
@end

