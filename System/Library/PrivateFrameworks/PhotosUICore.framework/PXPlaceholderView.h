/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIActivityIndicatorView, UIView, NSString;

@interface PXPlaceholderView : UIView <PXReusableObject, PXUIViewBasicTile> {

	UIActivityIndicatorView* _indicator;
	BOOL _shouldShowIndicatorView;

}

@property (assign,nonatomic) BOOL shouldShowIndicatorView;              //@synthesize shouldShowIndicatorView=_shouldShowIndicatorView - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(UIView *)view;
-(void)layoutSubviews;
-(void)becomeReusable;
-(void)_updateSubviews;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)setShouldShowIndicatorView:(BOOL)arg1 ;
-(BOOL)shouldShowIndicatorView;
@end

