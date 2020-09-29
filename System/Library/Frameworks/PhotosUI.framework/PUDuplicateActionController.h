/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class NSMutableArray, NSDictionary, NSProgress, PUActivityProgressController;

@interface PUDuplicateActionController : NSObject {

	long long _itemCount;
	NSMutableArray* _resourceLocalAvailabilityRequests;
	BOOL __canDuplicate;
	BOOL __canExtractStill;
	BOOL __didCheckDuplicateCapabilities;
	NSDictionary* __assetsByAssetCollection;
	NSProgress* __overallProgress;
	NSProgress* __downloadingProgress;
	NSProgress* __duplicatingProgress;
	PUActivityProgressController* __progressController;
	/*^block*/id __onFinishDownloadCompletionHandler;

}

@property (nonatomic,copy,readonly) NSDictionary * _assetsByAssetCollection;                                                 //@synthesize _assetsByAssetCollection=__assetsByAssetCollection - In the implementation block
@property (assign,setter=_setDidCheckDuplicateCapabilities:,nonatomic) BOOL _didCheckDuplicateCapabilities;                  //@synthesize _didCheckDuplicateCapabilities=__didCheckDuplicateCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL _canDuplicate;                                                                           //@synthesize _canDuplicate=__canDuplicate - In the implementation block
@property (nonatomic,readonly) BOOL _canExtractStill;                                                                        //@synthesize _canExtractStill=__canExtractStill - In the implementation block
@property (setter=_setOverallProgress:,nonatomic,retain) NSProgress * _overallProgress;                                      //@synthesize _overallProgress=__overallProgress - In the implementation block
@property (setter=_setDownloadingProgress:,nonatomic,retain) NSProgress * _downloadingProgress;                              //@synthesize _downloadingProgress=__downloadingProgress - In the implementation block
@property (setter=_setDuplicatingProgress:,nonatomic,retain) NSProgress * _duplicatingProgress;                              //@synthesize _duplicatingProgress=__duplicatingProgress - In the implementation block
@property (setter=_setProgressController:,nonatomic,retain) PUActivityProgressController * _progressController;              //@synthesize _progressController=__progressController - In the implementation block
@property (setter=_setOnFinishDownloadCompletionHandler:,nonatomic,copy) id _onFinishDownloadCompletionHandler;              //@synthesize _onFinishDownloadCompletionHandler=__onFinishDownloadCompletionHandler - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseAlertController; 
+(void)_presentDuplicationWasInterruptedWithItemCount:(long long)arg1 hasPhotos:(BOOL)arg2 hasVideos:(BOOL)arg3 ;
+(BOOL)canPerformDuplicateActionOnAssets:(id)arg1 orAssetsByAssetCollection:(id)arg2 ;
-(PUActivityProgressController *)_progressController;
-(id)initWithAssetsByAssetCollection:(id)arg1 ;
-(BOOL)shouldUseAlertController;
-(void)_checkDuplicateCapabilities;
-(BOOL)_canDuplicate;
-(id)alertControllerForDuplicateActionWithPreview:(BOOL)arg1 newStillImageTime:(SCD_Struct_PH4)arg2 userConfirmationHandler:(/*^block*/id)arg3 ;
-(BOOL)_canExtractStill;
-(BOOL)_validateOriginalAssetResourcesForDuplicateAction:(long long)arg1 ;
-(void)_handleOperationCompletionWithError:(id)arg1 ;
-(void)performDuplicateAction:(long long)arg1 newStillImageTime:(SCD_Struct_PH4)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_downloadResourcesForDuplicateAction:(long long)arg1 newStillImageTime:(SCD_Struct_PH4)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performPhotoLibraryChangeForAction:(long long)arg1 newStillImageTime:(SCD_Struct_PH4)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handlePhotoLibraryDuplicationCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setOverallProgress:(id)arg1 ;
-(void)_overallProgressFractionCompletedDidChange;
-(void)_overallProgressIsCancelledDidChange;
-(void)_checkHasPhotos:(BOOL*)arg1 hasVideos:(BOOL*)arg2 ;
-(void)_finishedDownloadWithSuccess:(BOOL)arg1 ;
-(void)_finishedDuplicationWithSuccess:(BOOL)arg1 ;
-(void)_handleProgressUserCancellation;
-(BOOL)_didCheckDuplicateCapabilities;
-(void)_setDidCheckDuplicateCapabilities:(BOOL)arg1 ;
-(NSProgress *)_overallProgress;
-(NSProgress *)_downloadingProgress;
-(void)_setDownloadingProgress:(id)arg1 ;
-(NSProgress *)_duplicatingProgress;
-(void)_setDuplicatingProgress:(id)arg1 ;
-(void)_setProgressController:(id)arg1 ;
-(id)_onFinishDownloadCompletionHandler;
-(void)_setOnFinishDownloadCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)_assetsByAssetCollection;
@end
