/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>

@protocol SBHardwareButtonInteractionSBHardwareButtonGestureParametersProvider;
@class SBHardwareButtonActionList, SBProximitySensorManager, SBHardwareButtonService, SBHardwareButtonGestureParameters, NSString;

@interface SBHomeHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {

	BOOL _screenWasDimOnMenuDown;
	BOOL _dontUnlockOnButtonUp;
	long long _homeButtonType;
	SBHardwareButtonActionList* _buttonUpActions;
	SBHardwareButtonActionList* _buttonUpPostActions;
	unsigned long long _menuButtonHoldStartTime;
	double _menuButtonHoldStartAbsoluteTime;
	SBProximitySensorManager* _proximitySensorManager;
	SBHardwareButtonService* _hardwareButtonService;
	id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _accessibilityButtonInteraction;
	id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _siriButtonInteraction;
	SBHardwareButtonGestureParameters* _accessibilityGestureParameters;
	SBHardwareButtonGestureParameters* _siriGestureParameters;
	BOOL _buttonDown;
	double _currentLongPressDuration;

}

@property (assign,getter=isButtonDown,nonatomic) BOOL buttonDown;              //@synthesize buttonDown=_buttonDown - In the implementation block
@property (assign,nonatomic) double currentLongPressDuration;                  //@synthesize currentLongPressDuration=_currentLongPressDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isButtonDown;
-(void)performWhenMenuButtonIsUpUsingBlock:(/*^block*/id)arg1 ;
-(void)performLongPressActions;
-(void)setButtonDown:(BOOL)arg1 ;
-(void)_logMenuButtonHoldTime;
-(BOOL)_performButtonPreflightActions;
-(void)performTriplePressUpActions;
-(void)performInitialButtonDownActions;
-(BOOL)_shouldIgnorePressesDueToProxOrIdle:(id*)arg1 ;
-(void)performFinalButtonUpActions;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(/*^block*/id)arg1 ;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(void)performDoubleTapUpActions;
-(void)configureForwardingToLockButtonActions:(id)arg1 ;
-(void)performSinglePressUpActionsWithSourceType:(unsigned long long)arg1 ;
-(void)performDoublePressDownActions;
-(id)hardwareButtonGestureParameters;
-(void)setCurrentLongPressDuration:(double)arg1 ;
-(void)performSinglePressUpActions;
-(void)performLongPressCancelledActions;
-(double)currentLongPressDuration;
-(id)initWitHomeButtonType:(long long)arg1 ;
-(void)performInitialButtonUpActions;
@end
