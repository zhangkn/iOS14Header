/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PXNavigationListControllerView : UIView {

	UIView* _contentView;
	double _contentViewHeight;

}

@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double contentViewHeight;              //@synthesize contentViewHeight=_contentViewHeight - In the implementation block
-(UIView *)contentView;
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentViewHeight:(double)arg1 ;
-(void)_updateContentViewFrame;
-(double)contentViewHeight;
@end

