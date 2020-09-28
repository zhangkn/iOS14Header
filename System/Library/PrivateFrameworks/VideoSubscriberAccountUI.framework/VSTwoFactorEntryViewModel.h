/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@protocol VSTwoFactorEntryViewModelDelegate;
@class VSTwoFactorEntryTextField, NSString, NSArray, VSExpressionEvaluator;

@interface VSTwoFactorEntryViewModel : VSCuratedViewModel {

	id<VSTwoFactorEntryViewModelDelegate> _delegate;
	VSTwoFactorEntryTextField* _twoFactorTextField;
	NSString* _headerText;
	NSArray* _buttons;
	NSString* _originalTwoFacorCode;
	VSExpressionEvaluator* _buttonExpressionEvaluator;

}

@property (nonatomic,copy) NSString * originalTwoFacorCode;                                      //@synthesize originalTwoFacorCode=_originalTwoFacorCode - In the implementation block
@property (nonatomic,retain) VSExpressionEvaluator * buttonExpressionEvaluator;                  //@synthesize buttonExpressionEvaluator=_buttonExpressionEvaluator - In the implementation block
@property (assign,nonatomic,__weak) id<VSTwoFactorEntryViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSTwoFactorEntryTextField * twoFactorTextField;                     //@synthesize twoFactorTextField=_twoFactorTextField - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                                //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                                    //@synthesize buttons=_buttons - In the implementation block
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(id)init;
-(void)setDelegate:(id<VSTwoFactorEntryViewModelDelegate>)arg1 ;
-(id<VSTwoFactorEntryViewModelDelegate>)delegate;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)configureWithRequest:(id)arg1 ;
-(VSTwoFactorEntryTextField *)twoFactorTextField;
-(void)setTwoFactorTextField:(VSTwoFactorEntryTextField *)arg1 ;
-(void)buttonAtIndexWasPressed:(unsigned long long)arg1 ;
-(void)setButtonExpressionEvaluator:(VSExpressionEvaluator *)arg1 ;
-(void)setOriginalTwoFacorCode:(NSString *)arg1 ;
-(NSString *)originalTwoFacorCode;
-(VSExpressionEvaluator *)buttonExpressionEvaluator;
@end
