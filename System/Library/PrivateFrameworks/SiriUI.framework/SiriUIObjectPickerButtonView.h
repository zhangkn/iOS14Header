/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface SiriUIObjectPickerButtonView : UIView {

	UIButton* _button;

}

@property (nonatomic,readonly) UIButton * button;              //@synthesize button=_button - In the implementation block
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
