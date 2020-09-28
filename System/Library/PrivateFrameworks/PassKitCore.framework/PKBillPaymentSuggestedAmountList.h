/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSString, NSDecimalNumber, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountList : NSObject {

	NSMutableDictionary* _suggestionsForCategory;
	NSMutableDictionary* _suggestionsForAmount;
	NSMutableDictionary* _suggestedAmountGapMessageForAmount;
	NSArray* _sortedSuggestedAmounts;
	NSString* _currencyCode;
	NSDecimalNumber* _minimumAmount;
	NSDecimalNumber* _remainingStatementAmount;
	NSDecimalNumber* _maximumAmount;
	NSDecimalNumber* _smalllestSuggestionAmountBelowRemainingStatementAmount;
	PKBillPaymentSuggestedAmount* _initialSuggestedAmount;

}

@property (nonatomic,copy,readonly) NSArray * sortedSuggestedAmounts;                                                      //@synthesize sortedSuggestedAmounts=_sortedSuggestedAmounts - In the implementation block
@property (nonatomic,copy,readonly) NSString * currencyCode;                                                               //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minimumAmount;                                                       //@synthesize minimumAmount=_minimumAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * remainingStatementAmount;                                            //@synthesize remainingStatementAmount=_remainingStatementAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maximumAmount;                                                       //@synthesize maximumAmount=_maximumAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * smalllestSuggestionAmountBelowRemainingStatementAmount;              //@synthesize smalllestSuggestionAmountBelowRemainingStatementAmount=_smalllestSuggestionAmountBelowRemainingStatementAmount - In the implementation block
@property (nonatomic,retain) PKBillPaymentSuggestedAmount * initialSuggestedAmount;                                        //@synthesize initialSuggestedAmount=_initialSuggestedAmount - In the implementation block
+(id)roundingHandler;
+(unsigned long long)maximumNumberSuggestions;
+(id)requiredSuggestedAmountCategories;
+(id)boundaryAngle;
-(NSString *)currencyCode;
-(NSDecimalNumber *)maximumAmount;
-(id)init;
-(void)_createMandatorySuggestions;
-(BOOL)canAddAmount:(id)arg1 ;
-(BOOL)_addSuggestedAmount:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canAddCategory:(unsigned long long)arg1 ;
-(BOOL)addSuggestedAmount:(id)arg1 ;
-(BOOL)canAddAmount:(id)arg1 andCategory:(unsigned long long)arg2 ;
-(void)_updateValues;
-(id)suggestedAmountWithCategory:(unsigned long long)arg1 ;
-(id)suggestedAmountBeforeSuggestedAmount:(id)arg1 ;
-(id)suggestedAmountAfterSuggestedAmount:(id)arg1 ;
-(id)maximumSuggestedAmount;
-(id)_boundaryAmount;
-(BOOL)_suggestedAmountIsRequiredCategory:(id)arg1 ;
-(BOOL)isValidWithUnableReason:(unsigned long long*)arg1 ;
-(void)_removeSuggestedAmount:(id)arg1 ;
-(id)_suggestedAmountThatIsNotRequired:(id)arg1 suggestedAmount2:(id)arg2 ;
-(id)_lastSuggestedAmountThatIsNotRequred;
-(id)_sortedAmounts;
-(id)minimumSuggestedAmount;
-(NSDecimalNumber *)remainingStatementAmount;
-(id)_sortedSuggestedAmounts;
-(void)addSuggestedAmountList:(id)arg1 ;
-(id)_smalllestSuggestionAmountBelowRemainingStatementAmount;
-(id)minimumSuggestedAmountFromCategories:(id)arg1 ;
-(NSArray *)sortedSuggestedAmounts;
-(id)initWithCurrencyCode:(id)arg1 remainingMinimumPayment:(id)arg2 remainingStatementBalance:(id)arg3 currentBalance:(id)arg4 ;
-(id)maximumSuggestedAmountFromCategories:(id)arg1 ;
-(BOOL)suggestedAmount:(id)arg1 isAdjoiningSuggestedAmount:(id)arg2 ;
-(id)suggestedAmountGapMessageForStartSuggestedAmount:(id)arg1 ;
-(PKBillPaymentSuggestedAmount *)initialSuggestedAmount;
-(void)addSuggestedAmountGapMessage:(id)arg1 forStartSuggestedAmount:(id)arg2 ;
-(void)attemptToPurgeInvalidSuggestedAmounts;
-(void)setInitialSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg1 ;
-(id)billPaymentSelectedSuggestedAmountDataEventForAmount:(id)arg1 accountIdentifier:(id)arg2 statementIdentifier:(id)arg3 ;
-(NSDecimalNumber *)smalllestSuggestionAmountBelowRemainingStatementAmount;
-(NSDecimalNumber *)minimumAmount;
-(id)description;
@end
