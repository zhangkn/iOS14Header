/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXGNamedImageViewConfiguration;

@interface PXGNamedImageView : UIImageView <PXGReusableView> {

	PXGNamedImageViewConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXGNamedImageViewConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                  //@synthesize clippingRect=_clippingRect - In the implementation block
-(PXGNamedImageViewConfiguration *)userData;
-(void)setUserData:(PXGNamedImageViewConfiguration *)arg1 ;
-(void)prepareForReuse;
-(void)becomeReusable;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGRect)clippingRect;
@end

