/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSData, NSNumber;

@interface RAWVignetteTable : RAWFilter {

	CIImage* inputImage;
	NSData* inputVignetteTableData;
	NSNumber* inputVignetteTableDataSize;
	id inputColorSpace;
	CIImage* vigImg;

}
-(id)outputImage;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)makeMapImages;
@end
