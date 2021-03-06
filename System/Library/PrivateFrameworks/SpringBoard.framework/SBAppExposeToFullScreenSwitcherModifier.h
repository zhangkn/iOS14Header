/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, NSString, SBAppExposeGridSwitcherModifier, SBSwitcherModifier, SBRouteToAppExposeSwitcherModifier, NSArray;

@interface SBAppExposeToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	SBAppLayout* _fullScreenAppLayout;
	SBAppLayout* _floatingAppLayout;
	NSString* _bundleIdentifier;
	SBAppExposeGridSwitcherModifier* _appExposeModifier;
	SBSwitcherModifier* _fullscreenModifier;
	SBRouteToAppExposeSwitcherModifier* _routeToAppExposeModifier;
	BOOL _isSimulatingPreTransitionState;
	NSArray* _appLayoutsBeforeTransition;

}
-(id)transitionWillBegin;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)appLayouts;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)transitionDidEnd;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)plusButtonAlpha;
-(id)visibleAppLayouts;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 floatingAppLayout:(id)arg4 bundleIdentifier:(id)arg5 appExposeModifier:(id)arg6 fullScreenModifier:(id)arg7 ;
-(id)_newAppExposeModifier;
-(BOOL)_isEffectivelyFullScreen;
-(BOOL)_isIndexActive:(unsigned long long)arg1 ;
-(void)_performBlockBySimulatingPreTransitionState:(/*^block*/id)arg1 ;
@end

