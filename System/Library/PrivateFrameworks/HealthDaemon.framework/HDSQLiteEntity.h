/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSQLiteEntity <NSObject>
@required
+(id)uniquedColumns;
+(BOOL)isTemporary;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+(id)databaseName;
+(id)databaseTable;
+(id)foreignKeys;
+(id)joinClausesForProperty:(id)arg1;
+(id)privateSubEntities;
+(id)orderingTermForSortDescriptor:(id)arg1;
+(id)checkConstraints;
+(id)tableAliases;
+(void)enumerateColumnsWithBlock:(/*^block*/id)arg1;
+(id)createTableSQL;
+(id)indices;
+(Class)entityClassForEnumeration;
+(id)disambiguatedSQLForProperty:(id)arg1;
+(id)disambiguatedDatabaseTable;
+(id)deleteStatementWithProperty:(id)arg1 database:(id)arg2;
+(Class)entityForProperty:(id)arg1;
+(id)allDatabaseColumnNames;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2;
-(BOOL)getValuesForProperties:(id)arg1 database:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4;
-(BOOL)getValuesForProperties:(id)arg1 database:(id)arg2 handler:(/*^block*/id)arg3;
-(id)valueForProperty:(id)arg1 database:(id)arg2;
-(BOOL)booleanForProperty:(id)arg1 database:(id)arg2;
-(id)dateForProperty:(id)arg1 database:(id)arg2;
-(id)numberForProperty:(id)arg1 database:(id)arg2;
-(id)stringForProperty:(id)arg1 database:(id)arg2;
-(id)UUIDForProperty:(id)arg1 database:(id)arg2;
-(void)willDeleteFromDatabase:(id)arg1;

@end
