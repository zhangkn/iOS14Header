/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class PUAlbumPickerViewController;

@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer {

	PUAlbumPickerViewController* _albumPickerViewController;

}

@property (nonatomic,retain) PUAlbumPickerViewController * albumPickerViewController;              //@synthesize albumPickerViewController=_albumPickerViewController - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
+(id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3 ;
-(void)_handlePickedAlbum:(id)arg1 assets:(id)arg2 ;
-(PUAlbumPickerViewController *)albumPickerViewController;
-(void)_handleUserInteractionTaskResult:(BOOL)arg1 error:(id)arg2 ;
-(void)setAlbumPickerViewController:(PUAlbumPickerViewController *)arg1 ;
-(void)performUserInteractionTask;
@end
