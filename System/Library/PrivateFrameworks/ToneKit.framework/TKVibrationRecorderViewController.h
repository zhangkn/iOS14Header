/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class TKVibrationRecorderContentViewController, NSString;

@interface TKVibrationRecorderViewController : UINavigationController <PSStateRestoration> {

	TKVibrationRecorderContentViewController* _vibrationRecorderContentViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate; 
-(void)dealloc;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)_canShowWhileLocked;
-(id)initWithVibratorController:(id)arg1 ;
-(void)setVibrationRecorderViewControllerDelegate:(id<TKVibrationRecorderViewControllerDelegate>)arg1 ;
-(id<TKVibrationRecorderViewControllerDelegate>)vibrationRecorderViewControllerDelegate;
@end

