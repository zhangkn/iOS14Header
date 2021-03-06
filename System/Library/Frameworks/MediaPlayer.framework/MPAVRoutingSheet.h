/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MPAVRoutingViewControllerDelegate.h>

@class UIWindow, UIView, UIButton, MPAVRoutingViewController, NSString;

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate> {

	UIWindow* _presentationWindow;
	UIView* _backgroundView;
	UIButton* _dismissBackgroundButton;
	UIButton* _dismissControlsViewButton;
	UIView* _controlsView;
	UIButton* _cancelButton;
	MPAVRoutingViewController* _routingViewController;
	/*^block*/id _completionHandler;
	BOOL _mirroringOnly;

}

@property (assign,setter=setAVItemType:,nonatomic) long long avItemType; 
@property (assign,nonatomic) BOOL mirroringOnly;                                      //@synthesize mirroringOnly=_mirroringOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithAVItemType:(long long)arg1 ;
-(void)showInView:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_updateRoutingSheetFrame;
-(void)_animateControls:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateDismissButtonText;
-(CGRect)_routingViewFrame;
-(CGRect)_cancelButtonFrame;
-(CGRect)_controlsViewFrame;
-(CGSize)_maxRoutingViewSize;
-(long long)avItemType;
-(void)layoutSubviews;
-(void)setAVItemType:(long long)arg1 ;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1 ;
-(void)setMirroringOnly:(BOOL)arg1 ;
-(BOOL)mirroringOnly;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(void)dismiss;
@end

