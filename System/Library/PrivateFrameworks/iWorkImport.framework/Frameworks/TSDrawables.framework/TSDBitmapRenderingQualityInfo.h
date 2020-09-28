/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject {

	int mQuality;
	float mCanvasScale;
	NSMutableDictionary* mImageMap;

}

@property (nonatomic,readonly) int quality; 
-(int)quality;
-(void)dealloc;
-(void)cacheProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(CGImageRef)degradedImageRefForProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(id)initWithQuality:(int)arg1 canvasScale:(float)arg2 ;
@end
