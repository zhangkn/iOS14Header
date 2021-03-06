/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HUQuickControlCollectionGridLayoutSettings : NSObject {

	unsigned long long _sectionNumber;
	NSString* _sectionIdentifier;
	NSString* _sectionHeader;
	unsigned long long _numberOfItems;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfColumns;
	long long _horizontalAlignment;
	unsigned long long _itemSize;
	double _rowSpacing;
	double _interitemSpacing;
	unsigned long long _preferredLayoutStyle;
	double _sectionTopPadding;
	unsigned long long _titlePosition;

}

@property (assign,nonatomic) unsigned long long sectionNumber;                     //@synthesize sectionNumber=_sectionNumber - In the implementation block
@property (nonatomic,retain) NSString * sectionIdentifier;                         //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sectionHeader;                             //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItems;                     //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRows;                      //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns;                   //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                        //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long itemSize;                          //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double rowSpacing;                                    //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long preferredLayoutStyle;              //@synthesize preferredLayoutStyle=_preferredLayoutStyle - In the implementation block
@property (assign,nonatomic) double sectionTopPadding;                             //@synthesize sectionTopPadding=_sectionTopPadding - In the implementation block
@property (assign,nonatomic) unsigned long long titlePosition;                     //@synthesize titlePosition=_titlePosition - In the implementation block
-(unsigned long long)numberOfRows;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setTitlePosition:(unsigned long long)arg1 ;
-(void)setPreferredLayoutStyle:(unsigned long long)arg1 ;
-(unsigned long long)sectionNumber;
-(unsigned long long)titlePosition;
-(void)setRowSpacing:(double)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(unsigned long long)numberOfColumns;
-(unsigned long long)itemSize;
-(void)setNumberOfItems:(unsigned long long)arg1 ;
-(void)setItemSize:(unsigned long long)arg1 ;
-(unsigned long long)preferredLayoutStyle;
-(NSString *)sectionHeader;
-(double)rowSpacing;
-(double)sectionTopPadding;
-(long long)horizontalAlignment;
-(void)setSectionHeader:(NSString *)arg1 ;
-(unsigned long long)numberOfItems;
-(void)setSectionTopPadding:(double)arg1 ;
-(void)setSectionNumber:(unsigned long long)arg1 ;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
@end

