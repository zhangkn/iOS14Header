/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXActionMenuController.h>

@class PXPhotoKitAssetCollectionActionManager, NSArray;

@interface PXPhotosGridActionMenuController : PXActionMenuController {

	PXPhotoKitAssetCollectionActionManager* _assetCollectionActionManager;
	NSArray* _additionalActionTypes;
	PXPhotoKitAssetCollectionActionManager* _assetActionManager;

}

@property (nonatomic,readonly) PXPhotoKitAssetCollectionActionManager * assetActionManager;                        //@synthesize assetActionManager=_assetActionManager - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAssetCollectionActionManager * assetCollectionActionManager;              //@synthesize assetCollectionActionManager=_assetCollectionActionManager - In the implementation block
@property (nonatomic,copy) NSArray * additionalActionTypes;                                                        //@synthesize additionalActionTypes=_additionalActionTypes - In the implementation block
-(PXPhotoKitAssetCollectionActionManager *)assetActionManager;
-(PXPhotoKitAssetCollectionActionManager *)assetCollectionActionManager;
-(id)_defaultActionTypes;
-(id)initWithActionManagers:(id)arg1 ;
-(id)initWithActionManagers:(id)arg1 selectionManager:(id)arg2 ;
-(id)availableActionTypes;
-(BOOL)shouldAllowPerformanceOfActionType:(id)arg1 ;
-(NSArray *)additionalActionTypes;
-(void)setAdditionalActionTypes:(NSArray *)arg1 ;
@end

