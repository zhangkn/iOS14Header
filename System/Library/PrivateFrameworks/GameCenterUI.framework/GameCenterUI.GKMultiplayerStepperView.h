/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface GameCenterUI.GKMultiplayerStepperView : UIView {

	 downButton;
	 upButton;
	 label;
	 backgroundView;
	 model;
	 isStepperHidden;

}

@property (readonly,nonatomic) UIButton * accessibilityDownButton; 
@property (readonly,nonatomic) UIButton * accessibilityUpButton; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didTapDown:(id)arg1 ;
-(void)didTapUp:(id)arg1 ;
-(UIButton *)accessibilityDownButton;
-(UIButton *)accessibilityUpButton;
-(void)accessibilityUpdateStepperWithValue:(long long)arg1 ;
-(void)layoutSubviews;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

