/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXCuratedLibraryMutableAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate;
@class NSPredicate, NSDictionary, PXUpdater, PXCuratedLibraryAssetsDataSourceManagerConfiguration, PXAssetsDataSource, PXVisualPositionsChangeDetails, PXAssetsDataSourceManager, PXPhotoKitAssetsDataSourceManager, NSString;

@interface PXCuratedLibraryAssetsDataSourceManager : PXAssetsDataSourceManager <PXCuratedLibraryMutableAssetsDataSourceManager, PXAssetsDataSourceManagerObserver> {

	SCD_Struct_PX146 _delegateRespondsTo;
	NSDictionary* _dataSourceManagerByZoomLevel;
	BOOL _isForcingSections;
	BOOL _canLoadData;
	BOOL _wantsCuration;
	id<PXCuratedLibraryAssetsDataSourceManagerDelegate> _delegate;
	long long _zoomLevel;
	NSPredicate* _allPhotosFilterPredicate;
	PXUpdater* _updater;
	PXCuratedLibraryAssetsDataSourceManagerConfiguration* _configuration;
	long long _zoomLevelForCurrentDataSourceManager;
	PXAssetsDataSource* _currentDataSource;
	long long _currentDataSourceZoomLevel;
	PXVisualPositionsChangeDetails* _lastVisualPositionsChangeDetails;
	long long _lastTransitionType;
	unsigned long long _lastVisualPositionsChangeFromDataSourceIdentifier;
	unsigned long long _lastVisualPositionsChangeToDataSourceIdentifier;

}

@property (nonatomic,readonly) PXUpdater * updater;                                                                     //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManagerConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL canLoadData;                                                                          //@synthesize canLoadData=_canLoadData - In the implementation block
@property (assign,nonatomic) long long zoomLevelForCurrentDataSourceManager;                                            //@synthesize zoomLevelForCurrentDataSourceManager=_zoomLevelForCurrentDataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL wantsCuration;                                                                        //@synthesize wantsCuration=_wantsCuration - In the implementation block
@property (nonatomic,retain) PXAssetsDataSource * currentDataSource;                                                    //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * currentAssetsDataSourceManager; 
@property (assign,nonatomic) long long currentDataSourceZoomLevel;                                                      //@synthesize currentDataSourceZoomLevel=_currentDataSourceZoomLevel - In the implementation block
@property (nonatomic,retain) PXVisualPositionsChangeDetails * lastVisualPositionsChangeDetails;                         //@synthesize lastVisualPositionsChangeDetails=_lastVisualPositionsChangeDetails - In the implementation block
@property (assign,nonatomic) long long lastTransitionType;                                                              //@synthesize lastTransitionType=_lastTransitionType - In the implementation block
@property (assign,nonatomic) unsigned long long lastVisualPositionsChangeFromDataSourceIdentifier;                      //@synthesize lastVisualPositionsChangeFromDataSourceIdentifier=_lastVisualPositionsChangeFromDataSourceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long lastVisualPositionsChangeToDataSourceIdentifier;                        //@synthesize lastVisualPositionsChangeToDataSourceIdentifier=_lastVisualPositionsChangeToDataSourceIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<PXCuratedLibraryAssetsDataSourceManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long zoomLevel;                                                                     //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) NSPredicate * allPhotosFilterPredicate;                                                  //@synthesize allPhotosFilterPredicate=_allPhotosFilterPredicate - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * currentPhotoKitAssetsDataSourceManager; 
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
@property (nonatomic,retain) NSPredicate * filterPredicate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setWantsCuration:(BOOL)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(void)loadIfNeeded;
-(void)setNeedsUpdate;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(BOOL)wantsCuration;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(void)setCurrentDataSource:(PXAssetsDataSource *)arg1 ;
-(long long)currentDataSourceZoomLevel;
-(void)didPerformChanges;
-(void)setCanLoadData:(BOOL)arg1 ;
-(void)setLastVisualPositionsChangeToDataSourceIdentifier:(unsigned long long)arg1 ;
-(void)_updateDataSourceManagers;
-(void)setLastVisualPositionsChangeFromDataSourceIdentifier:(unsigned long long)arg1 ;
-(BOOL)canLoadData;
-(void)setCurrentDataSourceZoomLevel:(long long)arg1 ;
-(PXAssetsDataSourceManager *)currentAssetsDataSourceManager;
-(void)_invalidateCuration;
-(id)visualPositionsChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(void)resumeChangeDelivery:(id)arg1 ;
-(long long)lastTransitionType;
-(PXUpdater *)updater;
-(long long)transitionTypeFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(id)firstAssetCollectionReferenceInDataSourceForZoomLevel:(long long)arg1 withParent:(id)arg2 ;
-(unsigned long long)lastVisualPositionsChangeToDataSourceIdentifier;
-(PXAssetsDataSource *)currentDataSource;
-(void)_updateDataSource;
-(long long)zoomLevel;
-(id)init;
-(void)setZoomLevelForCurrentDataSourceManager:(long long)arg1 ;
-(unsigned long long)libraryStateForZoomLevel:(long long)arg1 ;
-(id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2 assetCollectionReferenceWithSameKeyAssetAsParent:(id*)arg3 ;
-(id)_photosDataSourceForZoomLevel:(long long)arg1 ;
-(PXVisualPositionsChangeDetails *)lastVisualPositionsChangeDetails;
-(void)setDelegate:(id<PXCuratedLibraryAssetsDataSourceManagerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)dataSourceManagerForZoomLevel:(long long)arg1 ;
-(id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2 ;
-(BOOL)forceAllPhotosAccurateIfNeeded;
-(void)setLastVisualPositionsChangeDetails:(PXVisualPositionsChangeDetails *)arg1 ;
-(void)setLastTransitionType:(long long)arg1 ;
-(void)_invalidateDataSourceManagers;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updatePropertiesDerivedFromZoomLevel;
-(NSPredicate *)allPhotosFilterPredicate;
-(id<PXCuratedLibraryAssetsDataSourceManagerDelegate>)delegate;
-(void)setZoomLevel:(long long)arg1 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 inZoomLevel:(long long)arg2 ;
-(void)_updateCuration;
-(void)_invalidateDataSource;
-(unsigned long long)lastVisualPositionsChangeFromDataSourceIdentifier;
-(PXCuratedLibraryAssetsDataSourceManagerConfiguration *)configuration;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(PXPhotoKitAssetsDataSourceManager *)currentPhotoKitAssetsDataSourceManager;
-(id)createInitialDataSource;
-(void)setTransientKeyAsset:(id)arg1 forAssetCollection:(id)arg2 zoomLevel:(long long)arg3 ;
-(id)dataSourceForZoomLevel:(long long)arg1 ;
-(id)assetsInAssetCollection:(id)arg1 ;
-(void)setAllPhotosFilterPredicate:(NSPredicate *)arg1 ;
-(long long)zoomLevelForCurrentDataSourceManager;
-(void)_invalidatePropertiesDerivedFromZoomLevel;
@end

