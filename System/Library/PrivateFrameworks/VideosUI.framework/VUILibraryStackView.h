/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UICollectionView;

@interface VUILibraryStackView : UIView {

	UICollectionView* _collectionView;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(UICollectionView *)collectionView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

