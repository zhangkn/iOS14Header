/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@class UIImageView, NTKColoringLabel, NTKRichComplicationDialView, NSNumber, NSString;

@interface NTKStopwatchRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView <CLKMonochromeComplicationView> {

	UIImageView* _timerImageView;
	NTKColoringLabel* _timeLabel;
	NTKRichComplicationDialView* _frontDial;
	NTKRichComplicationDialView* _backDial;
	NSNumber* _updateToken;
	SCD_Struct_NT22 _layoutConstants;

}

@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(void)_updateDialProgress;
-(void)makeBackgroundTransparent;
-(double)_stopwatchCurrentTime;
@end

