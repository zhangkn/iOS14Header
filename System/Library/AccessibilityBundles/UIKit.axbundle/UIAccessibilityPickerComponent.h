/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement {

	unsigned long long _component;
	UIPickerView* _picker;

}

@property (assign,nonatomic) unsigned long long component;              //@synthesize component=_component - In the implementation block
@property (assign,nonatomic,__weak) UIPickerView * picker;              //@synthesize picker=_picker - In the implementation block
-(id)accessibilityLabel;
-(UIPickerView *)picker;
-(void)setPicker:(UIPickerView *)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)_accessibilitySetNativeFocus;
-(CGRect)accessibilityFrame;
-(id)accessibilityUserInputLabels;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilityUserTestingChildren;
-(id)accessibilityValue;
-(id)_accessibilityScrollStatus;
-(unsigned long long)component;
-(void)setComponent:(unsigned long long)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(id)accessibilityHint;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(long long)_accessibilityIndexForPickerString:(id)arg1 ;
-(NSRange)accessibilityRowRange;
-(double)_accessibilityNumberValue;
-(long long)_accessibilityPickerType;
-(unsigned long long)_accessibilityDatePickerComponentType;
-(id)_accessibilityDateTimePickerValues;
-(unsigned long long)accessibilityTraits;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_axIsInDatePickerView;
-(id)_accessibilityViewForComponent;
-(BOOL)_isRowDisabledInWebKit:(long long)arg1 ;
-(void)_accessibilityMoveSelection:(long long)arg1 ;
-(id)_axSpeechInputLabelForTimeIntervalCalendarUnit:(unsigned long long)arg1 ;
-(id)_axSpeechInputLabelForDateCalendarUnit:(unsigned long long)arg1 ;
@end
