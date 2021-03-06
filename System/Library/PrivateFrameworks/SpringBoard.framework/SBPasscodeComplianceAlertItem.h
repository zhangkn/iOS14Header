/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPasscodeComplianceAlertItem : SBAlertItem {

	NSString* _title;
	NSString* _message;
	NSString* _continueButtonTitle;
	NSString* _cancelButtonTitle;

}
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(id)initWithTitle:(id)arg1 message:(id)arg2 continueButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
@end

