/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUPhotosGridViewController.h>
#import <libobjc.A.dylib/PUSectionedGridLayoutDelegate.h>
#import <libobjc.A.dylib/PXImportHistorySectionHeaderViewDelegate.h>

@class PHFetchResult, PLDateRangeFormatter, NSNumber, PXImportHistorySectionHeaderView, NSString;

@interface PUImportHistoryGridViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate, PXImportHistorySectionHeaderViewDelegate> {

	PHFetchResult* _importSessions;
	PLDateRangeFormatter* _dateFormatter;
	double _referenceWidth;
	NSNumber* _cachedHeaderHeight;
	PXImportHistorySectionHeaderView* _referenceHeaderView;

}

@property (nonatomic,retain) PHFetchResult * importSessions;                                      //@synthesize importSessions=_importSessions - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * dateFormatter;                              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign,nonatomic) double referenceWidth;                                               //@synthesize referenceWidth=_referenceWidth - In the implementation block
@property (nonatomic,retain) NSNumber * cachedHeaderHeight;                                       //@synthesize cachedHeaderHeight=_cachedHeaderHeight - In the implementation block
@property (nonatomic,retain) PXImportHistorySectionHeaderView * referenceHeaderView;              //@synthesize referenceHeaderView=_referenceHeaderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PLDateRangeFormatter *)dateFormatter;
-(NSNumber *)cachedHeaderHeight;
-(void)setCachedHeaderHeight:(NSNumber *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)headerViewDidPressActionButton:(id)arg1 ;
-(PHFetchResult *)importSessions;
-(BOOL)initiallyScrolledToBottom;
-(BOOL)shouldPerformAutomaticContentOffsetAdjustment;
-(void)_importHistoryContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setImportSessions:(PHFetchResult *)arg1 ;
-(PXImportHistorySectionHeaderView *)referenceHeaderView;
-(void)setReferenceHeaderView:(PXImportHistorySectionHeaderView *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)init;
-(double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2 ;
-(double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2 ;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(double)referenceWidth;
-(id)initWithSpec:(id)arg1 ;
-(id)newGridLayout;
-(void)_configureSectionHeaderView:(id)arg1 section:(long long)arg2 ;
-(void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(BOOL)arg4 ;
-(BOOL)allowSlideshowButton;
-(void)setReferenceWidth:(double)arg1 ;
-(long long)oneUpPresentationOrigin;
@end
