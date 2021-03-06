/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSArray, PGGraphPersonNode;

@interface PGPotentialPetMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	NSArray* _petAssetLocalIdentifiers;
	PGGraphPersonNode* _ownerPersonNode;
	long long _year;

}

@property (retain) NSArray * petAssetLocalIdentifiers;                 //@synthesize petAssetLocalIdentifiers=_petAssetLocalIdentifiers - In the implementation block
@property (readonly) PGGraphPersonNode * ownerPersonNode;              //@synthesize ownerPersonNode=_ownerPersonNode - In the implementation block
@property (readonly) long long year;                                   //@synthesize year=_year - In the implementation block
-(long long)year;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithOwner:(id)arg1 year:(long long)arg2 ;
-(NSArray *)petAssetLocalIdentifiers;
-(void)setPetAssetLocalIdentifiers:(NSArray *)arg1 ;
-(PGGraphPersonNode *)ownerPersonNode;
@end

