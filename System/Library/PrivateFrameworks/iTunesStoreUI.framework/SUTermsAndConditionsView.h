/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SUTermsAndConditionsViewDelegate;
@class SUSubtitledButton, SUClientInterface, SULinkControl;

@interface SUTermsAndConditionsView : UIView {

	SUSubtitledButton* _button;
	SUClientInterface* _clientInterface;
	id<SUTermsAndConditionsViewDelegate> _delegate;
	BOOL _hideAccountButton;
	double _rightMargin;
	long long _style;
	SULinkControl* _termsAndConditionsControl;

}

@property (nonatomic,retain) SUClientInterface * clientInterface;                               //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign,nonatomic,__weak) id<SUTermsAndConditionsViewDelegate> delegate; 
@property (assign,nonatomic) BOOL hideAccountButton;                                            //@synthesize hideAccountButton=_hideAccountButton - In the implementation block
@property (assign,nonatomic) double rightMargin;                                                //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) long long style;                                                   //@synthesize style=_style - In the implementation block
-(id)_button;
-(void)sizeToFit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(long long)style;
-(void)layoutSubviews;
-(void)_updateButton;
-(void)setDelegate:(id<SUTermsAndConditionsViewDelegate>)arg1 ;
-(double)rightMargin;
-(id<SUTermsAndConditionsViewDelegate>)delegate;
-(SUClientInterface *)clientInterface;
-(void)setRightMargin:(double)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)setHideAccountButton:(BOOL)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_destroyButton;
-(long long)_linkStyleForStyle:(long long)arg1 ;
-(double)_buttonHeightForStyle:(long long)arg1 ;
-(id)_termsAndConditionsControl;
-(void)_clearButtonSelection:(id)arg1 ;
-(void)_termsAndConditionsAction:(id)arg1 ;
-(BOOL)hideAccountButton;
@end

