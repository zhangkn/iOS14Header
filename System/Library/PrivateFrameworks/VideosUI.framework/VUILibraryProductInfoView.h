/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIView;

@interface VUILibraryProductInfoView : UIView {

	NSArray* _infos;
	NSArray* _groupedInfos;
	NSArray* _normalizedGroupedInfos;
	long long _layoutType;
	double _lineSpacing;
	UIView* _headerView;
	UIView* _footerView;
	UIEdgeInsets _headerMargin;
	UIEdgeInsets _footerMargin;

}

@property (nonatomic,readonly) long long maxLineCount; 
@property (nonatomic,readonly) double interitemSpacing; 
@property (nonatomic,readonly) UIEdgeInsets padding; 
@property (nonatomic,copy) NSArray * groupedInfos;                        //@synthesize groupedInfos=_groupedInfos - In the implementation block
@property (nonatomic,copy) NSArray * normalizedGroupedInfos;              //@synthesize normalizedGroupedInfos=_normalizedGroupedInfos - In the implementation block
@property (assign,nonatomic) long long layoutType;                        //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) double lineSpacing;                        //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,retain) UIView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargin;                   //@synthesize headerMargin=_headerMargin - In the implementation block
@property (nonatomic,retain) UIView * footerView;                         //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets footerMargin;                   //@synthesize footerMargin=_footerMargin - In the implementation block
@property (nonatomic,copy) NSArray * infos;                               //@synthesize infos=_infos - In the implementation block
-(void)setFooterView:(UIView *)arg1 ;
-(double)interitemSpacing;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)footerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)padding;
-(double)lineSpacing;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)infos;
-(long long)layoutType;
-(long long)maxLineCount;
-(void)setInfos:(NSArray *)arg1 ;
-(UIView *)headerView;
-(void)setLayoutType:(long long)arg1 ;
-(unsigned long long)_columnCount;
-(UIEdgeInsets)headerMargin;
-(UIEdgeInsets)footerMargin;
-(id)_getNormalizedGroupedInfos;
-(double)_maxWidthForGroupInfos:(id)arg1 ;
-(void)_layouCellContentView:(id)arg1 inCellBounds:(CGRect)arg2 ;
-(NSArray *)groupedInfos;
-(NSArray *)normalizedGroupedInfos;
-(double)_sectionInfoWidth;
-(void)setGroupedInfos:(NSArray *)arg1 ;
-(void)setNormalizedGroupedInfos:(NSArray *)arg1 ;
-(void)setHeaderMargin:(UIEdgeInsets)arg1 ;
-(void)setFooterMargin:(UIEdgeInsets)arg1 ;
@end
