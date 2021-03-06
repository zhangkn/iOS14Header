/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSData, CUIRenditionMetrics, CUIRenditionSliceInformation;

@interface _CUIRawPixelRendition : CUIThemeRendition {

	int _pixelFormat;
	unsigned _nimages;
	NSData* _rawData;
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;

}
-(id)metrics;
-(id)maskForSliceIndex:(long long)arg1 ;
-(int)pixelFormat;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)imageForSliceIndex:(long long)arg1 ;
-(void)dealloc;
-(CGSize)unslicedSize;
-(CGImageRef)unslicedImage;
-(id)sliceInformation;
-(BOOL)isScaled;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
@end

