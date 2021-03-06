/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class SBFFluidBehaviorSettings;

@interface SBSwitcherAnimationAttributes : NSObject <NSCopying, NSMutableCopying> {

	long long _updateMode;
	SBFFluidBehaviorSettings* _layoutSettings;
	SBFFluidBehaviorSettings* _positionSettings;
	SBFFluidBehaviorSettings* _scaleSettings;
	SBFFluidBehaviorSettings* _opacitySettings;
	SBFFluidBehaviorSettings* _cornerRadiusSettings;

}

@property (assign,nonatomic) long long updateMode;                                         //@synthesize updateMode=_updateMode - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * layoutSettings;                    //@synthesize layoutSettings=_layoutSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * positionSettings;                  //@synthesize positionSettings=_positionSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * scaleSettings;                     //@synthesize scaleSettings=_scaleSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * opacitySettings;                   //@synthesize opacitySettings=_opacitySettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * cornerRadiusSettings;              //@synthesize cornerRadiusSettings=_cornerRadiusSettings - In the implementation block
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SBFFluidBehaviorSettings *)layoutSettings;
-(void)setOpacitySettings:(SBFFluidBehaviorSettings *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_copyWithClass:(Class)arg1 ;
-(void)setScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setLayoutSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(long long)updateMode;
-(SBFFluidBehaviorSettings *)opacitySettings;
-(SBFFluidBehaviorSettings *)scaleSettings;
-(SBFFluidBehaviorSettings *)positionSettings;
-(SBFFluidBehaviorSettings *)cornerRadiusSettings;
-(void)setUpdateMode:(long long)arg1 ;
-(void)setCornerRadiusSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setPositionSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

