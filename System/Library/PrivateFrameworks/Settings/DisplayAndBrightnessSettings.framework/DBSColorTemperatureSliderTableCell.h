/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <Preferences/PSSliderTableCell.h>

@class UILabel;

@interface DBSColorTemperatureSliderTableCell : PSSliderTableCell {

	UILabel* _coolerLabel;
	UILabel* _warmerLabel;
	double _horizontalMargin;
	double _verticalMargin;

}
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

