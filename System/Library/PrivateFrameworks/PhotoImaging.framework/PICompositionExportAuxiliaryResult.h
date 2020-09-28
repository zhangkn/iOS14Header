/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PICompositionExportResult.h>

@class NSData, NSURL, NSDictionary;

@interface PICompositionExportAuxiliaryResult : PICompositionExportResult {

	NSData* _companionImageData;
	NSURL* _companionVideoURL;
	NSDictionary* _auxiliaryImages;
	NSDictionary* _properties;

}

@property (retain) NSDictionary * auxiliaryImages;              //@synthesize auxiliaryImages=_auxiliaryImages - In the implementation block
@property (copy) NSDictionary * properties;                     //@synthesize properties=_properties - In the implementation block
@property (assign) SCD_Struct_PI5 inputSize; 
@property (retain) NSData * companionImageData;                 //@synthesize companionImageData=_companionImageData - In the implementation block
@property (retain) NSURL * companionVideoURL;                   //@synthesize companionVideoURL=_companionVideoURL - In the implementation block
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSURL *)companionVideoURL;
-(NSData *)companionImageData;
-(NSDictionary *)properties;
-(void)setCompanionImageData:(NSData *)arg1 ;
-(void)setCompanionVideoURL:(NSURL *)arg1 ;
-(NSDictionary *)auxiliaryImages;
-(void)setAuxiliaryImages:(NSDictionary *)arg1 ;
@end
