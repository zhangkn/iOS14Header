/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGPetMemoryGenerator : PGFeaturedMemoryGenerator
-(id)confidenceThresholdByWhitelistedSceneIdentifier;
-(id)confidenceThresholdByBlacklistedSceneIdentifier;
-(void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(SCD_Struct_PG0*)arg3 enumerationBlock:(/*^block*/id)arg4 ;
-(void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForCuration;
-(unsigned long long)durationForExtendedCuration;
-(BOOL)semanticalDedupingEnabledForExtendedCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)_potentialPetMemoryForPet:(id)arg1 results:(/*^block*/id)arg2 ;
@end
