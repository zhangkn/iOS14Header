/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/DevicePINSetupController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class NSString;

@interface BFFFinishSetupPINVerificationViewController : DevicePINSetupController <DevicePINControllerDelegate> {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)loadView;
-(id)stringsBundle;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
@end

