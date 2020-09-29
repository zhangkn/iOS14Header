/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>

@class UIView, UIActivityIndicatorView, PUAssetViewModel, NSString;

@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	UIView* _successView;
	UIView* _errorView;
	UIActivityIndicatorView* _progressIndicatorView;
	BOOL __isPerformingChanges;
	PUAssetViewModel* _assetViewModel;

}

@property (assign,nonatomic) BOOL _isPerformingChanges;                      //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;              //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateIfNeeded;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)viewDidLoad;
-(PUAssetViewModel *)assetViewModel;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)_isPerformingChanges;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_updateStatusView;
-(void)set_isPerformingChanges:(BOOL)arg1 ;
-(void)becomeReusable;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
@end
