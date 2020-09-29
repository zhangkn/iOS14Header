/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDataSourcePrefetching.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PUSearchResultsFooterViewDelegate.h>
#import <libobjc.A.dylib/PXSearchResultsLayoutDataSource.h>
#import <libobjc.A.dylib/PXSearchResultsSectionedDataSourceChangeObserver.h>
#import <UIKit/UISearchResultsUpdating.h>

@class UISearchController, PUSearchResultsFooterView, UITableView, NSIndexPath, PXSearchResultsViewModel, PXSearchLoggingUtility, PXSearchResultsOneUpViewModel, PXSearchResultsSectionedDataSourceManager, PXSearchAnalyticsSession, NSString;

@interface PUSearchResultsViewController : UIViewController <PXOneUpPresentationDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UITableViewDelegate, PUSearchResultsFooterViewDelegate, PXSearchResultsLayoutDataSource, PXSearchResultsSectionedDataSourceChangeObserver, UISearchResultsUpdating> {

	BOOL _hasLimitedScreenSize;
	BOOL _aggdSearchSucceeded;
	BOOL _shouldMergePendingChanges;
	UISearchController* _searchController;
	/*^block*/id _siriSearchCompletionHandler;
	unsigned long long _nextAnalyticsSessionBeginType;
	PUSearchResultsFooterView* _tableFooterView;
	UITableView* _searchResultsTableView;
	NSIndexPath* _selectedTopAssetsResultIndexPath;
	PXSearchResultsViewModel* _viewModel;
	PXSearchLoggingUtility* _suggestionsAggdLogHelper;
	PXSearchResultsOneUpViewModel* _oneUpViewModel;
	PXSearchResultsSectionedDataSourceManager* _dataSourceManager;
	PXSearchAnalyticsSession* _analyticsSession;
	/*^block*/id _ppt_searchTestCompletionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PUSearchResultsFooterView * tableFooterView;                                //@synthesize tableFooterView=_tableFooterView - In the implementation block
@property (nonatomic,retain) UITableView * searchResultsTableView;                                       //@synthesize searchResultsTableView=_searchResultsTableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedTopAssetsResultIndexPath;                             //@synthesize selectedTopAssetsResultIndexPath=_selectedTopAssetsResultIndexPath - In the implementation block
@property (assign,nonatomic) BOOL hasLimitedScreenSize;                                                  //@synthesize hasLimitedScreenSize=_hasLimitedScreenSize - In the implementation block
@property (nonatomic,retain) PXSearchResultsViewModel * viewModel;                                       //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) PXSearchLoggingUtility * suggestionsAggdLogHelper;                          //@synthesize suggestionsAggdLogHelper=_suggestionsAggdLogHelper - In the implementation block
@property (nonatomic,retain) PXSearchResultsOneUpViewModel * oneUpViewModel;                             //@synthesize oneUpViewModel=_oneUpViewModel - In the implementation block
@property (nonatomic,retain) PXSearchResultsSectionedDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL aggdSearchSucceeded;                                                   //@synthesize aggdSearchSucceeded=_aggdSearchSucceeded - In the implementation block
@property (assign,nonatomic) BOOL shouldMergePendingChanges;                                             //@synthesize shouldMergePendingChanges=_shouldMergePendingChanges - In the implementation block
@property (nonatomic,retain) PXSearchAnalyticsSession * analyticsSession;                                //@synthesize analyticsSession=_analyticsSession - In the implementation block
@property (nonatomic,copy) id ppt_searchTestCompletionHandler;                                           //@synthesize ppt_searchTestCompletionHandler=_ppt_searchTestCompletionHandler - In the implementation block
@property (assign,nonatomic,__weak) UISearchController * searchController;                               //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,copy) id siriSearchCompletionHandler;                                               //@synthesize siriSearchCompletionHandler=_siriSearchCompletionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long nextAnalyticsSessionBeginType;                           //@synthesize nextAnalyticsSessionBeginType=_nextAnalyticsSessionBeginType - In the implementation block
+(id)_albumViewControllerWithAlbumUUID:(id)arg1 ;
+(id)_searchResultsControllerWithSearchResults:(id)arg1 title:(id)arg2 headerViewTitle:(id)arg3 ;
+(id)preQuerySearchResultsLog;
+(id)_gridViewControllerSpec;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(PXSearchResultsSectionedDataSourceManager *)dataSourceManager;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UISearchController *)searchController;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(CGSize)imageSize;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)hasLimitedScreenSize;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSString *)debugDescription;
-(void)ppt_expandAllSections;
-(void)setNextAnalyticsSessionBeginType:(unsigned long long)arg1 ;
-(void)setSiriSearchCompletionHandler:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)updateTableFooterViewFrame;
-(void)didSelectTapToRadarButton:(id)arg1 ;
-(void)viewDidLoad;
-(void)topResultCell:(id)arg1 didSelectAssetIndex:(unsigned long long)arg2 inRect:(CGRect)arg3 withNumberOfImages:(unsigned long long)arg4 ;
-(double)topAssetThumbnailInterItemSpacing;
-(CGSize)topAssetThumbnailViewSize;
-(double)topAssetGridCustomWidthMargin;
-(id)_configureWordEmbeddingsCellInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(PXSearchResultsOneUpViewModel *)oneUpViewModel;
-(id)_configureWordEmbeddingsTitleCellInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_configureTopResultsCellInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_configureSuggestionsCellInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_configureSearchResultsCellInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_shouldApplyReadabilityInset;
-(id)_cellFromIdentifier:(id)arg1 inTableView:(id)arg2 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(PXSearchResultsViewModel *)viewModel;
-(id)_regionOfInterestForAsset:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)setOneUpViewModel:(PXSearchResultsOneUpViewModel *)arg1 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(NSIndexPath *)selectedTopAssetsResultIndexPath;
-(void)_showOneUpWithAssetCollection:(id)arg1 withInitialAsset:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_pushPersonDetailViewForPerson:(id)arg1 ;
-(void)_selectSearchResult:(id)arg1 ;
-(void)_presentAlertControllerFromButton:(id)arg1 ;
-(void)_pushDetailViewForPhotosWithUUIDs:(id)arg1 title:(id)arg2 ;
-(void)_pushGridForPhotosWithUUIDs:(id)arg1 title:(id)arg2 searchCategories:(unsigned long long)arg3 headerViewTitle:(id)arg4 ;
-(void)setAggdSearchSucceeded:(BOOL)arg1 ;
-(void)_pushGridForAlbumWithUUID:(id)arg1 ;
-(void)_pushViewForMemoryWithUUID:(id)arg1 ;
-(void)_pushViewForCollectionWithUUID:(id)arg1 collectionClass:(Class)arg2 ;
-(void)prepareDataSource;
-(void)searchResultsDataSourceHasPendingChanges:(id)arg1 shouldMergePendingChanges:(BOOL)arg2 ;
-(void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResult:(id)arg2 indexPath:(id)arg3 ;
-(void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 atIndexes:(id)arg3 ;
-(void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 topAssetsSectionExists:(BOOL)arg3 ;
-(unsigned long long)maximumNumberWordEmbeddingRows;
-(unsigned long long)maximumNumberOfThumbnailsPerRow;
-(void)_setupResultsTableView;
-(PXSearchLoggingUtility *)suggestionsAggdLogHelper;
-(void)viewWillLayoutSubviews;
-(void)_updateIndexingProgressViewVisibility:(BOOL)arg1 ;
-(void)wordEmbeddingTapped:(id)arg1 ;
-(id)_activeSearch;
-(void)didSelectSectionShowAllButton:(id)arg1 ;
-(void)_expandTableViewSection:(unsigned long long)arg1 ;
-(void)updateSearchResultsTable;
-(void)updateSearchResultsTableAtIndexPath:(id)arg1 ;
-(double)_marginWidthTotal;
-(void)updateSearchResultsTableTopAssetsSectionWithResult:(id)arg1 ;
-(void)shouldShowSearchResultsController:(BOOL)arg1 ;
-(void)_registerNotificationsForAnalytics;
-(void)_unregisterNotificationsForAnalytics;
-(void)_notifyAnalyticsSearchChanged;
-(void)_endAnalyticsSession;
-(void)_notifyAnalyticsInteractedWithCurrentSearch;
-(void)_notifyAnalyticsOneUpTopAssets;
-(void)_notifyAnalyticsSearchResult:(id)arg1 ;
-(double)_availableContentWidth;
-(double)_collectiveInterItemSpacing;
-(unsigned long long)maximumNumberSuggestionRows;
-(id)siriSearchCompletionHandler;
-(BOOL)_rowShouldAllowTapForIndexPath:(id)arg1 ;
-(void)_selectSuggestionAtIndexPath:(id)arg1 ;
-(id)_thumbnailAssetsForIndexPaths:(id)arg1 ;
-(unsigned long long)nextAnalyticsSessionBeginType;
-(void)setSearchResultsTableView:(UITableView *)arg1 ;
-(void)setSelectedTopAssetsResultIndexPath:(NSIndexPath *)arg1 ;
-(void)setHasLimitedScreenSize:(BOOL)arg1 ;
-(void)setSuggestionsAggdLogHelper:(PXSearchLoggingUtility *)arg1 ;
-(BOOL)aggdSearchSucceeded;
-(BOOL)shouldMergePendingChanges;
-(void)setShouldMergePendingChanges:(BOOL)arg1 ;
-(PXSearchAnalyticsSession *)analyticsSession;
-(void)setAnalyticsSession:(PXSearchAnalyticsSession *)arg1 ;
-(id)ppt_searchTestCompletionHandler;
-(void)setPpt_searchTestCompletionHandler:(id)arg1 ;
-(id)init;
-(BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2 ;
-(id)dateRangeFormatter;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(UITableView *)searchResultsTableView;
-(id)ppt_scrollView;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(void)setDataSourceManager:(PXSearchResultsSectionedDataSourceManager *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTableFooterView:(PUSearchResultsFooterView *)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2 ;
-(void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2 ;
-(CGSize)imageViewSize;
-(PUSearchResultsFooterView *)tableFooterView;
-(void)setViewModel:(PXSearchResultsViewModel *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
