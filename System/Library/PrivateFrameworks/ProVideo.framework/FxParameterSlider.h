/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:41 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxPinParameter.h>

@interface FxParameterSlider : FxPinParameter {

	FxParameterSliderPriv* _sliderPriv;

}
-(void)setMaxValue:(double)arg1 ;
-(double)stepValue;
-(void)setStepValue:(double)arg1 ;
-(void)dealloc;
-(double)maxValue;
-(double)minValue;
-(id)init;
-(void)setMinValue:(double)arg1 ;
-(BOOL)isLogarithmic;
-(double)minSliderValue;
-(void)setMinSliderValue:(double)arg1 ;
-(double)maxSliderValue;
-(void)setMaxSliderValue:(double)arg1 ;
-(void)setIsLogarithmic:(BOOL)arg1 ;
@end

