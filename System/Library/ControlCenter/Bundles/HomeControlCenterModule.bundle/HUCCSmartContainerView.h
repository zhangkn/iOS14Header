/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeControlCenterModule/HomeControlCenterModule-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, HUCCInfoMosaicGridView;

@interface HUCCSmartContainerView : UIView {

	BOOL _isShowingLockSecurity;
	UIView* _animationView;
	UIView* _compressedView;
	UIView* _expandedView;
	HUCCInfoMosaicGridView* _lockSecurityView;
	CGRect _compressedAnimationStartFrame;

}

@property (nonatomic,retain) HUCCInfoMosaicGridView * lockSecurityView;              //@synthesize lockSecurityView=_lockSecurityView - In the implementation block
@property (assign,nonatomic) CGRect compressedAnimationStartFrame;                   //@synthesize compressedAnimationStartFrame=_compressedAnimationStartFrame - In the implementation block
@property (nonatomic,retain) UIView * animationView;                                 //@synthesize animationView=_animationView - In the implementation block
@property (nonatomic,retain) UIView * compressedView;                                //@synthesize compressedView=_compressedView - In the implementation block
@property (nonatomic,retain) UIView * expandedView;                                  //@synthesize expandedView=_expandedView - In the implementation block
@property (assign,nonatomic) BOOL isShowingLockSecurity;                             //@synthesize isShowingLockSecurity=_isShowingLockSecurity - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)animationView;
-(void)setAnimationView:(UIView *)arg1 ;
-(UIView *)expandedView;
-(void)setExpandedView:(UIView *)arg1 ;
-(void)resetToInitialState;
-(void)setIsShowingLockSecurity:(BOOL)arg1 ;
-(UIView *)compressedView;
-(void)setCompressedAnimationStartFrame:(CGRect)arg1 ;
-(BOOL)isShowingLockSecurity;
-(void)setLockSecurityView:(HUCCInfoMosaicGridView *)arg1 ;
-(HUCCInfoMosaicGridView *)lockSecurityView;
-(void)setCompressedView:(UIView *)arg1 ;
-(void)willMoveToExpandedStateWithAnimationStartFrame:(CGRect)arg1 ;
-(void)showLockSecurityWithFrameDelegate:(id)arg1 ;
-(void)hideLockSecurity;
-(CGRect)compressedAnimationStartFrame;
@end
