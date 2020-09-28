/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class SFShareAudioViewController, UILabel, UIView;

@interface SFShareAudioBaseViewController : UIViewController {

	SFShareAudioViewController* _mainController;
	UILabel* _titleLabel;
	UIView* _cardView;
	BOOL _viewActive;

}

@property (nonatomic,retain) SFShareAudioViewController * mainController;              //@synthesize mainController=_mainController - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * cardView;                                        //@synthesize cardView=_cardView - In the implementation block
@property (assign,nonatomic) BOOL viewActive;                                          //@synthesize viewActive=_viewActive - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(UIView *)cardView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setCardView:(UIView *)arg1 ;
-(void)setMainController:(SFShareAudioViewController *)arg1 ;
-(SFShareAudioViewController *)mainController;
-(BOOL)viewActive;
-(void)setViewActive:(BOOL)arg1 ;
@end
