/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class UIButton, CNRepeatingGradientSeparatorView, NSString;

@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate> {

	UIButton* _labelButton;
	CNRepeatingGradientSeparatorView* _vseparator;

}

@property (nonatomic,retain) CNRepeatingGradientSeparatorView * vseparator;              //@synthesize vseparator=_vseparator - In the implementation block
@property (nonatomic,readonly) UIButton * labelButton;                                   //@synthesize labelButton=_labelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsChevron;
+(BOOL)wantsStandardConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)labelView;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)dealloc;
-(id)variableConstraints;
-(id)valueString;
-(double)minCellHeight;
-(id)constantConstraints;
-(CNRepeatingGradientSeparatorView *)vseparator;
-(void)picker:(id)arg1 didDeleteItem:(id)arg2 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)labelButtonClicked:(id)arg1 ;
-(double)leftValueMargin;
-(double)effectiveLabelWidth;
-(void)setVseparatorHidden:(BOOL)arg1 ;
-(void)setVseparator:(CNRepeatingGradientSeparatorView *)arg1 ;
-(void)regainFocus;
-(UIButton *)labelButton;
@end
