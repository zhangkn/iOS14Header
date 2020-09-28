/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PKAccountServiceObserver.h>

@class PKTransactionSource, PKAccount, PKCreditAccountStatement, PKBalanceSummaryFetcher, PKCreditAccountSummary, PKPaymentWebService, PKDashboardTransactionFetcher, PKDashboardBalancePresenter, PKDashboardBalanceSummaryItemPresenter, PKDashboardBalanceItem, PKDashboardBalanceSummaryItem, NSArray, PKBalanceSummary, NSDictionary, NSDateFormatter, PKDashboardTitleHeaderView, PKDashboardFooterTextView, NSString;

@interface PKCreditBalanceDetailsViewController : UICollectionViewController <PKAccountServiceObserver> {

	PKTransactionSource* _transactionSource;
	PKAccount* _account;
	unsigned long long _feature;
	PKCreditAccountStatement* _statement;
	PKCreditAccountStatement* _previousStatement;
	PKBalanceSummaryFetcher* _fetcher;
	PKCreditAccountSummary* _accountSummary;
	PKPaymentWebService* _webService;
	PKDashboardTransactionFetcher* _transactionFetcher;
	PKDashboardBalancePresenter* _balancePresenter;
	PKDashboardBalanceSummaryItemPresenter* _balanceSummaryItemPresenter;
	PKDashboardBalanceItem* _balanceItem;
	PKDashboardBalanceSummaryItem* _lastStatementSummaryItem;
	PKDashboardBalanceSummaryItem* _currentSpendingSummaryItem;
	PKDashboardBalanceSummaryItem* _interestSummaryItem;
	PKDashboardBalanceSummaryItem* _paymentsAndCreditsSummaryItem;
	PKDashboardBalanceSummaryItem* _paymentsSummaryItem;
	PKDashboardBalanceSummaryItem* _creditsSummaryItem;
	PKDashboardBalanceSummaryItem* _dailyCashSummaryItem;
	PKDashboardBalanceSummaryItem* _installmentBalanceSummaryItem;
	PKDashboardBalanceSummaryItem* _creditLimitSummaryItem;
	PKDashboardBalanceSummaryItem* _totalBalanceSummaryItem;
	PKDashboardBalanceSummaryItem* _availableCreditSummaryItem;
	NSArray* _totalBalanceItems;
	NSArray* _usageItems;
	PKDashboardBalanceSummaryItem* _statementDownloadSummaryItem;
	PKDashboardBalanceSummaryItem* _exportTransactionDataSummaryItem;
	NSArray* _buttonItems;
	PKBalanceSummary* _balanceSummary;
	NSArray* _statements;
	NSDictionary* _statementsByYear;
	NSArray* _sortedYears;
	NSDateFormatter* _monthYearFormatter;
	PKDashboardTitleHeaderView* _sampleHeaderView;
	PKDashboardFooterTextView* _sampleFooterView;
	NSArray* _sectionMap;
	unsigned long long _numberOfStaticSections;
	long long _style;
	NSString* _pageTagForAnalyticsReporting;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)_reloadData;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(BOOL)_shouldInset;
-(id)initWithStyle:(long long)arg1 transactionSource:(id)arg2 webService:(id)arg3 account:(id)arg4 statement:(id)arg5 previousStatements:(id)arg6 ;
-(void)showStatement:(id)arg1 style:(long long)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)_sectionForIndex:(unsigned long long)arg1 ;
-(id)_createSummaryItemOfType:(unsigned long long)arg1 ;
-(id)_summaryItemForIndexPath:(id)arg1 ;
-(BOOL)_hasHeaderForSectionIndex:(unsigned long long)arg1 ;
-(void)_configureHeaderView:(id)arg1 inSectionIndex:(unsigned long long)arg2 ;
-(BOOL)_hasFooterForSectionIndex:(unsigned long long)arg1 ;
-(void)_configureFooterView:(id)arg1 inSectionIndex:(unsigned long long)arg2 ;
-(void)_updateStatements;
-(void)_sortStatementsForPresentation;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)statementsChangedForAccountIdentifier:(id)arg1 ;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
@end
