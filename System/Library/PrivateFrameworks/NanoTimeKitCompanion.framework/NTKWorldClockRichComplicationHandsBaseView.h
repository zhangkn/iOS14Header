/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class CALayer, UIColor, NSString;

@interface NTKWorldClockRichComplicationHandsBaseView : NTKAnalogHandsView <CLKMonochromeComplicationView> {

	SCD_Struct_NT30 _layoutConstants;
	CALayer* _pegDot;
	id<CLKMonochromeFilterProvider> _filterProvider;
	UIColor* _pegDotColor;

}

@property (nonatomic,retain) UIColor * pegDotColor;                                              //@synthesize pegDotColor=_pegDotColor - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id)initForDevice:(id)arg1 ;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(id)createHourHandView;
-(id)createMinuteHandView;
-(id)createSecondHandView;
-(double)_timeAnimationFramesPerSecondForDevice:(id)arg1 ;
-(long long)complicationFamily;
-(long long)displayedHour;
-(void)setPegDotColor:(UIColor *)arg1 ;
-(UIColor *)pegDotColor;
@end

