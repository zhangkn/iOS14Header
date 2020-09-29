/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PXMutableAssetVariationCollectionViewCell.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXAssetEditOperationManagerObserver.h>

@class PXAssetVariationRenderResult, PXAssetVariationRenderProvider, UIImage, PXAssetVariationOption, PXAssetEditOperationManager, PXWidgetSpec, UIColor, UILabel, UIView, PXLoadingFailureBadgeView, PXRoundProgressView, NSError, NSProgress, NSString;

@interface PXAssetVariationCollectionViewCell : UICollectionViewCell <PXMutableAssetVariationCollectionViewCell, PXChangeObserver, PXAssetEditOperationManagerObserver> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	struct {
		BOOL titleLabel;
		BOOL variationView;
		BOOL progressView;
		BOOL selectedView;
		BOOL error;
		BOOL failureView;
		BOOL renderProgress;
	}  _needsUpdateFlags;
	UILabel* _titleLabel;
	UIView* _backgroundView;
	UIView* _variationView;
	UIView* _selectedDecorationView;
	PXLoadingFailureBadgeView* _failureView;
	PXRoundProgressView* _loadingProgressView;
	BOOL _playbackAllowed;
	PXAssetVariationRenderProvider* _renderProvider;
	PXAssetVariationRenderResult* _renderResult;
	PXAssetVariationOption* _variationOption;
	PXAssetEditOperationManager* _editOperationManager;
	PXWidgetSpec* _spec;
	NSError* _error;
	UIImage* _placeholderImage;
	UIColor* _titleColor;
	UIColor* _selectedTitleColor;
	double _placeholderOverlayAlpha;
	long long _assetVariationContentMode;
	NSProgress* __renderProgress;

}

@property (setter=_setError:,nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (setter=_setRenderProgress:,nonatomic,retain) NSProgress * _renderProgress;              //@synthesize _renderProgress=__renderProgress - In the implementation block
@property (nonatomic,readonly) PXAssetVariationRenderProvider * renderProvider;                    //@synthesize renderProvider=_renderProvider - In the implementation block
@property (nonatomic,readonly) PXAssetVariationRenderResult * renderResult;                        //@synthesize renderResult=_renderResult - In the implementation block
@property (nonatomic,readonly) PXAssetVariationOption * variationOption;                           //@synthesize variationOption=_variationOption - In the implementation block
@property (nonatomic,readonly) PXAssetEditOperationManager * editOperationManager;                 //@synthesize editOperationManager=_editOperationManager - In the implementation block
@property (nonatomic,readonly) PXWidgetSpec * spec;                                                //@synthesize spec=_spec - In the implementation block
@property (getter=isPlaybackAllowed,nonatomic,readonly) BOOL playbackAllowed;                      //@synthesize playbackAllowed=_playbackAllowed - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage;                                         //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor;                                               //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) UIColor * selectedTitleColor;                                       //@synthesize selectedTitleColor=_selectedTitleColor - In the implementation block
@property (nonatomic,readonly) double placeholderOverlayAlpha;                                     //@synthesize placeholderOverlayAlpha=_placeholderOverlayAlpha - In the implementation block
@property (nonatomic,readonly) long long assetVariationContentMode;                                //@synthesize assetVariationContentMode=_assetVariationContentMode - In the implementation block
@property (nonatomic,readonly) double distanceBetweenLastBaselineAndBottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preloadResources;
+(id)placeholderFiltersWithOverlayWhite:(double)arg1 ;
-(PXWidgetSpec *)spec;
-(void)_updateIfNeeded;
-(void)tintColorDidChange;
-(void)_setNeedsUpdate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVariationOption:(PXAssetVariationOption *)arg1 ;
-(void)setAssetVariationContentMode:(long long)arg1 ;
-(void)setPlaceholderOverlayAlpha:(double)arg1 ;
-(void)setSelectedTitleColor:(UIColor *)arg1 ;
-(void)setRenderProvider:(PXAssetVariationRenderProvider *)arg1 ;
-(void)prepareForReuse;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(NSError *)error;
-(UIImage *)placeholderImage;
-(void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void*)arg3 ;
-(PXAssetEditOperationManager *)editOperationManager;
-(void)performChanges:(/*^block*/id)arg1 ;
-(UIColor *)titleColor;
-(void)updateError;
-(PXAssetVariationRenderProvider *)renderProvider;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlaybackAllowed:(BOOL)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_setError:(id)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(PXAssetVariationRenderResult *)renderResult;
-(BOOL)isPlaybackAllowed;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(void)setRenderResult:(PXAssetVariationRenderResult *)arg1 ;
-(PXAssetVariationOption *)variationOption;
-(void)setEditOperationManager:(PXAssetEditOperationManager *)arg1 ;
-(long long)assetVariationContentMode;
-(UIColor *)selectedTitleColor;
-(id)loadVariationView;
-(double)placeholderOverlayAlpha;
-(void)_PXAssetVariationCollectionViewCellCommonInit;
-(void)updateVariationView;
-(CGSize)sizeThatFitsPreviewSize:(CGSize)arg1 ;
-(double)distanceBetweenPreviewBottomAndLastBaseline;
-(double)distanceBetweenLastBaselineAndBottom;
-(void)_invalidateError;
-(void)_invalidateRenderProgress;
-(void)_updateRenderProgressIfNeeded;
-(void)_updateErrorIfNeeded;
-(void)_invalidateSelectedView;
-(void)_updateSelectedViewIfNeeded;
-(void)_invalidateTitleLabel;
-(void)_updateTitleLabelIfNeeded;
-(void)_invalidateVariationView;
-(void)_updateVariationViewIfNeeded;
-(void)_invalidateProgressView;
-(void)_updateProgressViewIfNeeded;
-(void)_invalidateFailureView;
-(void)_updateFailureViewIfNeeded;
-(void)_setRenderProgress:(id)arg1 ;
-(NSProgress *)_renderProgress;
-(BOOL)_needsUpdate;
@end
