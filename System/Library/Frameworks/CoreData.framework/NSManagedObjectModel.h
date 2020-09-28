/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class _PFVMData, NSMutableDictionary, NSSet, NSDictionary, NSArray;

@interface NSManagedObjectModel : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {

	_PFVMData* _dataForOptimization;
	id* _optimizationHints;
	id* _additionalPrivateIvars;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _configurations;
	NSMutableDictionary* _fetchRequestTemplates;
	NSSet* _versionIdentifiers;
	struct {
		unsigned _isInUse : 1;
		unsigned _isImmutable : 1;
		unsigned _isOptimizedForEncoding : 1;
		unsigned _hasEntityWithConstraints : 1;
		unsigned _skipUserInfoTombstones : 1;
		unsigned _reservedEntityDescription : 27;
	}  _managedObjectModelFlags;

}

@property (assign,setter=_setModelsReferenceIDOffset:,nonatomic) long long _modelsReferenceIDOffset; 
@property (copy,readonly) NSDictionary * entitiesByName; 
@property (retain) NSArray * entities; 
@property (readonly) NSArray * configurations; 
@property (retain) NSDictionary * localizationDictionary; 
@property (copy,readonly) NSDictionary * fetchRequestTemplatesByName; 
@property (copy) NSSet * versionIdentifiers; 
@property (copy,readonly) NSDictionary * entityVersionHashesByName; 
+(BOOL)supportsSecureCoding;
+(id)mergedModelFromBundles:(id)arg1 ;
+(id)_modelPathsFromBundles:(id)arg1 ;
+(id)modelByMergingModels:(id)arg1 ;
+(void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2 ;
+(id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)versionsHashesForModelAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)versionHashes:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
+(id)_newModelFromOptimizedEncoding:(id)arg1 error:(id*)arg2 ;
+(long long)_debugOptimizedModelLayout;
-(NSArray *)entities;
-(BOOL)isEditable;
-(void)_throwIfNotEditable;
-(void)setEntities:(NSArray *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSDictionary *)entityVersionHashesByName;
-(id)immutableCopy;
-(id)_configurationsByName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_modelForVersionHashes:(id)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 optimizationStyle:(unsigned long long)arg2 ;
-(void)_setModelsReferenceIDOffset:(long long)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2 ;
-(BOOL)_isSkippingUserInfoTombstones;
-(id)_versionIdentifiersAsArray;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)_markTombstones;
-(id)_localizationPolicy;
-(void)_createCachesAndOptimizeState;
-(id)_initWithEntities:(id)arg1 ;
-(id)initWithContentsOfOptimizedURL:(id)arg1 ;
-(void)dealloc;
-(NSArray *)configurations;
-(void)_flattenProperties;
-(void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2 ;
-(NSDictionary *)fetchRequestTemplatesByName;
-(void)_addVersionIdentifiers:(id)arg1 ;
-(id)_initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 ;
-(NSSet *)versionIdentifiers;
-(void)_restoreValidation;
-(id)_sortedEntitiesForConfiguration:(id)arg1 ;
-(void)_removeEntity:(id)arg1 ;
-(void)setLocalizationDictionary:(NSDictionary *)arg1 ;
-(void)_setLocalizationPolicy:(id)arg1 ;
-(id)init;
-(NSDictionary *)entitiesByName;
-(NSDictionary *)localizationDictionary;
-(void)_stripForMigration;
-(id)_optimizedEncoding:(id*)arg1 ;
-(BOOL)_isOptimizedForEncoding;
-(id)_precomputedKeysForEntity:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_traverseTombstonesAndMark:(BOOL)arg1 ;
-(void)setVersionIdentifiers:(NSSet *)arg1 ;
-(id)_entityVersionHashesDigest;
-(id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)_addEntity:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3 ;
-(id)versionHash;
-(void)_unmarkTombstones;
-(id)_entitiesByVersionHash;
-(long long)_modelsReferenceIDOffset;
-(void)_removeEntityNamed:(id)arg1 ;
-(BOOL)_hasEntityWithUniquenessConstraints;
-(id)fetchRequestTemplateForName:(id)arg1 ;
-(unsigned long long)hash;
-(void)_skipUserInfoTombstones:(BOOL)arg1 ;
-(id)entitiesForConfiguration:(id)arg1 ;
-(BOOL)_hasPrecomputedKeyOrder;
-(void)_addEntities:(id)arg1 toConfiguration:(id)arg2 ;
-(void)_finalizeIndexes;
-(BOOL)_hasEntityWithDerivedAttribute;
-(id)description;
-(id)_entityVersionHashesDigestFrom:(id)arg1 ;
-(BOOL)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
-(void)setEntities:(id)arg1 forConfiguration:(id)arg2 ;
-(id)_entityForName:(id)arg1 ;
-(id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1 ;
@end
