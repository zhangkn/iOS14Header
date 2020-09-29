/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXGridPresentation;
@class PXPhotoKitCollectionsDataSourceManager, PUSessionInfo, PUAlbumListViewControllerSpec, PXPhotoKitCollectionsDataSource;

@interface PUAlbumNavigationHelperParams : NSObject {

	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;
	PUSessionInfo* _sessionInfo;
	PUAlbumListViewControllerSpec* _spec;
	id<PXGridPresentation> _gridPresentation;

}

@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                             //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,retain) PUAlbumListViewControllerSpec * spec;                                    //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) id<PXGridPresentation> gridPresentation;                                 //@synthesize gridPresentation=_gridPresentation - In the implementation block
@property (nonatomic,readonly) PXPhotoKitCollectionsDataSource * dataSource; 
-(PUAlbumListViewControllerSpec *)spec;
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(PXPhotoKitCollectionsDataSource *)dataSource;
-(void)setDataSourceManager:(PXPhotoKitCollectionsDataSourceManager *)arg1 ;
-(id<PXGridPresentation>)gridPresentation;
-(void)setGridPresentation:(id<PXGridPresentation>)arg1 ;
-(PUSessionInfo *)sessionInfo;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(void)setSpec:(PUAlbumListViewControllerSpec *)arg1 ;
@end
