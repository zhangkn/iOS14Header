/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface NFLFeedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	long long _cellType;
	long long _columnSpan;
	long long _rowSpan;

}

@property (assign,nonatomic) long long cellType;                //@synthesize cellType=_cellType - In the implementation block
@property (assign,nonatomic) long long columnSpan;              //@synthesize columnSpan=_columnSpan - In the implementation block
@property (assign,nonatomic) long long rowSpan;                 //@synthesize rowSpan=_rowSpan - In the implementation block
-(void)setCellType:(long long)arg1 ;
-(long long)rowSpan;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(long long)columnSpan;
-(void)setRowSpan:(long long)arg1 ;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
-(long long)cellType;
-(void)setColumnSpan:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
