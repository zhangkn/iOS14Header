/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface VUICollectionViewCell : UICollectionViewCell {

	UIView* _childView;

}

@property (nonatomic,retain) UIView * childView;              //@synthesize childView=_childView - In the implementation block
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setChildView:(UIView *)arg1 ;
-(UIView *)childView;
@end

