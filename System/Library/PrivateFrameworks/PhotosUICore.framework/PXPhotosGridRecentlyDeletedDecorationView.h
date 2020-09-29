/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGDecorationView.h>

@class PXAssetReference, PXTextBannerView;

@interface PXPhotosGridRecentlyDeletedDecorationView : UIView <PXGDecorationView> {

	unsigned long long _decorationOptions;
	PXAssetReference* _userData;
	PXTextBannerView* _textBannerView;
	CGRect _clippingRect;

}

@property (nonatomic,retain) PXTextBannerView * textBannerView;                 //@synthesize textBannerView=_textBannerView - In the implementation block
@property (nonatomic,copy) PXAssetReference * userData;                         //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) unsigned long long decorationOptions;              //@synthesize decorationOptions=_decorationOptions - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                               //@synthesize clippingRect=_clippingRect - In the implementation block
-(PXTextBannerView *)textBannerView;
-(PXAssetReference *)userData;
-(unsigned long long)decorationOptions;
-(void)setUserData:(PXAssetReference *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setDecorationOptions:(unsigned long long)arg1 ;
-(void)updateTextBanner;
-(void)setTextBannerView:(PXTextBannerView *)arg1 ;
-(void)becomeReusable;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGRect)clippingRect;
@end
