/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPNumberPad.h>

@protocol TPSimpleNumberPadDelegate;
@class UIButton;

@interface TPSimpleNumberPad : TPNumberPad {

	UIButton* _deleteButton;
	BOOL _showsDeleteButton;
	id<TPSimpleNumberPadDelegate> _delegate;

}

@property (assign) id<TPSimpleNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteButton;                    //@synthesize showsDeleteButton=_showsDeleteButton - In the implementation block
+(id)_numberPadCharacters;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateDeleteButton;
-(id)initWithButtons:(id)arg1 ;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)setDelegate:(id<TPSimpleNumberPadDelegate>)arg1 ;
-(id<TPSimpleNumberPadDelegate>)delegate;
-(BOOL)showsDeleteButton;
-(Class)numberPadButtonClass;
-(void)setNumberButtonsEnabled:(BOOL)arg1 ;
-(void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2 ;
@end

