/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUSectionedGridLayoutAttributes.h>

@class UIColor;

@interface PUImportSectionedGridLayoutAttributes : PUSectionedGridLayoutAttributes {

	UIColor* _backgroundColor;
	double _strokeWidth;
	UIColor* _bottomStrokeColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double strokeWidth;                       //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * bottomStrokeColor;              //@synthesize bottomStrokeColor=_bottomStrokeColor - In the implementation block
-(double)strokeWidth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setBottomStrokeColor:(UIColor *)arg1 ;
-(UIColor *)bottomStrokeColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
@end

