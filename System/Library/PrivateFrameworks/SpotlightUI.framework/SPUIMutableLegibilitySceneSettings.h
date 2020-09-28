/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/SPUILegibilitySceneSettings.h>

@class _UILegibilitySettings, NSString;

@interface SPUIMutableLegibilitySceneSettings : UIMutableApplicationSceneSettings <SPUILegibilitySceneSettings>

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)keyDescriptionForSetting:(long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3 ;
-(_UILegibilitySettings *)legibilitySettings;
@end
