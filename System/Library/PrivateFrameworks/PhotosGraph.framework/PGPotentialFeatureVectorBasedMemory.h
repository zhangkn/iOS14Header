/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSDictionary, NSSet, NSIndexSet;

@interface PGPotentialFeatureVectorBasedMemory : PGPotentialMemory {

	BOOL _isBirthday;
	NSDictionary* _matchingKeywords;
	NSDictionary* _referenceKeywords;
	NSDictionary* _momentKeywords;
	NSSet* _personNodes;
	NSIndexSet* _sortedCriteria;
	double _matchingScore;
	double _contentScore;
	double _neighborScore;

}

@property (retain) NSDictionary * matchingKeywords;               //@synthesize matchingKeywords=_matchingKeywords - In the implementation block
@property (retain) NSDictionary * referenceKeywords;              //@synthesize referenceKeywords=_referenceKeywords - In the implementation block
@property (retain) NSDictionary * momentKeywords;                 //@synthesize momentKeywords=_momentKeywords - In the implementation block
@property (retain) NSSet * personNodes;                           //@synthesize personNodes=_personNodes - In the implementation block
@property (assign) BOOL isBirthday;                               //@synthesize isBirthday=_isBirthday - In the implementation block
@property (retain) NSIndexSet * sortedCriteria;                   //@synthesize sortedCriteria=_sortedCriteria - In the implementation block
@property (assign) double matchingScore;                          //@synthesize matchingScore=_matchingScore - In the implementation block
@property (assign) double contentScore;                           //@synthesize contentScore=_contentScore - In the implementation block
@property (assign) double neighborScore;                          //@synthesize neighborScore=_neighborScore - In the implementation block
-(double)contentScore;
-(double)neighborScore;
-(NSSet *)personNodes;
-(BOOL)isBirthday;
-(void)setContentScore:(double)arg1 ;
-(NSDictionary *)referenceKeywords;
-(void)setReferenceKeywords:(NSDictionary *)arg1 ;
-(double)matchingScore;
-(void)setMatchingScore:(double)arg1 ;
-(NSDictionary *)matchingKeywords;
-(void)setMatchingKeywords:(NSDictionary *)arg1 ;
-(void)setNeighborScore:(double)arg1 ;
-(void)setPersonNodes:(NSSet *)arg1 ;
-(void)setIsBirthday:(BOOL)arg1 ;
-(NSDictionary *)momentKeywords;
-(void)setMomentKeywords:(NSDictionary *)arg1 ;
-(NSIndexSet *)sortedCriteria;
-(void)setSortedCriteria:(NSIndexSet *)arg1 ;
@end
