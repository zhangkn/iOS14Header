/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFComposeStyleSelectorViewControllerDelegate <NSObject>
@optional
-(void)composeStyleSelectorDidPresentColorPicker:(id)arg1;
-(id)presentingViewControllerForComposeStyleSelector:(id)arg1;
-(void)composeStyleSelectorDidDismissFontPicker:(id)arg1;

@required
-(void)composeStyleSelector:(id)arg1 didChangeFontSize:(double)arg2;
-(void)composeStyleSelector:(id)arg1 didChangeTextColor:(id)arg2;
-(void)composeStyleSelector:(id)arg1 didChangeFont:(id)arg2;
-(void)composeStyleSelector:(id)arg1 didSelectStyle:(id)arg2;
-(void)composeStyleSelectorDidCancel:(id)arg1;

@end
