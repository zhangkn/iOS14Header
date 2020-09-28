/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCCKDatabaseMigrator.h>

@protocol FCCKDatabaseRecordMiddleware;
@class FCCKPrivateDatabaseSchema, NSSet, NSString;

@interface FCCKDatabaseEncryptedZoneMigrator : NSObject <FCCKDatabaseMigrator> {

	FCCKPrivateDatabaseSchema* _sourceSchema;
	id<FCCKDatabaseRecordMiddleware> _recordEncryptionMiddleware;
	/*^block*/id _deprecatedBlock;
	NSSet* _sourceZoneNames;

}

@property (nonatomic,retain) FCCKPrivateDatabaseSchema * sourceSchema;                                 //@synthesize sourceSchema=_sourceSchema - In the implementation block
@property (nonatomic,retain) id<FCCKDatabaseRecordMiddleware> recordEncryptionMiddleware;              //@synthesize recordEncryptionMiddleware=_recordEncryptionMiddleware - In the implementation block
@property (nonatomic,copy) id deprecatedBlock;                                                         //@synthesize deprecatedBlock=_deprecatedBlock - In the implementation block
@property (nonatomic,retain) NSSet * sourceZoneNames;                                                  //@synthesize sourceZoneNames=_sourceZoneNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2 ;
-(void)setSourceZoneNames:(NSSet *)arg1 ;
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isEnabledForDatabase:(id)arg1 ;
-(BOOL)_shouldMigrateRecord:(id)arg1 database:(id)arg2 ;
-(FCCKPrivateDatabaseSchema *)sourceSchema;
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2 ;
-(id)deprecatedBlock;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2 ;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1 ;
-(id<FCCKDatabaseRecordMiddleware>)recordEncryptionMiddleware;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2 ;
-(void)setSourceSchema:(FCCKPrivateDatabaseSchema *)arg1 ;
-(NSSet *)sourceZoneNames;
-(void)setDeprecatedBlock:(id)arg1 ;
-(id)initWithSourceSchema:(id)arg1 recordEncryptionMiddleware:(id)arg2 deprecatedBlock:(/*^block*/id)arg3 ;
-(void)setRecordEncryptionMiddleware:(id<FCCKDatabaseRecordMiddleware>)arg1 ;
@end
