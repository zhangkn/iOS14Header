/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

@interface PXSearchQueryStatusFooter : UICollectionReusableView {

	UILabel* _titleLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)setSearchText:(id)arg1 ;
@end

