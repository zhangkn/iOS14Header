/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAWorker.h>

@interface PHAMADWorker : PHAWorker {

	os_unfair_lock_s _lock;
	BOOL _turboProcessingEnabled;

}
+(short)workerType;
+(long long)applicationDataFolderIdentifier;
+(BOOL)mediaanalysisdProcessingEnabled;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(id)statusAsDictionary;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
@end

