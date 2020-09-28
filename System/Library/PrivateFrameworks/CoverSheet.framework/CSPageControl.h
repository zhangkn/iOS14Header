/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIPageControl.h>

@class _UILegibilitySettings;

@interface CSPageControl : UIPageControl {

	_UILegibilitySettings* _sbLegibilitySettings;
	unsigned long long _cameraPageIndex;

}

@property (assign,nonatomic) unsigned long long cameraPageIndex;              //@synthesize cameraPageIndex=_cameraPageIndex - In the implementation block
+(CGRect)suggestedFrameForPageBounds:(CGRect)arg1 ;
+(CGRect)suggestedFrameForPageBounds:(CGRect)arg1 desiredSize:(CGSize)arg2 ;
+(CGSize)defaultSize;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_updateForLegibility;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_cameraIndicator;
-(void)setCameraPageIndex:(unsigned long long)arg1 ;
-(void)_rebuildIndicators;
-(unsigned long long)cameraPageIndex;
-(id)_currentPageIndicatorColor;
-(id)_pageIndicatorColor;
@end
