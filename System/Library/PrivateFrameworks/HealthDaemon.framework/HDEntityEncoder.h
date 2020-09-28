/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, HDDatabaseTransaction, HDSQLiteDatabase, NSDictionary;

@interface HDEntityEncoder : NSObject {

	HDProfile* _profile;
	HDDatabaseTransaction* _transaction;
	HDSQLiteDatabase* _database;
	Class _entityClass;
	NSDictionary* _encodingOptions;
	/*^block*/id _authorizationFilter;
	long long _purpose;
	HDEntityEncoder* _superclassEncoder;

}

@property (nonatomic,readonly) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDDatabaseTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) Class entityClass;                                //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * encodingOptions;              //@synthesize encodingOptions=_encodingOptions - In the implementation block
@property (nonatomic,copy,readonly) id authorizationFilter;                      //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,readonly) long long purpose;                                //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) HDEntityEncoder * superclassEncoder;              //@synthesize superclassEncoder=_superclassEncoder - In the implementation block
+(long long)estimatedEncodedSize;
-(HDSQLiteDatabase *)database;
-(id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 transaction:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(/*^block*/id)arg6 ;
-(void)finish;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(HDProfile *)profile;
-(Class)entityClass;
-(HDDatabaseTransaction *)transaction;
-(id)orderedProperties;
-(id)createBareObject;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
-(long long)purpose;
-(id)authorizationFilter;
-(BOOL)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(id)objectForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(NSDictionary *)encodingOptions;
-(HDEntityEncoder *)superclassEncoder;
-(id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(/*^block*/id)arg6 ;
-(void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
@end
