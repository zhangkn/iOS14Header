/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/MAPersistentStoreProtocol.h>

@class NSUUID, NSURL, NSMutableDictionary, NSString;

@interface MADegasPersistentStore : NSObject <MAPersistentStoreProtocol> {

	Database* _database;
	unsigned long long _markerCounter;
	unsigned long long _batchCounter;
	os_unfair_lock_s _lock;
	unsigned long long _transactionCounter;
	NSURL* _fileURL;
	NSMutableDictionary* _degasLabelByLabelName;
	NSMutableDictionary* _labelNameByDegasLabel;
	NSMutableDictionary* _degasLabelByDomain;
	NSMutableDictionary* _domainByDegasLabel;
	NSMutableDictionary* _attrIdByPropertyName;
	NSMutableDictionary* _propertyNameByAttrId;

}

@property (nonatomic,retain) NSMutableDictionary * degasLabelByLabelName;              //@synthesize degasLabelByLabelName=_degasLabelByLabelName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * labelNameByDegasLabel;              //@synthesize labelNameByDegasLabel=_labelNameByDegasLabel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * degasLabelByDomain;                 //@synthesize degasLabelByDomain=_degasLabelByDomain - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * domainByDegasLabel;                 //@synthesize domainByDegasLabel=_domainByDegasLabel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attrIdByPropertyName;               //@synthesize attrIdByPropertyName=_attrIdByPropertyName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * propertyNameByAttrId;               //@synthesize propertyNameByAttrId=_propertyNameByAttrId - In the implementation block
@property (nonatomic,readonly) BOOL hasMarker; 
@property (nonatomic,readonly) NSUUID * graphIdentifier; 
@property (assign,nonatomic) unsigned long long graphVersion; 
@property (nonatomic,readonly) NSURL * fileURL;                                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) BOOL doesCascadeEdgeDelete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)hasMarker:(id)arg1 ;
+(void)deleteClosedDatabaseFilesAtBaseURL:(id)arg1 ;
+(id)errorForKGDBReturnCode:(int)arg1 description:(id)arg2 ;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2 ;
+(void)performBitmapTest;
+(void)deleteClosedDatabaseFilesAtStoreURL:(id)arg1 ;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)_markerFilePathForPersistentStoreFileURL:(id)arg1 ;
+(id)persistentStoreFileExtension;
+(void)deleteMarkerAtURL:(id)arg1 ;
+(BOOL)setMarkerAtURL:(id)arg1 ;
-(void)save:(/*^block*/id)arg1 ;
-(void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)closePersistentStore;
-(void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(Database*)database;
-(void)removeModelNodesPropertiesForIdentifiers:(id)arg1 ;
-(void)setMarker;
-(void)_setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)loadLabelsAndDomains;
-(unsigned long long)graphVersion;
-(void)enumerateModelNodesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSURL *)fileURL;
-(NSMutableDictionary *)propertyNameByAttrId;
-(void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(NSMutableDictionary *)degasLabelByLabelName;
-(NSMutableDictionary *)domainByDegasLabel;
-(void)setDegasLabelByLabelName:(NSMutableDictionary *)arg1 ;
-(void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)removePreviousPersistenceStore;
-(void)removeModelNodeForIdentifier:(unsigned long long)arg1 ;
-(id)localLabelNameForDegasLabel:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)degasLabelIdForLabelName:(id)arg1 ;
-(void)_setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)enumeratePropertiesForCursor:(AttributeValueCursor*)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateModelEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)setNodeWeight:(float)arg1 forIdentifier:(long long)arg2 ;
-(void)enumerateModelNodesWithBlock:(/*^block*/id)arg1 ;
-(short)matisseDomainForDegasLabel:(unsigned long long)arg1 ;
-(void)enterBatch;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2 ;
-(void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3 ;
-(void)removeModelEdgeForIdentifier:(unsigned long long)arg1 ;
-(id)initWithFileURL:(id)arg1 options:(long long)arg2 ;
-(id)_markerFilePath;
-(unsigned long long)degasLabelIdForMatisseDomain:(unsigned short)arg1 ;
-(void)leaveTransactionWithRollback;
-(void)enumerateModelNodesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2 ;
-(void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3 ;
-(void)removeModelEdgesForIdentifiers:(id)arg1 ;
-(void)removeModelEdgesPropertiesForIdentifiers:(id)arg1 ;
-(void)removeModelEdgePropertiesForIdentifier:(long long)arg1 ;
-(BOOL)hasMarker;
-(void)setGraphVersion:(unsigned long long)arg1 ;
-(unsigned long long)attrIdForPropertyName:(id)arg1 sampleValue:(id)arg2 ;
-(void)setLabel:(id)arg1 forDegasLabel:(unsigned long long)arg2 ;
-(void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)loadPropertyNames;
-(void)removeModelNodesForIdentifiers:(id)arg1 ;
-(void)setPropertyNameByAttrId:(NSMutableDictionary *)arg1 ;
-(void)enumerateModelNodesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)attrIdByPropertyName;
-(void)beginTransactionIfNeeded;
-(void)invalidatePersistentStores;
-(void)invalidateMemoryCaches;
-(void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)leaveTransaction;
-(void)leaveBatch;
-(id)labelforDegasLabelId:(unsigned long long)arg1 ;
-(void)setEdgeWeight:(float)arg1 forIdentifier:(long long)arg2 ;
-(void)addEdge:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(id)propertyNameForAttrId:(unsigned long long)arg1 ;
-(NSMutableDictionary *)labelNameByDegasLabel;
-(id)returnLabelAndDomain:(short*)arg1 forDegasLabels:(Bitmap*)arg2 ;
-(void)removeModelNodePropertiesForIdentifier:(long long)arg1 ;
-(void)setDegasLabelByDomain:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)degasLabelByDomain;
-(void)addNode:(id)arg1 requiresTesting:(BOOL)arg2 ;
-(void)enumerateModelEdgesPropertiesWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateModelNodesForCursor:(NodeCursor*)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)propertyValueForCursor:(AttributeValueCursor*)arg1 ;
-(void)setLabelNameByDegasLabel:(NSMutableDictionary *)arg1 ;
-(BOOL)doesCascadeEdgeDelete;
-(void)setAttrIdByPropertyName:(NSMutableDictionary *)arg1 ;
-(void)setDomainByDegasLabel:(NSMutableDictionary *)arg1 ;
-(void)_enumerateModelEdgesForCursor:(EdgeCursor*)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)deleteMarker;
-(NSUUID *)graphIdentifier;
-(void)checkTransaction;
-(BOOL)migrateToURL:(id)arg1 error:(id*)arg2 ;
@end
