/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/_UICollectionViewListCell.h>
#import <libobjc.A.dylib/PXSearchResultThumbnailCell.h>

@class UIImageView, UILabel, NSString;

@interface PXSearchResultTitledCell : _UICollectionViewListCell <PXSearchResultThumbnailCell> {

	UIImageView* _thumbnailImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _countLabel;
	unsigned long long _searchResultType;

}

@property (nonatomic,retain) UIImageView * thumbnailImageView;                 //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                             //@synthesize countLabel=_countLabel - In the implementation block
@property (assign,nonatomic) unsigned long long searchResultType;              //@synthesize searchResultType=_searchResultType - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
+(BOOL)shouldUseAccessibilityLayout;
-(NSString *)accessibilityLabel;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(id)titleLabelFont;
-(UIImageView *)thumbnailImageView;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)_setupSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(CGSize)thumbnailImageViewPixelSize;
-(UILabel *)countLabel;
-(unsigned long long)searchResultType;
-(id)_setupImageView;
-(void)setThumbnailImage:(id)arg1 ;
-(id)_setupTitleLabel;
-(id)_setupSubtitleLabel;
-(id)_setupCountLabel;
-(id)italicTitleLabelFont;
-(id)subtitleLabelFont;
-(id)countLabelFont;
-(void)configureWithResult:(id)arg1 ;
-(void)setSearchResultType:(unsigned long long)arg1 ;
@end

