/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGCurationIndexSetTrait, PGCurationPartOfDayTrait, PGGraph, PGCurationSetTrait, PGCurationContentOrAestheticScoreTrait, PGCurationCropScoreTrait, NSString;

@interface PGCurationCriteria : NSObject {

	BOOL _filterUtilityAssets;
	double _minimumAssetsRatio;
	PGCurationIndexSetTrait* _compulsoryScenesTrait;
	PGCurationIndexSetTrait* _scenesTrait;
	PGCurationPartOfDayTrait* _partOfDayTrait;
	PGGraph* _graph;
	unsigned long long _faceFilter;
	PGCurationSetTrait* _peopleTrait;
	PGCurationContentOrAestheticScoreTrait* _contentOrAestheticScoreTrait;
	PGCurationCropScoreTrait* _cropScoreTrait;
	unsigned long long _client;

}

@property (nonatomic,readonly) PGGraph * graph;                                                                  //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) double minimumAssetsRatio;                                                          //@synthesize minimumAssetsRatio=_minimumAssetsRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long client;                                                        //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) unsigned long long faceFilter;                                                      //@synthesize faceFilter=_faceFilter - In the implementation block
@property (assign,nonatomic) BOOL filterUtilityAssets;                                                           //@synthesize filterUtilityAssets=_filterUtilityAssets - In the implementation block
@property (nonatomic,retain) PGCurationIndexSetTrait * scenesTrait;                                              //@synthesize scenesTrait=_scenesTrait - In the implementation block
@property (nonatomic,retain) PGCurationIndexSetTrait * compulsoryScenesTrait;                                    //@synthesize compulsoryScenesTrait=_compulsoryScenesTrait - In the implementation block
@property (nonatomic,retain) PGCurationSetTrait * peopleTrait;                                                   //@synthesize peopleTrait=_peopleTrait - In the implementation block
@property (nonatomic,retain) PGCurationPartOfDayTrait * partOfDayTrait;                                          //@synthesize partOfDayTrait=_partOfDayTrait - In the implementation block
@property (nonatomic,retain) PGCurationContentOrAestheticScoreTrait * contentOrAestheticScoreTrait;              //@synthesize contentOrAestheticScoreTrait=_contentOrAestheticScoreTrait - In the implementation block
@property (nonatomic,retain) PGCurationCropScoreTrait * cropScoreTrait;                                          //@synthesize cropScoreTrait=_cropScoreTrait - In the implementation block
@property (readonly) NSString * niceDescription; 
-(PGGraph *)graph;
-(BOOL)isPassingForAsset:(id)arg1 score:(double*)arg2 ;
-(PGCurationCropScoreTrait *)cropScoreTrait;
-(void)setContentOrAestheticScoreTrait:(PGCurationContentOrAestheticScoreTrait *)arg1 ;
-(void)setCompulsoryScenesTrait:(PGCurationIndexSetTrait *)arg1 ;
-(PGCurationContentOrAestheticScoreTrait *)contentOrAestheticScoreTrait;
-(double)minimumAssetsRatio;
-(PGCurationSetTrait *)peopleTrait;
-(double)_scoreForSceneClassifications:(id)arg1 withScenesTrait:(id)arg2 traitFailed:(BOOL*)arg3 ;
-(BOOL)filterUtilityAssets;
-(void)setMinimumAssetsRatio:(double)arg1 ;
-(PGCurationPartOfDayTrait *)partOfDayTrait;
-(void)setPartOfDayTrait:(PGCurationPartOfDayTrait *)arg1 ;
-(unsigned long long)client;
-(void)setPeopleTrait:(PGCurationSetTrait *)arg1 ;
-(void)setScenesTrait:(PGCurationIndexSetTrait *)arg1 ;
-(BOOL)passesForItem:(id)arg1 score:(double*)arg2 reasonString:(id*)arg3 ;
-(unsigned long long)faceFilter;
-(PGCurationIndexSetTrait *)compulsoryScenesTrait;
-(NSString *)niceDescription;
-(PGCurationIndexSetTrait *)scenesTrait;
-(void)setFaceFilter:(unsigned long long)arg1 ;
-(void)setFilterUtilityAssets:(BOOL)arg1 ;
-(id)initWithGraph:(id)arg1 minimumAssetsRatio:(double)arg2 client:(unsigned long long)arg3 ;
-(id)peopleTraitString;
-(void)setCropScoreTrait:(PGCurationCropScoreTrait *)arg1 ;
@end
