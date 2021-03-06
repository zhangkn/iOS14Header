/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, NSString;

@interface VCPDatabaseReader : NSObject {

	NSObject*<OS_dispatch_queue> _sqlSerialQueue;
	NSString* _filepath;
	sqlite3Ref _database;

}
+(BOOL)shouldQueryInternalFields;
+(id)databaseForPhotoLibrary:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)dealloc;
-(id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2 ;
-(int)parseHeader:(sqlite3_stmtRef)arg1 startColumn:(int)arg2 analysis:(id)arg3 ;
-(int)parseResults:(sqlite3_stmtRef)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4 ;
-(int)executeDatabaseBlock:(/*^block*/id)arg1 ;
-(int)queryHeaderForAsset:(id)arg1 analysis:(id*)arg2 assetId:(long long*)arg3 ;
-(int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2 ;
-(int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3 ;
-(int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3 ;
-(int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3 ;
-(id)queryBlacklistedLocalIdentifiers;
-(id)queryAnalysisPropertiesForAsset:(id)arg1 ;
-(id)queryLocalIdentifiersForTaskID:(unsigned long long)arg1 withStatus:(unsigned long long)arg2 ;
-(int)openDatabase;
-(void)closeDatabase;
-(BOOL)isAssetBlacklisted:(id)arg1 blacklistDate:(id*)arg2 ;
-(id)queryAssetsAnalyzedSince:(id)arg1 ;
-(id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2 ;
-(id)queryAnalysisPropertiesForAssets:(id)arg1 ;
-(id)blacklistedLocalIdentifiersFromAssets:(id)arg1 ;
-(id)queryFailedProcessingStatusFromAssets:(id)arg1 forTaskID:(unsigned long long)arg2 ;
-(unsigned long long)countForTaskID:(unsigned long long)arg1 withProcessingStatus:(unsigned long long)arg2 ;
-(id)queryAnalysisForAsset:(id)arg1 ;
@end

