/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, UIColor;

@interface UIKBAutofillController : NSObject {

	long long _delegateNeedsAutofillMode;
	BOOL _shouldSaveAutofill;
	NSMutableDictionary* _autofillGroup;
	NSMutableDictionary* _fallbackAutofillGroup;
	BOOL _didOptOutOfAutofillSignup;
	UIColor* _textFieldOrigColor;

}

@property (nonatomic,copy) UIColor * textFieldOrigColor;                                //@synthesize textFieldOrigColor=_textFieldOrigColor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * autofillGroup;              //@synthesize autofillGroup=_autofillGroup - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * fallbackAutofillGroup;                 //@synthesize fallbackAutofillGroup=_fallbackAutofillGroup - In the implementation block
@property (assign,nonatomic) long long delegateNeedsAutofillMode;                       //@synthesize delegateNeedsAutofillMode=_delegateNeedsAutofillMode - In the implementation block
@property (assign,nonatomic) BOOL shouldSaveAutofill;                                   //@synthesize shouldSaveAutofill=_shouldSaveAutofill - In the implementation block
+(unsigned long long)translateToTextInputAutofillMode:(long long)arg1 ;
-(void)clearAutofillGroup;
-(long long)contactAutofillModeWithAutofillGroup:(id)arg1 responders:(id)arg2 ;
-(id)accessibilitySignupKeywordList;
-(id)textSignalsForResponder:(id)arg1 ;
-(id)searchKeywordSet;
-(void)addTemporaryTextColorToTextField:(id)arg1 ;
-(id)phoneKeywordSet;
-(void)setDelegateNeedsAutofillMode:(long long)arg1 ;
-(UIColor *)textFieldOrigColor;
-(void)trackResponderForAutofillIfNeeded:(id)arg1 ;
-(id)emailKeywordSet;
-(id)autofillContextForInputDelegate:(id)arg1 ;
-(void)setFallbackAutofillGroup:(NSMutableDictionary *)arg1 ;
-(id)signupKeywordList;
-(void)clearASPInPasswordFields;
-(void)setTextFieldOrigColor:(UIColor *)arg1 ;
-(void)enumeratePasswordFieldsUsingBlock:(/*^block*/id)arg1 ;
-(long long)containsIndicationInText:(id)arg1 withAccessibilityHints:(BOOL)arg2 ;
-(long long)signUpSignalFromNavBarItem:(id)arg1 ;
-(BOOL)shouldLoadASPForResponder:(id)arg1 ;
-(void)showASPInTextField:(id)arg1 isRightToLeft:(BOOL)arg2 ;
-(NSMutableDictionary *)fallbackAutofillGroup;
-(NSMutableDictionary *)autofillGroup;
-(id)init;
-(long long)signUpSignalFromViewControllerHierarchy:(id)arg1 ;
-(void)_setAutofillGroup:(id)arg1 ;
-(BOOL)preferFallbackAutofillGroup;
-(long long)signUpSignalFromButton:(id)arg1 ;
-(long long)needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2 keyboardState:(id)arg3 ;
-(id)accessibilityLoginKeywordList;
-(BOOL)signupHintForUsername:(id)arg1 password:(id)arg2 responder:(id)arg3 ;
-(id)processLocalizedString:(id)arg1 ;
-(void)handleAutofillCredentialSaveIfNeeded:(id)arg1 fromASP:(BOOL)arg2 ;
-(void)setShouldSaveAutofill:(BOOL)arg1 ;
-(BOOL)containsUsernamePasswordPairsInAutofillGroup:(id)arg1 ;
-(long long)delegateNeedsAutofillMode;
-(BOOL)shouldSaveAutofill;
-(void)didOptOutOfAutofillSignup;
-(void)updateAutofillContextForInputDelegate:(id)arg1 ;
-(void)optOutASPInTextField;
-(long long)_needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2 ;
-(void)removeTemporaryTextColorFromTextField:(id)arg1 ;
-(long long)doTraits:(id)arg1 matchTextContentType:(id)arg2 ;
-(void)handleWebviewCredentialsSaveForResponder:(id)arg1 WebsiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 passwordIsAutoGenerated:(BOOL)arg5 ;
-(id)addressKeywordSet;
-(void)_clearASPInTextField:(id)arg1 ;
-(void)clearASPVisualEffectsInTextField:(id)arg1 ;
-(BOOL)_prohibitAutofill:(id)arg1 needASPKeyboard:(BOOL)arg2 ;
-(void)clearFallbackAutofillGroup;
-(id)contactAutoFillKeywordsForKey:(id)arg1 value:(id)arg2 localizedKeywords:(id)arg3 ;
-(id)loginKeywordList;
@end
