/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UIImageView, UIView, PXImageRequesterHelper, PXCMMImageViewModel, NSString;

@interface PXCMMImageView : UIView <PXChangeObserver> {

	UIImageView* _imageView;
	UIView* _highlightView;
	PXImageRequesterHelper* _imageRequesterHelper;
	PXCMMImageViewModel* _viewModel;

}

@property (nonatomic,retain) PXCMMImageViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PXCMMImageViewModel *)viewModel;
-(void)_updateContentsRect;
-(void)_updateImage;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateHighlighted;
-(void)_updateImageRequestHelper;
-(BOOL)test_highlighted;
-(void)setViewModel:(PXCMMImageViewModel *)arg1 ;
@end
