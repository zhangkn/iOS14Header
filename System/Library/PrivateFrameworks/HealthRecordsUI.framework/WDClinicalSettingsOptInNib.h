/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINib.h>

@protocol UITextViewDelegate;
@interface WDClinicalSettingsOptInNib : UINib {

	id<UITextViewDelegate> _textViewDelegate;

}

@property (assign,nonatomic,__weak) id<UITextViewDelegate> textViewDelegate;              //@synthesize textViewDelegate=_textViewDelegate - In the implementation block
-(id)instantiateWithOwner:(id)arg1 options:(id)arg2 ;
-(id<UITextViewDelegate>)textViewDelegate;
-(id)_footerTextViewString;
-(void)setTextViewDelegate:(id<UITextViewDelegate>)arg1 ;
@end
