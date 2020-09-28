/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class HDSQLiteDatabase, NSObject, NSString;

@interface _HDSQLiteDatabaseWrapper : NSObject {

	HDSQLiteDatabase* _database;
	NSObject*<OS_dispatch_group> _flushGroup;
	unsigned long long _generation;
	unsigned long long _threadID;
	unsigned long long _options;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;                          //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> flushGroup;              //@synthesize flushGroup=_flushGroup - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;                        //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) unsigned long long threadID;                          //@synthesize threadID=_threadID - In the implementation block
@property (assign,nonatomic) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeString; 
-(HDSQLiteDatabase *)database;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)typeString;
-(unsigned long long)options;
-(unsigned long long)generation;
-(id)initWithDatabase:(id)arg1 flushGroup:(id)arg2 generation:(unsigned long long)arg3 ;
-(NSObject*<OS_dispatch_group>)flushGroup;
-(unsigned long long)threadID;
-(void)captureThreadInfo;
@end
