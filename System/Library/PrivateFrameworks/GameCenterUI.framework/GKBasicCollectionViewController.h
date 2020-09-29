/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewController.h>

@class NSArray, GKCollectionViewDataSource;

@interface GKBasicCollectionViewController : GKCollectionViewController {

	id _target;
	NSArray* _metricsForSections;
	GKCollectionViewDataSource* _initialDataSource;

}

@property (nonatomic,retain) NSArray * metricsForSections;                                //@synthesize metricsForSections=_metricsForSections - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * initialDataSource;              //@synthesize initialDataSource=_initialDataSource - In the implementation block
@property (nonatomic,retain) id target;                                                   //@synthesize target=_target - In the implementation block
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setDataSource:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)dealloc;
-(void)setInitialDataSource:(GKCollectionViewDataSource *)arg1 ;
-(id)initWithDataSource:(id)arg1 title:(id)arg2 ;
-(NSArray *)metricsForSections;
-(void)setMetricsForSections:(NSArray *)arg1 ;
-(GKCollectionViewDataSource *)initialDataSource;
-(void)configureDataSource;
-(id)target;
-(void)setTarget:(id)arg1 ;
@end
