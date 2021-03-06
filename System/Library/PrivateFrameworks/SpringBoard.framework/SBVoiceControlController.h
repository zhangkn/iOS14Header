/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBVoiceControlTransientOverlayViewControllerDelegate.h>

@protocol SiriAssertion;
@class NSArray, SBVoiceControlTransientOverlayViewController, SiriLongPressButtonSource, NSString;

@interface SBVoiceControlController : NSObject <SBVoiceControlTransientOverlayViewControllerDelegate> {

	BOOL _delayedAssistantActivationPending;
	BOOL _headsetDownDelayedActionPerformed;
	NSArray* _nextRecognitionAudioInputPaths;
	SBVoiceControlTransientOverlayViewController* _transientOverlayViewController;
	SiriLongPressButtonSource* _siriHeadsetDeviceSource;
	id<SiriAssertion> _siriPreheatAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)voiceControlTransientOverlayViewControllerDidDisappear:(id)arg1 ;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)configureVoiceControl;
-(void)_prepareDelayedHeadsetAction;
-(BOOL)handleHomeButtonHeld;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(BOOL)handleHeadsetButtonUpNotInCall;
-(BOOL)_shouldEnterVoiceControl;
-(void)_performDelayedHeadsetActionForAssistant;
-(BOOL)handleHeadsetButtonUp;
-(void)handleHeadsetButtonDownWithClickCount:(unsigned long long)arg1 ;
-(void)_performDelayedHeadsetActionForVoiceControl;
-(id)init;
-(void)_cancelDelayedHeadsetAction;
-(id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)arg1 ;
-(void)_updateNextRecognitionAudioInputPaths:(id)arg1 ;
-(id)siriBluetoothDeviceSource:(id)arg1 ;
-(void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)arg1 ;
-(void)headsetAvailabilityChanged;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(void)dismissTransientOverlay;
-(void)_assistantActivationSettingsDidChange:(id)arg1 ;
-(BOOL)isVisible;
@end

