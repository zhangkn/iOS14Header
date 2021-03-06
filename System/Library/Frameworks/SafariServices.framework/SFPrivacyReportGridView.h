/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/SFPrivacyReportGridItemDelegate.h>

@protocol SFPrivacyReportGridViewDelegate;
@class UICollectionView, UICollectionViewFlowLayout, NSMutableArray, NSArray, NSString;

@interface SFPrivacyReportGridView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SFPrivacyReportGridItemDelegate> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSMutableArray* _cachedRowInfo;
	double _previousCollectionViewWidth;
	BOOL _isAccessibilitySize;
	NSArray* _itemViews;
	id<SFPrivacyReportGridViewDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * itemViews;                                                //@synthesize itemViews=_itemViews - In the implementation block
@property (assign,nonatomic,__weak) id<SFPrivacyReportGridViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double interItemSpacing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)layoutMarginsDidChange;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(NSArray *)itemViews;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)updateInterItemSpacing;
-(void)didUpdateInterItemSpacing:(double)arg1 ;
-(BOOL)itemViewCanUseCompactWidth:(id)arg1 ;
-(unsigned long long)_gridPositionForItemAtIndexPath:(id)arg1 ;
-(void)_rebuildRowLayoutInfoIfNeeded;
-(void)setItemViews:(NSArray *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)itemDidChangeContentSize:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SFPrivacyReportGridViewDelegate>)arg1 ;
-(id<SFPrivacyReportGridViewDelegate>)delegate;
-(double)interItemSpacing;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

