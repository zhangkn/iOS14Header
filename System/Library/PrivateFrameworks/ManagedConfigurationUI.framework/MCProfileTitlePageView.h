/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCSectionBasedTableView.h>

@class UIView, UIButton;

@interface MCProfileTitlePageView : MCSectionBasedTableView {

	UIView* _topBarView;
	UIView* _bottomBarView;
	UIButton* _installButton;
	UIButton* _infoButton;
	UIButton* _cancelButton;

}

@property (nonatomic,readonly) UIView * topBarView;                   //@synthesize topBarView=_topBarView - In the implementation block
@property (nonatomic,readonly) UIView * bottomBarView;                //@synthesize bottomBarView=_bottomBarView - In the implementation block
@property (nonatomic,readonly) UIButton * installButton;              //@synthesize installButton=_installButton - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;                 //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;               //@synthesize cancelButton=_cancelButton - In the implementation block
-(UIButton *)cancelButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)topBarView;
-(UIButton *)infoButton;
-(id)_createInstallButton;
-(id)_createCancelButton;
-(UIButton *)installButton;
-(id)_createBottomView;
-(id)_createInfoButton;
-(UIView *)bottomBarView;
-(void)showBottomView:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

