/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class SBAppLayout, SBFFluidBehaviorSettings, NSSet;

@interface SBIconViewVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse {

	BOOL _visible;
	SBAppLayout* _appLayout;
	SBFFluidBehaviorSettings* _animationSettings;
	NSSet* _excludedIconLocations;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;                                   //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) SBFFluidBehaviorSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,readonly) NSSet * excludedIconLocations;                             //@synthesize excludedIconLocations=_excludedIconLocations - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                             //@synthesize visible=_visible - In the implementation block
-(SBFFluidBehaviorSettings *)animationSettings;
-(SBAppLayout *)appLayout;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithAppLayout:(id)arg1 visible:(BOOL)arg2 animationSettings:(id)arg3 excludedIconLocations:(id)arg4 ;
-(long long)type;
-(NSSet *)excludedIconLocations;
-(BOOL)isVisible;
@end

