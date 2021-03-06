/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGCurationTrait.h>

@class NSIndexSet, NSDictionary;

@interface PGCurationIndexSetTrait : PGCurationTrait {

	NSIndexSet* _indexSet;
	NSDictionary* _thresholdByIdentifier;
	unsigned long long _targetNumberOfMatches;

}

@property (nonatomic,retain) NSDictionary * thresholdByIdentifier;                  //@synthesize thresholdByIdentifier=_thresholdByIdentifier - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSet;                               //@synthesize indexSet=_indexSet - In the implementation block
@property (assign,nonatomic) unsigned long long targetNumberOfMatches;              //@synthesize targetNumberOfMatches=_targetNumberOfMatches - In the implementation block
-(unsigned long long)targetNumberOfMatches;
-(id)debugDescription;
-(BOOL)isActive;
-(void)setTargetNumberOfMatches:(unsigned long long)arg1 ;
-(NSDictionary *)thresholdByIdentifier;
-(void)setThresholdByIdentifier:(NSDictionary *)arg1 ;
-(id)niceDescription;
-(NSIndexSet *)indexSet;
-(id)initWithIndexSet:(id)arg1 ;
-(double)thresholdForSceneIdentifier:(unsigned)arg1 ;
@end

