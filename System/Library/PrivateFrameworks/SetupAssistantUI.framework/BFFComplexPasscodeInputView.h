/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFPasscodeInputView.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface BFFComplexPasscodeInputView : BFFPasscodeInputView <UITextFieldDelegate> {

	UITextField* _passcodeField;

}

@property (nonatomic,retain) UITextField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layout;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setPasscodeField:(UITextField *)arg1 ;
-(UITextField *)passcodeField;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)passcode;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setPasscode:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numericOnly:(BOOL)arg2 ;
-(id)passcodeDisplayView;
@end
