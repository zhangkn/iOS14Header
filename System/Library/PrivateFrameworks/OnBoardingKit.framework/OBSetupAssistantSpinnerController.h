/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBBaseWelcomeController.h>
#import <libobjc.A.dylib/OBSetupAssistantSupport.h>

@class OBPrivacyLinkController, UILabel, UIActivityIndicatorView, NSString;

@interface OBSetupAssistantSpinnerController : OBBaseWelcomeController <OBSetupAssistantSupport> {

	BOOL _activityIndicatorHidden;
	OBPrivacyLinkController* _privacyLinkController;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UILabel * label;                                                            //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,getter=isActivityIndicatorHidden,nonatomic) BOOL activityIndicatorHidden;              //@synthesize activityIndicatorHidden=_activityIndicatorHidden - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;                            //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_updateTextColor;
-(BOOL)isActivityIndicatorHidden;
-(id)initWithSpinnerText:(id)arg1 ;
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(long long)_activityIndicatorViewStyle;
-(id)_textStyle;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)_updateLayout;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UILabel *)label;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
@end

