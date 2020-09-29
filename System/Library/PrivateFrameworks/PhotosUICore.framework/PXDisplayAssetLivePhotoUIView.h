/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXDisplayAssetUIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class ISLivePhotoUIView, AVPlayerItem, NSString;

@interface PXDisplayAssetLivePhotoUIView : PXDisplayAssetUIView <PXChangeObserver> {

	ISLivePhotoUIView* _livePhotoView;
	long long _requestID;
	AVPlayerItem* _videoPlayerItem;

}

@property (nonatomic,retain) AVPlayerItem * videoPlayerItem;              //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentView;
-(void)updateContent;
-(long long)playbackStyle;
-(void)placeholderImageFiltersDidChange;
-(void)contentsRectDidChange;
-(BOOL)isDisplayingFullQualityContent;
-(void)setVideoPlayerItem:(AVPlayerItem *)arg1 ;
-(void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3 ;
-(AVPlayerItem *)videoPlayerItem;
-(void)_updateLivePhotoPlayerItem;
-(void)imageDidChange;
@end
