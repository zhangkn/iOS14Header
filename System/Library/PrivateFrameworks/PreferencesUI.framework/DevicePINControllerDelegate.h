/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DevicePINControllerDelegate <NSObject>
@optional
-(void)devicePINControllerDidDismissPINPane:(id)arg1;
-(void)didAcceptSetPIN;
-(void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
-(void)devicePINController:(id)arg1 didFailToChangePinWithError:(id)arg2;
-(void)didAcceptChangedPIN;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
-(void)willAcceptEnteredPIN;
-(void)didAcceptEnteredPIN;
-(void)didAcceptRemovePIN;
-(void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)willCancelEnteringPIN;
-(void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)didAcceptEnteredPIN:(id)arg1;
-(void)didCancelEnteringPIN;

@end

