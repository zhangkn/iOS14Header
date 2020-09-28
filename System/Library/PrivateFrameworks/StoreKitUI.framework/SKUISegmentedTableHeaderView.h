/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIView;

@interface SKUISegmentedTableHeaderView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	UIView* _segmentedControl;

}

@property (assign,nonatomic) BOOL hidesBorderView; 
@property (nonatomic,retain) UIView * segmentedControl;                     //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(_UIBackdropView *)backdropView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_borderView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)segmentedControl;
-(void)setSegmentedControl:(UIView *)arg1 ;
-(BOOL)hidesBorderView;
-(void)setHidesBorderView:(BOOL)arg1 ;
@end
