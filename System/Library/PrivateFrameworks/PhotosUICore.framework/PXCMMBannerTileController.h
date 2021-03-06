/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:05 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@protocol PXAssetImportStatusManager, PXCMMBannerTileControllerDelegate;
@class PXCMMViewModel, NSArray, PXMomentShareStatusPresentation, PXCMMPosterBannerView, PXCMMPeopleSuggestionsMediaProvider, PXCMMPeopleSuggestionsDataSourceManager, NSString, UIView;

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXReusableObject, PXUIViewBasicTile> {

	unsigned long long _activityType;
	unsigned long long _sourceType;
	PXCMMViewModel* _viewModel;
	id<PXAssetImportStatusManager> _importStatusManager;
	NSArray* _localizedNames;
	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	id<PXCMMBannerTileControllerDelegate> _delegate;
	PXCMMPosterBannerView* _bannerView;
	PXCMMPeopleSuggestionsMediaProvider* _peopleSuggestionsMediaProvider;
	PXCMMPeopleSuggestionsDataSourceManager* _peopleSuggestionsDataSourceManager;

}

@property (nonatomic,retain) PXCMMPosterBannerView * bannerView;                                                        //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) PXCMMPeopleSuggestionsMediaProvider * peopleSuggestionsMediaProvider;                      //@synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider - In the implementation block
@property (nonatomic,retain) PXCMMPeopleSuggestionsDataSourceManager * peopleSuggestionsDataSourceManager;              //@synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMBannerTileControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(id)new;
-(void)_updateBannerActionButton;
-(void)setBannerView:(PXCMMPosterBannerView *)arg1 ;
-(void)prepareForReuse;
-(UIView *)view;
-(void)_updateCounts;
-(void)setPeopleSuggestionsDataSourceManager:(PXCMMPeopleSuggestionsDataSourceManager *)arg1 ;
-(id)init;
-(void)setDelegate:(id<PXCMMBannerTileControllerDelegate>)arg1 ;
-(PXCMMPeopleSuggestionsDataSourceManager *)peopleSuggestionsDataSourceManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)becomeReusable;
-(id<PXCMMBannerTileControllerDelegate>)delegate;
-(PXCMMPeopleSuggestionsMediaProvider *)peopleSuggestionsMediaProvider;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)_updateLoadingPeopleSuggestions;
-(id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 momentShareStatusPresentation:(id)arg4 importStatusManager:(id)arg5 ;
-(void)setPeopleSuggestionDataSourceManager:(id)arg1 mediaProvider:(id)arg2 ;
-(void)_configureBannerViewActionButtonWithTitle:(id)arg1 ;
-(void)_updatePeopleSuggestionNames;
-(PXCMMPosterBannerView *)bannerView;
-(void)_updateContainsUnverifierPersons;
-(void)_updateLocalizedNamesByViewModel;
-(void)setPeopleSuggestionsMediaProvider:(PXCMMPeopleSuggestionsMediaProvider *)arg1 ;
@end

