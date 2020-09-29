/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/VNTrackObjectRequest.h>

@class NSNumber;

@interface VNTrackLegacyFaceCoreObjectRequest : VNTrackObjectRequest {

	BOOL _faceCoreEnhanceEyesAndMouthLocalization;
	BOOL _faceCoreExtractBlink;
	BOOL _faceCoreExtractSmile;
	NSNumber* _faceCoreMinFaceSize;
	NSNumber* _faceCoreNumberOfDetectionAngles;

}

@property (nonatomic,retain) NSNumber * faceCoreMinFaceSize;                            //@synthesize faceCoreMinFaceSize=_faceCoreMinFaceSize - In the implementation block
@property (nonatomic,retain) NSNumber * faceCoreNumberOfDetectionAngles;                //@synthesize faceCoreNumberOfDetectionAngles=_faceCoreNumberOfDetectionAngles - In the implementation block
@property (assign,nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;              //@synthesize faceCoreEnhanceEyesAndMouthLocalization=_faceCoreEnhanceEyesAndMouthLocalization - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractBlink;                                 //@synthesize faceCoreExtractBlink=_faceCoreExtractBlink - In the implementation block
@property (assign,nonatomic) BOOL faceCoreExtractSmile;                                 //@synthesize faceCoreExtractSmile=_faceCoreExtractSmile - In the implementation block
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(unsigned)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1 ;
+(id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
-(void)setFaceCoreNumberOfDetectionAngles:(NSNumber *)arg1 ;
-(void)populateDetectorProcessingOptions:(id)arg1 session:(id)arg2 ;
-(void)setFaceCoreEnhanceEyesAndMouthLocalization:(BOOL)arg1 ;
-(BOOL)faceCoreExtractSmile;
-(BOOL)faceCoreExtractBlink;
-(void)setFaceCoreExtractBlink:(BOOL)arg1 ;
-(void)setFaceCoreExtractSmile:(BOOL)arg1 ;
-(NSNumber *)faceCoreNumberOfDetectionAngles;
-(NSNumber *)faceCoreMinFaceSize;
-(BOOL)faceCoreEnhanceEyesAndMouthLocalization;
-(void)setFaceCoreMinFaceSize:(NSNumber *)arg1 ;
@end
