/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, WBSSQLiteDatabaseDelegate;
#import <SafariCore/SafariCore-Structs.h>
@class NSObject, NSURL, NSString, NSError;

@interface WBSSQLiteDatabase : NSObject {

	sqlite3Ref _handle;
	NSObject*<OS_dispatch_queue> _queue;
	id<WBSSQLiteDatabaseDelegate> _delegate;
	NSURL* _url;

}

@property (assign,nonatomic,__weak) id<WBSSQLiteDatabaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) sqlite3Ref handle;                                        //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) int lastErrorCode; 
@property (nonatomic,readonly) NSString * lastErrorMessage; 
@property (nonatomic,readonly) NSError * lastError; 
@property (nonatomic,readonly) long long lastInsertRowID; 
@property (nonatomic,readonly) long long changedRowCount; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
+(void)initialize;
+(id)_errorWithErrorCode:(int)arg1 ;
+(id)writeAheadLogURLForDatabaseURL:(id)arg1 ;
+(id)inMemoryDatabaseURL;
+(id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)arg1 ;
+(id)privateOnDiskDatabaseURL;
-(NSError *)lastError;
-(sqlite3Ref)handle;
-(int)close;
-(BOOL)executeQuery:(id)arg1 error:(id*)arg2 ;
-(id)fetchQuery:(id)arg1 ;
-(id)checkIntegrity;
-(long long)lastInsertRowID;
-(void)dealloc;
-(BOOL)openWithAccessType:(long long)arg1 vfs:(id)arg2 error:(id*)arg3 ;
-(id)fetchQuery:(id)arg1 stringArguments:(id)arg2 ;
-(BOOL)openWithAccessType:(long long)arg1 protectionType:(long long)arg2 vfs:(id)arg3 error:(id*)arg4 ;
-(BOOL)tryToPerformTransactionInBlock:(/*^block*/id)arg1 ;
-(BOOL)reportErrorWithCode:(int)arg1 query:(id)arg2 error:(id*)arg3 ;
-(NSString *)lastErrorMessage;
-(void)_reportSevereError:(id)arg1 ;
-(void)setDelegate:(id<WBSSQLiteDatabaseDelegate>)arg1 ;
-(BOOL)reportErrorWithCode:(int)arg1 statement:(sqlite3_stmtRef)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithURL:(id)arg1 queue:(id)arg2 ;
-(id<WBSSQLiteDatabaseDelegate>)delegate;
-(long long)changedRowCount;
-(int)checkpointWriteAheadLogWithLogFrameCount:(int*)arg1 checkpointedFrameCount:(int*)arg2 ;
-(NSURL *)url;
-(int)lastErrorCode;
-(BOOL)_openWithFlags:(int)arg1 vfs:(id)arg2 error:(id*)arg3 ;
-(BOOL)openWithAccessType:(long long)arg1 error:(id*)arg2 ;
-(BOOL)enableWAL:(id*)arg1 ;
@end
