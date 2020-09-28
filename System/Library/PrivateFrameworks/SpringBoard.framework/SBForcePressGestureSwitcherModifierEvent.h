/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@interface SBForcePressGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {

	double _forcePercent;

}

@property (assign,nonatomic) double forcePercent;              //@synthesize forcePercent=_forcePercent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)forcePercent;
-(long long)type;
-(void)setForcePercent:(double)arg1 ;
@end
