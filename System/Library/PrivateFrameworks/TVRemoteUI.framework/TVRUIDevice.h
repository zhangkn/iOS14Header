/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVRUIDevice <NSObject>
@optional
-(BOOL)supportsSiri;
-(void)sendButtonEvent:(id)arg1;
-(id)currentText;
-(BOOL)supportsVolumeControl;
-(void)sendText:(id)arg1;
-(BOOL)captionsEnabled;
-(void)sendTouchEvent:(id)arg1;
-(void)sendReturnKey;
-(id)keyboardAttributes;
-(void)cancelAuthenitcationChallenge;
-(BOOL)supportsLaunchingApplications;
-(BOOL)supportsCaptionsToggle;
-(void)sendAuthenticationCode:(id)arg1;
-(void)sendTextInputPayload:(id)arg1;
-(id)deviceContextInformation;
-(void)startVoiceRecorder;
-(void)stopVoiceRecorder;

@required
-(BOOL)isConnecting;
-(void)connect;
-(id)identifier;
-(BOOL)isConnected;
-(id)model;
-(void)setDelegate:(id)arg1;
-(BOOL)isPaired;
-(BOOL)isEqualToDevice:(id)arg1;
-(id)delegate;
-(id)name;
-(BOOL)isLegacyAppleTV;
-(BOOL)supportsTouchEvents;
-(void)disconnectUserInitiated;
-(void)disconnectSystemInitiated;
-(BOOL)supportsDonatingIntents;
-(BOOL)hasIdentifier:(id)arg1;
-(void)disconnectWithTimeOut;

@end
