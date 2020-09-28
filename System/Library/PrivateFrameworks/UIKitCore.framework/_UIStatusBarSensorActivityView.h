/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIPortalView, UIView, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarSensorActivityView : UIView <_UIStatusBarDisplayable> {

	_UIPortalView* _portalView;
	UIView* _sensorActivityView;

}

@property (nonatomic,retain) _UIPortalView * portalView;                                             //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,retain) UIView * sensorActivityView;                                            //@synthesize sensorActivityView=_sensorActivityView - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIPortalView *)portalView;
-(void)setSensorActivityView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(UIView *)sensorActivityView;
-(void)configureSensorViewWithoutPortalIfNeeded;
-(void)configurePortalViewIfNeeded;
@end
