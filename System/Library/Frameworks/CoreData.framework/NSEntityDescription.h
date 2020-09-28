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

@class NSString, NSData, NSManagedObjectModel, NSMutableDictionary, NSDictionary, NSArray, NSExpression;

@interface NSEntityDescription : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {

	int _cd_rc;
	id _snapshotClass;
	NSString* _versionHashModifier;
	NSData* _versionHash;
	NSManagedObjectModel* _model;
	NSString* _classNameForEntity;
	Class _instanceClass;
	NSString* _name;
	NSEntityDescription* _rootentity;
	NSEntityDescription* _superentity;
	NSMutableDictionary* _subentities;
	NSMutableDictionary* _properties;
	id _propertyMapping;
	NSRange* _propertyRanges;
	struct {
		unsigned _isAbstract : 1;
		unsigned _shouldValidateOnSave : 1;
		unsigned _isImmutable : 1;
		unsigned _isFlattened : 1;
		unsigned _skipValidation : 1;
		unsigned _hasPropertiesIndexedBySpotlight : 1;
		unsigned _hasPropertiesStoredInTruthFile : 1;
		unsigned _rangesAreInDataBlob : 1;
		unsigned _hasAttributesWithExternalDataReferences : 1;
		unsigned _hasNonstandardPrimitiveProperties : 2;
		unsigned _hasUniqueProperties : 1;
		unsigned _hasChildrenWithUniqueProperties : 1;
		unsigned _validationUniqueProperties : 1;
		unsigned _isPersistentHistoryEntity : 1;
		unsigned _hasAttributesWithFileBackedFutures : 1;
		unsigned _reservedEntityDescription : 16;
	}  _entityDescriptionFlags;
	ExtraEntityIVars* _extraIvars;
	NSMutableDictionary* _userInfo;
	id _flattenedSubentities;
	id* _kvcPropertyAccessors;
	long long _modelsReferenceIDForEntity;

}

@property (readonly) NSManagedObjectModel * managedObjectModel; 
@property (copy) NSString * managedObjectClassName; 
@property (copy) NSString * name; 
@property (getter=isAbstract) BOOL abstract; 
@property (copy,readonly) NSDictionary * subentitiesByName; 
@property (retain) NSArray * subentities; 
@property (readonly) NSEntityDescription * superentity; 
@property (copy,readonly) NSDictionary * propertiesByName; 
@property (retain) NSArray * properties; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (copy,readonly) NSDictionary * attributesByName; 
@property (copy,readonly) NSDictionary * relationshipsByName; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * versionHashModifier; 
@property (copy) NSString * renamingIdentifier; 
@property (copy) NSArray * indexes; 
@property (retain) NSArray * uniquenessConstraints; 
@property (retain) NSArray * compoundIndexes; 
@property (nonatomic,retain) NSExpression * coreSpotlightDisplayNameExpression; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_MOClassName;
+(id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7 ;
-(NSManagedObjectModel *)managedObjectModel;
-(BOOL)_isEditable;
-(void)_throwIfNotEditable;
-(NSArray *)indexes;
-(void)setProperties:(NSArray *)arg1 ;
-(BOOL)_tryRetain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setSubentities:(NSArray *)arg1 ;
-(oneway void)release;
-(void)_createCachesAndOptimizeState;
-(void)dealloc;
-(id)attributeKeys;
-(void)_flattenProperties;
-(void)setRenamingIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)attributesByName;
-(BOOL)_isSchemaEqual:(id)arg1 ;
-(id)init;
-(NSDictionary *)relationshipsByName;
-(id)_initWithName:(id)arg1 ;
-(NSArray *)properties;
-(NSDictionary *)propertiesByName;
-(unsigned long long)retainCount;
-(NSDictionary *)userInfo;
-(NSEntityDescription *)superentity;
-(id)elementID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)uniquenessConstraints;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)subentitiesByName;
-(BOOL)isKindOfEntity:(id)arg1 ;
-(void)setManagedObjectClassName:(NSString *)arg1 ;
-(void)setUniquenessConstraints:(NSArray *)arg1 ;
-(NSString *)renamingIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)versionHash;
-(BOOL)isAbstract;
-(NSExpression *)coreSpotlightDisplayNameExpression;
-(NSString *)versionHashModifier;
-(void)setCompoundIndexes:(NSArray *)arg1 ;
-(NSString *)managedObjectClassName;
-(void)setCoreSpotlightDisplayNameExpression:(NSExpression *)arg1 ;
-(void)_addProperty:(id)arg1 ;
-(BOOL)_isFlattened;
-(void)setAbstract:(BOOL)arg1 ;
-(id)_versionHashInStyle:(unsigned long long)arg1 ;
-(id)relationshipsWithDestinationEntity:(id)arg1 ;
-(void)setVersionHashModifier:(NSString *)arg1 ;
-(void)setIndexes:(NSArray *)arg1 ;
-(NSArray *)compoundIndexes;
-(void)setElementID:(id)arg1 ;
-(void)_setIsFlattened:(BOOL)arg1 ;
-(id)keypathsToPrefetchForDeletePropagation;
-(id)_localRelationshipNamed:(id)arg1 ;
-(id)toManyRelationshipKeys;
-(id)toOneRelationshipKeys;
-(id)inverseForRelationshipKey:(id)arg1 ;
-(BOOL)_hasDerivedAttributes;
-(void)_addSubentity:(id)arg1 ;
-(BOOL)_isDeallocating;
-(unsigned long long)hash;
-(id)retain;
-(NSString *)name;
-(NSArray *)subentities;
-(id)description;
@end
