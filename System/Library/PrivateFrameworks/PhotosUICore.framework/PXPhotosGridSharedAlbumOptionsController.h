/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PLInvitationRecordsObserver.h>
#import <libobjc.A.dylib/PXPhotosGridOptionsController.h>

@protocol OS_dispatch_queue, PXPhotosGridOptionsControllerDelegate;
@class NSString, NSObject, PHAssetCollection;

@interface PXPhotosGridSharedAlbumOptionsController : NSObject <PLInvitationRecordsObserver, PXPhotosGridOptionsController> {

	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _hasRegistered;
	id<PXPhotosGridOptionsControllerDelegate> _optionsDelegate;
	PHAssetCollection* _assetCollection;
	NSString* _actionPerformerType;
	NSString* _systemIconImageName;

}

@property (nonatomic,copy) NSString * actionPerformerType;                                                  //@synthesize actionPerformerType=_actionPerformerType - In the implementation block
@property (nonatomic,copy) NSString * systemIconImageName;                                                  //@synthesize systemIconImageName=_systemIconImageName - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                                         //@synthesize assetCollection=_assetCollection - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosGridOptionsControllerDelegate> optionsDelegate;              //@synthesize optionsDelegate=_optionsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHAssetCollection *)assetCollection;
-(void)_updateOptions;
-(void)dealloc;
-(id)init;
-(void)invitationRecordsDidChange:(id)arg1 ;
-(void)preloadOptions;
-(NSString *)actionPerformerType;
-(id<PXPhotosGridOptionsControllerDelegate>)optionsDelegate;
-(void)setOptionsDelegate:(id<PXPhotosGridOptionsControllerDelegate>)arg1 ;
-(void)setActionPerformerType:(NSString *)arg1 ;
-(void)setSystemIconImageName:(NSString *)arg1 ;
-(void)_workQueue_updateOptions;
-(NSString *)systemIconImageName;
-(id)initWithAssetCollection:(id)arg1 ;
@end
