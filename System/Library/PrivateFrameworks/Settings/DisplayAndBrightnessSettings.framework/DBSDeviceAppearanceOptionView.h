/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol DBSDeviceAppearanceOptionViewDelegate;
@class UIStackView, UIImageView, UILabel, DBSCheckmarkView, UIImpactFeedbackGenerator, NSString;

@interface DBSDeviceAppearanceOptionView : UIView <UIGestureRecognizerDelegate> {

	BOOL _highlight;
	id<DBSDeviceAppearanceOptionViewDelegate> _delegate;
	unsigned long long _appearanceOption;
	UIStackView* __stackView;
	UIImageView* __previewImageView;
	UILabel* __timeLabel;
	UILabel* __label;
	DBSCheckmarkView* __checkmarkView;
	UIImpactFeedbackGenerator* __feedbackGenerator;

}

@property (nonatomic,retain) UIStackView * _stackView;                                               //@synthesize _stackView=__stackView - In the implementation block
@property (nonatomic,retain) UIImageView * _previewImageView;                                        //@synthesize _previewImageView=__previewImageView - In the implementation block
@property (nonatomic,retain) UILabel * _timeLabel;                                                   //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,retain) UILabel * _label;                                                       //@synthesize _label=__label - In the implementation block
@property (nonatomic,retain) DBSCheckmarkView * _checkmarkView;                                      //@synthesize _checkmarkView=__checkmarkView - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * _feedbackGenerator;                         //@synthesize _feedbackGenerator=__feedbackGenerator - In the implementation block
@property (assign,getter=highlighted,nonatomic) BOOL highlight;                                      //@synthesize highlight=_highlight - In the implementation block
@property (assign,nonatomic,__weak) id<DBSDeviceAppearanceOptionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long appearanceOption;                                  //@synthesize appearanceOption=_appearanceOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)highlighted;
-(UILabel *)_timeLabel;
-(UIImageView *)_previewImageView;
-(UIStackView *)_stackView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)_label;
-(void)setDelegate:(id<DBSDeviceAppearanceOptionViewDelegate>)arg1 ;
-(id<DBSDeviceAppearanceOptionViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIImpactFeedbackGenerator *)_feedbackGenerator;
-(void)setHighlight:(BOOL)arg1 ;
-(DBSCheckmarkView *)_checkmarkView;
-(void)_configureView;
-(void)set_label:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appearanceOption:(unsigned long long)arg2 ;
-(unsigned long long)appearanceOption;
-(void)set_feedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)set_previewImageView:(UIImageView *)arg1 ;
-(void)set_timeLabel:(UILabel *)arg1 ;
-(void)set_checkmarkView:(DBSCheckmarkView *)arg1 ;
-(void)_updateViewForCurrentInterfaceStyle:(long long)arg1 ;
-(void)set_stackView:(UIStackView *)arg1 ;
-(void)_userDidTapOnView:(id)arg1 ;
@end
