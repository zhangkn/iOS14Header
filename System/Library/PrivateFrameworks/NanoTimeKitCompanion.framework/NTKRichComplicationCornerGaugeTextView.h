/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseGaugeView.h>

@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerGaugeTextView : NTKRichComplicationCornerBaseGaugeView {

	NTKCurvedColoringLabel* _outerLabel;

}

@property (nonatomic,readonly) NTKCurvedColoringLabel * outerLabel;              //@synthesize outerLabel=_outerLabel - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)layoutSubviews;
-(id)init;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(NTKCurvedColoringLabel *)outerLabel;
@end
