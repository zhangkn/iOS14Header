/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSEntityDescription * entity; 
@property (__weak,readonly) NSPersistentStore * persistentStore; 
@property (getter=isTemporaryID,readonly) BOOL temporaryID; 
+(void)initialize;
+(long long)version;
+(id)unarchivedScalarObjectIDsFromData:(id)arg1 withCoordinator:(id)arg2 ;
+(id)_newArchiveForScalarObjectIDs:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(BOOL)_isPersistentStoreAlive;
-(NSPersistentStore *)persistentStore;
-(id)entityName;
-(NSEntityDescription *)entity;
-(BOOL)_tryRetain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_referenceData64;
-(long long)compare:(id)arg1 ;
-(id)_storeInfo1;
-(id)initWithCoder:(id)arg1 ;
-(id)_storeIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_referenceData;
-(BOOL)_preferReferenceData64;
-(BOOL)_isDeallocating;
-(int)_temporaryIDCounter;
-(id)URIRepresentation;
-(long long)_compareArbitraryValue:(id)arg1 toValue:(id)arg2 ;
-(BOOL)isTemporaryID;
-(id)_retainedURIString;
-(NSString *)description;
@end

