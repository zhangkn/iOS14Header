/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, HDDatabaseMigrationTransaction;

@interface HDDatabaseSchemaManager : NSObject {

	NSMutableSet* _createdDatabaseNames;
	HDDatabaseMigrationTransaction* _transaction;

}
-(id)initWithTransaction:(id)arg1 ;
-(BOOL)setVersion:(long long)arg1 schema:(id)arg2 protectionClass:(long long)arg3 error:(id*)arg4 ;
-(long long)currentVersionForSchema:(id)arg1 protectionClass:(long long)arg2 error:(id*)arg3 ;
-(id)_schemaTableNameForDatabaseName:(id)arg1 ;
-(BOOL)_createSchemaMigrationTableIfNeededForDatabaseName:(id)arg1 error:(id*)arg2 ;
@end
