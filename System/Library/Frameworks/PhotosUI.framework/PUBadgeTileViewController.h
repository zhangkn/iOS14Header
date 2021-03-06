/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXUIAssetBadgeViewDelegate.h>

@class PUAssetViewModel, PXUIAssetBadgeView, NSString;

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate> {

	BOOL __needsUpdateBadgeInfo;
	BOOL __needsUpdateBadgeView;
	BOOL __isOverContent;
	BOOL __shouldAnimateNextBadgeViewUpdate;
	PUAssetViewModel* _assetViewModel;
	PXUIAssetBadgeView* __badgeView;
	double __contentWidth;
	PXAssetBadgeInfo __badgeInfo;

}

@property (assign,setter=_setNeedsUpdateBadgeInfo:,nonatomic) BOOL _needsUpdateBadgeInfo;                                      //@synthesize _needsUpdateBadgeInfo=__needsUpdateBadgeInfo - In the implementation block
@property (assign,setter=_setNeedsUpdateBadgeView:,nonatomic) BOOL _needsUpdateBadgeView;                                      //@synthesize _needsUpdateBadgeView=__needsUpdateBadgeView - In the implementation block
@property (assign,setter=_setBadgeInfo:,nonatomic) PXAssetBadgeInfo _badgeInfo;                                                //@synthesize _badgeInfo=__badgeInfo - In the implementation block
@property (nonatomic,readonly) PXUIAssetBadgeView * _badgeView;                                                                //@synthesize _badgeView=__badgeView - In the implementation block
@property (assign,setter=_setOverContent:,nonatomic) BOOL _isOverContent;                                                      //@synthesize _isOverContent=__isOverContent - In the implementation block
@property (assign,setter=_setContentWidth:,nonatomic) double _contentWidth;                                                    //@synthesize _contentWidth=__contentWidth - In the implementation block
@property (assign,setter=_setShouldAnimateNextBadgeViewUpdate:,nonatomic) BOOL _shouldAnimateNextBadgeViewUpdate;              //@synthesize _shouldAnimateNextBadgeViewUpdate=__shouldAnimateNextBadgeViewUpdate - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;                                                                //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_configureBadgeView:(id)arg1 withBadgeInfo:(PXAssetBadgeInfo)arg2 isOverContent:(BOOL)arg3 contentWidth:(double)arg4 animated:(BOOL)arg5 ;
+(CGSize)_badgeTileSizeForBadgeInfo:(PXAssetBadgeInfo)arg1 contentWidth:(double)arg2 ;
+(id)badgeSizeCacheKeyValueFromBadgeInfo:(PXAssetBadgeInfo)arg1 contentWidth:(double)arg2 ;
+(CGSize)badgeTileSizeForAssetViewModel:(id)arg1 contentWidth:(double)arg2 ;
-(void)_invalidateBadgeView;
-(void)_updateIfNeeded;
-(void)_setNeedsUpdate;
-(void)prepareForReuse;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)_setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(void)_setContentWidth:(double)arg1 ;
-(void)_invalidateBadgeInfo;
-(void)_updateBadgeInfoIfNeeded;
-(BOOL)_needsUpdateBadgeInfo;
-(void)_setNeedsUpdateBadgeInfo:(BOOL)arg1 ;
-(BOOL)_shouldAnimateNextBadgeViewUpdate;
-(void)_setShouldAnimateNextBadgeViewUpdate:(BOOL)arg1 ;
-(void)viewDidLoad;
-(PUAssetViewModel *)assetViewModel;
-(id)loadView;
-(PXUIAssetBadgeView *)_badgeView;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(PXAssetBadgeInfo)_badgeInfo;
-(void)becomeReusable;
-(double)_contentWidth;
-(BOOL)_isOverContent;
-(void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2 ;
-(void)_setOverContent:(BOOL)arg1 ;
-(void)_updateBadgeViewIfNeeded;
-(BOOL)_needsUpdateBadgeView;
-(void)_setNeedsUpdateBadgeView:(BOOL)arg1 ;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(BOOL)_needsUpdate;
@end

