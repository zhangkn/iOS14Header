/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, NSArray;

@interface GKAchievementDataSource : GKCollectionDataSource {

	GKGameRecord* _gameRecord;
	NSArray* _achievements;
	NSArray* _localAchievements;
	UIEdgeInsets _collectionLayoutInsets;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                        //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * achievements;                           //@synthesize achievements=_achievements - In the implementation block
@property (nonatomic,retain) NSArray * localAchievements;                      //@synthesize localAchievements=_localAchievements - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionLayoutInsets;              //@synthesize collectionLayoutInsets=_collectionLayoutInsets - In the implementation block
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)setLocalAchievements:(NSArray *)arg1 ;
-(id)heightMultipliersForSizeCategories;
-(NSArray *)achievements;
-(NSArray *)localAchievements;
-(UIEdgeInsets)collectionLayoutInsets;
-(double)preferredCollectionHeight;
-(void)dealloc;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(long long)itemCount;
-(void)setAchievements:(NSArray *)arg1 ;
@end
