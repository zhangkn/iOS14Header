/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>

@interface VideosUI.CarouselViewCell : TVContainerCollectionViewCell {

	 overlayView;
	 isOverlayViewMasked;
	 imageView;
	 cornerRadius;
	 shadow;
	 previousSize;
	 $__lazy_storage_$_inlinePlaybackView;

}

@property (assign,nonatomic) long long overrideUserInterfaceStyle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(long long)overrideUserInterfaceStyle;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setOverrideUserInterfaceStyle:(long long)arg1 ;
@end
