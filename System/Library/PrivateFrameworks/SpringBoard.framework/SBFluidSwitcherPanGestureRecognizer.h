/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPanSystemGestureRecognizer.h>
#import <libobjc.A.dylib/SBGestureRecognizerPanGestureProviding.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>

@class SBFluidSwitcherViewController, SBTouchHistory, NSString;

@interface SBFluidSwitcherPanGestureRecognizer : SBPanSystemGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding> {

	BOOL _installedAsSystemGesture;
	SBFluidSwitcherViewController* _switcherViewController;
	SBTouchHistory* _touchHistory;

}

@property (nonatomic,retain) SBTouchHistory * touchHistory;                                              //@synthesize touchHistory=_touchHistory - In the implementation block
@property (assign,nonatomic,__weak) SBFluidSwitcherViewController * switcherViewController;              //@synthesize switcherViewController=_switcherViewController - In the implementation block
@property (assign,nonatomic) BOOL installedAsSystemGesture;                                              //@synthesize installedAsSystemGesture=_installedAsSystemGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(BOOL)installedAsSystemGesture;
-(SBTouchHistory *)touchHistory;
-(void)setInstalledAsSystemGesture:(BOOL)arg1 ;
-(double)peakSpeed;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setSwitcherViewController:(SBFluidSwitcherViewController *)arg1 ;
-(SBFluidSwitcherViewController *)switcherViewController;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end
