/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@class NSString, RBSAssertion;

@interface _UIRootWindow : UIWindow {

	double _scale;
	os_unfair_lock_s _visibilityLock;
	BOOL _visibilityLock_enabled;
	NSString* _visibilityLock_environment;
	NSString* _visibilityLock_identifier;
	BOOL _visibilityLock_updateEnqueued;
	os_unfair_lock_s _visibilityProcessingLock;
	NSString* _visibilityProcessingLock_identifier;
	RBSAssertion* _visibilityProcessingLock_assertion;
	CGAffineTransform _additionalRootLayerAffineTransform;

}

@property (assign,setter=_setAdditionalRootLayerAffineTransform:,getter=_additionalRootLayerAffineTransform,nonatomic) CGAffineTransform additionalRootLayerAffineTransform;              //@synthesize additionalRootLayerAffineTransform=_additionalRootLayerAffineTransform - In the implementation block
@property (nonatomic,copy,readonly) NSString * visibilityEnvironment; 
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_extendsScreenSceneLifetime;
-(void)_configureContextOptions:(id)arg1 ;
-(void)_updateVisibility;
-(void)_visibilityLock_enqueueUpdateIfNecessary_body;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(void)_visibilityLock_enqueueUpdateIfNecessary;
-(void)dealloc;
-(void)_configureRootLayer:(id)arg1 sceneTransformLayer:(id)arg2 transformLayer:(id)arg3 ;
-(id)_context;
-(id)_layerForCoordinateSpaceConversion;
-(BOOL)_transformLayerIncludesScreenRotation;
-(id)_visibilityLock_environment;
-(void)_noteScreenDidChangeMode:(id)arg1 ;
-(NSString *)visibilityEnvironment;
-(void)setVisibilityIdentifier:(id)arg1 ;
-(void)_setAdditionalRootLayerAffineTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)_additionalRootLayerAffineTransform;
-(BOOL)_wantsSceneAssociation;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(SCD_Struct_UI37)_bindingDescription;
@end

