/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TransparencyLogSession, TransparencyManagedDataStore;

@interface TransparencyLogClient : NSObject {

	TransparencyLogSession* _session;
	TransparencyManagedDataStore* _dataStore;

}

@property (retain) TransparencyLogSession * session;                      //@synthesize session=_session - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)setSession:(TransparencyLogSession *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(TransparencyLogSession *)session;
-(void)deleteDownloadId:(id)arg1 ;
-(BOOL)needsRetry:(id)arg1 ;
-(BOOL)fetch:(id)arg1 shouldRetry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)fetch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)download:(id)arg1 retry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithBackgroundSession:(id)arg1 dataStore:(id)arg2 ;
-(BOOL)fetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)downloadRequest:(id)arg1 retry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
