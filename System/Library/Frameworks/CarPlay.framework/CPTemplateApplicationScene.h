/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CarPlay-Structs.h>
#import <UIKitCore/UIScene.h>
#import <libobjc.A.dylib/_UISceneUIWindowHosting.h>
#import <libobjc.A.dylib/_UIContextBinderContextCreationPolicyHolding.h>
#import <UIKit/UICoordinateSpace.h>
#import <libobjc.A.dylib/_UISceneSettingsDiffAction.h>
#import <libobjc.A.dylib/CPWindowProviding.h>

@protocol NSObject;
@class CPWindow, UITraitCollection, _UIContextBinder, UIScreen, CPInterfaceController, UIApplicationSceneSettingsDiffInspector, UIStatusBarManager, NSString;

@interface CPTemplateApplicationScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace, _UISceneSettingsDiffAction, CPWindowProviding> {

	id<NSObject> _sceneWillConnectObserver;
	id<NSObject> _didFinishLaunchingObserver;
	BOOL _sceneWillConnect;
	_UIContextBinder* _contextBinder;
	UIScreen* _screen;
	UITraitCollection* _traitCollection;
	long long _screenRequestedOverscanCompensation;
	CPWindow* _carWindow;
	CPInterfaceController* _interfaceController;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsInterfaceStyleDiffInspector;

}

@property (nonatomic,retain) CPWindow * carWindow;                                                                            //@synthesize carWindow=_carWindow - In the implementation block
@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsInterfaceStyleDiffInspector;              //@synthesize sceneSettingsInterfaceStyleDiffInspector=_sceneSettingsInterfaceStyleDiffInspector - In the implementation block
@property (nonatomic,retain) id<CPTemplateApplicationSceneDelegate> delegate; 
@property (nonatomic,readonly) CPInterfaceController * interfaceController;                                                   //@synthesize interfaceController=_interfaceController - In the implementation block
@property (nonatomic,readonly) UIScreen * _screen; 
@property (nonatomic,readonly) long long _interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * _traitCollection; 
@property (nonatomic,readonly) UIStatusBarManager * _statusBarManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) UITraitCollection * carTraitCollection; 
+(BOOL)_hostsWindows;
+(id)activeTemplateScene;
-(CGRect)bounds;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 ;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(BOOL)_permitContextCreationForBindingDescription:(SCD_Struct_CP0)arg1 ;
-(void)_detachWindow:(id)arg1 ;
-(id)initWithSession:(id)arg1 connectionOptions:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(long long)_interfaceOrientation;
-(UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1 ;
-(void)_invalidate;
-(void)_attachWindow:(id)arg1 ;
-(id)_definition;
-(CPInterfaceController *)interfaceController;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1 ;
-(void)_windowUpdatedVisibility:(id)arg1 ;
-(void)_windowUpdatedProperties:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(void)_readySceneForConnection;
-(id)_fbsSceneLayerForWindow:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id<UICoordinateSpace>)_coordinateSpace;
-(UIScreen *)_screen;
-(id)_componentForKey:(id)arg1 ;
-(UITraitCollection *)carTraitCollection;
-(BOOL)_sceneWillConnect;
-(void)updateLayoutGuideWithInsets:(UIEdgeInsets)arg1 ;
-(CPWindow *)carWindow;
-(void)setCarWindow:(CPWindow *)arg1 ;
-(void)_deliverInterfaceControllerToDelegate;
-(void)_refreshTraitCollection;
-(BOOL)_shouldCreateCarWindow;
-(BOOL)_shouldCallAppDelegate;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsInterfaceStyleDiffInspector;
-(void)setSceneSettingsInterfaceStyleDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

