/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUAssetExplorerReviewScreenViewControllerDelegate <NSObject>
@optional
-(void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPressFileSizeButtonWithSelectedUUIDs:(id)arg2;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
-(void)assetExplorerReviewScreenViewController:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3;

@required
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;

@end
