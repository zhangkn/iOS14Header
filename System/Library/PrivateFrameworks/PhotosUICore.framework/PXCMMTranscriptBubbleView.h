/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class PXUpdater, UIView, PXCMMTranscriptBubbleFooterView, PXCMMPosterHeaderView, PXCMMSpec, NSString;

@interface PXCMMTranscriptBubbleView : UIView {

	PXUpdater* _updater;
	UIView* _highlightView;
	PXCMMTranscriptBubbleFooterView* _footerView;
	PXCMMPosterHeaderView* _headerView;
	BOOL _highlighted;
	PXCMMSpec* _spec;
	NSString* _imageTitleText;
	NSString* _imageSubtitleText;
	NSString* _primaryText;
	NSString* _secondaryText;
	id<PXDisplayAsset> _asset;
	id<PXUIImageProvider> _mediaProvider;
	UIEdgeInsets _bubbleSafeAreaInsets;

}

@property (nonatomic,retain) PXCMMSpec * spec;                                   //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bubbleSafeAreaInsets;                  //@synthesize bubbleSafeAreaInsets=_bubbleSafeAreaInsets - In the implementation block
@property (nonatomic,copy) NSString * imageTitleText;                            //@synthesize imageTitleText=_imageTitleText - In the implementation block
@property (nonatomic,copy) NSString * imageSubtitleText;                         //@synthesize imageSubtitleText=_imageSubtitleText - In the implementation block
@property (nonatomic,copy) NSString * primaryText;                               //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                             //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withSpec:(id)arg2 ;
-(PXCMMSpec *)spec;
-(void)setAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(id<PXDisplayAsset>)asset;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXUIImageProvider>)mediaProvider;
-(BOOL)isHighlighted;
-(UIEdgeInsets)bubbleSafeAreaInsets;
-(void)setBubbleSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)_updatePosterView;
-(CGSize)_performLayoutInSize:(CGSize)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(BOOL)_wantsHighlightView;
-(void)setImageTitleText:(NSString *)arg1 ;
-(void)setImageSubtitleText:(NSString *)arg1 ;
-(NSString *)imageTitleText;
-(NSString *)imageSubtitleText;
-(void)layoutSubviews;
-(void)_updateHighlightView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)_updateFooterView;
-(void)setSpec:(PXCMMSpec *)arg1 ;
@end

