/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>
#import <UIKit/UIKeyInput.h>

@class UIColor, UIFont, NSMutableArray, NSMutableString, SKUIViewElement, NSString, UITextInputPasswordRules;

@interface SKUIPINInputControl : UIControl <SKUIViewElementView, UIKeyInput> {

	UIColor* _boxBackgroundColor;
	UIColor* _boxBorderColor;
	UIFont* _font;
	long long _keyboardType;
	NSMutableArray* _labels;
	BOOL _needsLabelReload;
	long long _numberOfCharacters;
	BOOL _secureTextEntry;
	NSMutableString* _text;
	UIColor* _textColor;
	SKUIViewElement* _viewElement;

}

@property (nonatomic,copy) UIColor * boxBackgroundColor;                                 //@synthesize boxBackgroundColor=_boxBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * boxBorderColor;                                     //@synthesize boxBorderColor=_boxBorderColor - In the implementation block
@property (nonatomic,copy) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long numberOfCharacters;                               //@synthesize numberOfCharacters=_numberOfCharacters - In the implementation block
@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(double)_defaultBoxSizeForFont:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(long long)keyboardType;
-(BOOL)becomeFirstResponder;
-(void)deleteBackward;
-(BOOL)resignFirstResponder;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)spellCheckingType;
-(BOOL)canBecomeFirstResponder;
-(void)setTextColor:(UIColor *)arg1 ;
-(BOOL)hasText;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)autocorrectionType;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(UIColor *)textColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)setSpellCheckingType:(long long)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)setFont:(UIFont *)arg1 ;
-(long long)numberOfCharacters;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_reloadLabelSubviews;
-(void)_setNeedsReloadLayout;
-(void)setBoxBackgroundColor:(UIColor *)arg1 ;
-(void)setBoxBorderColor:(UIColor *)arg1 ;
-(void)setNumberOfCharacters:(long long)arg1 ;
-(void)_sendValueChangeEvents;
-(UIColor *)boxBackgroundColor;
-(UIColor *)boxBorderColor;
@end
