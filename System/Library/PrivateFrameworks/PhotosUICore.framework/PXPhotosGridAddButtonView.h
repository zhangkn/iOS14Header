/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class UIButton, PXUpdater, PXPhotosGridAddButtonViewUserData, UIImage;

@interface PXPhotosGridAddButtonView : UIView <PXGReusableView> {

	UIButton* _button;
	PXUpdater* _updater;
	PXPhotosGridAddButtonViewUserData* _userData;
	UIImage* _buttonImage;
	CGRect _clippingRect;

}

@property (nonatomic,readonly) id actionHandler; 
@property (nonatomic,retain) UIImage * buttonImage;                                   //@synthesize buttonImage=_buttonImage - In the implementation block
@property (nonatomic,copy) PXPhotosGridAddButtonViewUserData * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                     //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)_handleButton:(id)arg1 ;
-(PXPhotosGridAddButtonViewUserData *)userData;
-(void)setUserData:(PXPhotosGridAddButtonViewUserData *)arg1 ;
-(void)_setNeedsUpdate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(id)actionHandler;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIImage *)buttonImage;
-(void)becomeReusable;
-(void)_updateButtonImage;
-(void)setButtonImage:(UIImage *)arg1 ;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGRect)clippingRect;
@end

