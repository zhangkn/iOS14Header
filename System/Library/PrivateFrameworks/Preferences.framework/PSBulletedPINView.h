/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PINView.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@class PSPasscodeField, NSString;

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)layoutSubviews;
-(void)setStringValue:(id)arg1 ;
-(id)stringValue;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numberOfFields:(int)arg2 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
@end

