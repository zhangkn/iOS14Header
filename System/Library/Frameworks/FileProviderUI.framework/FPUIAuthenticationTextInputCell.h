/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIStackView, UILabel, UITextField;

@interface FPUIAuthenticationTextInputCell : UITableViewCell {

	UIStackView* _stackView;
	UILabel* _label;
	UITextField* _textField;

}

@property (nonatomic,__weak,readonly) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)label;
-(UITextField *)textField;
-(BOOL)_isLargeTextTraitCollection:(id)arg1 ;
@end
