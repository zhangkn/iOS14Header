/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NFLFeedCollectionViewLayoutAttributes, NSMutableDictionary;

@interface NFLRankedLayout : NSObject <NSCopying> {

	BOOL _vetoed;
	NFLFeedCollectionViewLayoutAttributes* _layoutAttributes;
	double _rank;
	NSMutableDictionary* _ranks;

}

@property (nonatomic,retain) NFLFeedCollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (assign,nonatomic) double rank;                                                           //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) BOOL vetoed;                                                           //@synthesize vetoed=_vetoed - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * ranks;                                             //@synthesize ranks=_ranks - In the implementation block
-(NSMutableDictionary *)ranks;
-(double)rank;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRanks:(NSMutableDictionary *)arg1 ;
-(void)setLayoutAttributes:(NFLFeedCollectionViewLayoutAttributes *)arg1 ;
-(void)setVetoed:(BOOL)arg1 ;
-(void)setRank:(double)arg1 ;
-(BOOL)vetoed;
-(NFLFeedCollectionViewLayoutAttributes *)layoutAttributes;
-(id)description;
@end

