/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPhotoEffect3D : CIFilter {

	CIImage* inputImage;
	CIImage* inputDepthMap;
	NSNumber* inputThreshold;
	NSNumber* inputGrainAmount;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputDepthMap; 
@property (nonatomic,retain) NSNumber * inputThreshold; 
@property (nonatomic,retain) NSNumber * inputGrainAmount; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(int)_defaultVersion;
-(int)_maxVersion;
-(id)init;
-(id)cubeName;
-(id)cubePath;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(void)setDefaults;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(id)cubeColorSpaceName;
-(int)_maxVersionBG;
-(NSNumber *)inputGrainAmount;
-(id)backgroundCubeName;
-(id)applyCubeWithName:(id)arg1 toImage:(id)arg2 ;
-(id)_CIPhotoEffectDepthBlend;
-(id)backgroundCubePath;
-(CIImage *)inputDepthMap;
-(void)setInputDepthMap:(CIImage *)arg1 ;
-(void)setInputGrainAmount:(NSNumber *)arg1 ;
@end

