/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UILegibilitySettings;

@interface SBLockScreenPluginPresentation : NSObject <NSCopying> {

	_UILegibilitySettings* legibilitySettings;
	UIEdgeInsets suggestedContentInsets;

}

@property (assign,nonatomic) UIEdgeInsets suggestedContentInsets; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)description;
-(void)setSuggestedContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)suggestedContentInsets;
@end

