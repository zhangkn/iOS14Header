/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDSwatchRenderingOperation.h>

@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation {

	int mShapeType;
	double mAngle;

}
-(UIEdgeInsets)swatchEdgeInsets;
-(BOOL)needsPressedStateBackground;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7 ;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 shapeType:(int)arg5 documentRoot:(id)arg6 ;
@end
