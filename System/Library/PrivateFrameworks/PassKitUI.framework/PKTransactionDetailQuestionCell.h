/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol PKTransactionDetailQuestionCellDelegate;
@class UILabel, PKContinuousButton, UIImageView, PKPaymentTransaction, NSString;

@interface PKTransactionDetailQuestionCell : UITableViewCell {

	UILabel* _title;
	UILabel* _message;
	PKContinuousButton* _leadingButton;
	PKContinuousButton* _trailingButton;
	UIImageView* _imageView;
	BOOL _isTemplateLayout;
	PKPaymentTransaction* _transaction;
	NSString* _submittingAnswer;
	BOOL _smallDevice;
	id<PKTransactionDetailQuestionCellDelegate> _questionDelegate;

}

@property (assign,nonatomic,__weak) id<PKTransactionDetailQuestionCellDelegate> questionDelegate;              //@synthesize questionDelegate=_questionDelegate - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)_leadingButtonTapped:(id)arg1 ;
-(void)_trailingButtonTapped:(id)arg1 ;
-(void)_enableButtons:(BOOL)arg1 ;
-(void)setTransaction:(id)arg1 submittingAnswer:(id)arg2 ;
-(id<PKTransactionDetailQuestionCellDelegate>)questionDelegate;
-(void)setQuestionDelegate:(id<PKTransactionDetailQuestionCellDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
@end

