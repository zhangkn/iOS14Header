/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying, NSSecureCoding> {

	NSDictionary* _kv;
	NSDictionary* _storeKVDict;
	unsigned long long _hash;

}

@property (nonatomic,readonly) unsigned long long hash;                //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
+(BOOL)supportsSecureCoding;
+(id)createKnowledgeVectorDictionaryFromString:(id)arg1 ;
+(id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isZeroVector;
-(id)allPeerIDs;
-(id)initWithStoreKnowledgeVectorDictionary:(id)arg1 ;
-(void)updateWithKnowledgeVector:(id)arg1 ;
-(BOOL)isAncestorOfKnowledgeVector:(id)arg1 ;
-(BOOL)conflictsWithKnowledgeVector:(id)arg1 ;
-(id)createStoreKnowledgeVectorDictionary;
-(id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1 ;
-(id)createKnowledgeVectorString;
-(id)newKnowledgeVectorBySubtractingVector:(id)arg1 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 ;
-(id)init;
-(long long)compare:(id)arg1 ;
-(id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1 ;
-(id)createAncestorVectorForConflictingVector:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1 ;
-(void)_updateHash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createSetOfAllPeerIDsWithOtherVector:(id)arg1 ;
-(id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned long long)arg3 ;
-(id)initWithKnowledgeVectorString:(id)arg1 ;
-(BOOL)hasPeerIDInCommonWith:(id)arg1 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2 ;
-(BOOL)isDescendantOfKnowledgeVector:(id)arg1 ;
-(void)decrementToMinimumWithKnowledgeVector:(id)arg1 ;
-(BOOL)canMergeWithKnowledgeVector:(id)arg1 ;
-(unsigned long long)hash;
-(id)transactionNumberForPeerID:(id)arg1 ;
-(id)description;
@end

