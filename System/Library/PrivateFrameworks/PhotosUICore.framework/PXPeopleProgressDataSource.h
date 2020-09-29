/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class PHFetchResult, NSObject, NSString;

@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {

	BOOL _isFaceProcessingComplete;
	BOOL _countCacheValid;
	BOOL _faceProcessingComplete;
	unsigned long long _cachedUnlockValue;
	unsigned long long _pendingCount;
	unsigned long long _processedCount;
	unsigned long long _totalCount;
	PHFetchResult* _homeResult;
	PHFetchResult* _verifyResult;
	NSObject*<OS_dispatch_queue> _scanningProgressQueue;
	NSObject*<OS_dispatch_queue> _userInteractiveQueue;

}

@property (assign,nonatomic) unsigned long long pendingCount;                                          //@synthesize pendingCount=_pendingCount - In the implementation block
@property (assign,nonatomic) unsigned long long processedCount;                                        //@synthesize processedCount=_processedCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalCount;                                            //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,retain) PHFetchResult * homeResult;                                               //@synthesize homeResult=_homeResult - In the implementation block
@property (nonatomic,retain) PHFetchResult * verifyResult;                                             //@synthesize verifyResult=_verifyResult - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> scanningProgressQueue;                               //@synthesize scanningProgressQueue=_scanningProgressQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> userInteractiveQueue;                                //@synthesize userInteractiveQueue=_userInteractiveQueue - In the implementation block
@property (getter=isCountCacheValid) BOOL countCacheValid;                                             //@synthesize countCacheValid=_countCacheValid - In the implementation block
@property (assign,getter=isFaceProcessingComplete,nonatomic) BOOL faceProcessingComplete;              //@synthesize faceProcessingComplete=_faceProcessingComplete - In the implementation block
@property (assign,nonatomic) unsigned long long cachedUnlockValue;                                     //@synthesize cachedUnlockValue=_cachedUnlockValue - In the implementation block
@property (nonatomic,readonly) unsigned long long totalAssetCount; 
@property (nonatomic,readonly) unsigned long long pendingAssetCount; 
@property (nonatomic,readonly) unsigned long long processedAssetCount; 
@property (nonatomic,readonly) unsigned long long homeMembersCount; 
@property (nonatomic,readonly) BOOL isFaceProcessingComplete;                                          //@synthesize isFaceProcessingComplete=_isFaceProcessingComplete - In the implementation block
@property (nonatomic,readonly) BOOL isPersonPromoterDone; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_updateProgressFromFaceAnalysisProgressDictionary:(id)arg1 ;
-(void)_appWillEnterForeground;
-(void)setHomeResult:(PHFetchResult *)arg1 ;
-(void)asyncUpdatePeopleProgressWithReportBlock:(/*^block*/id)arg1 ;
-(unsigned long long)processedCount;
-(void)setTotalCount:(unsigned long long)arg1 ;
-(void)syncUpdatePeopleProgressWithReportBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)isPersonPromoterDone;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)setPendingCount:(unsigned long long)arg1 ;
-(BOOL)isCountCacheValid;
-(unsigned long long)processedAssetCount;
-(unsigned long long)pendingAssetCount;
-(unsigned long long)totalCount;
-(unsigned long long)homeMembersCount;
-(id)init;
-(unsigned long long)pendingCount;
-(PHFetchResult *)homeResult;
-(PHFetchResult *)verifyResult;
-(void)updateProgressIfNeededWithReportBlock:(/*^block*/id)arg1 ;
-(unsigned long long)totalAssetCount;
-(void)setFaceProcessingComplete:(BOOL)arg1 ;
-(BOOL)isFaceProcessingComplete;
-(BOOL)isFaceProcessingComplete;
-(NSObject*<OS_dispatch_queue>)scanningProgressQueue;
-(void)loadQueryData;
-(void)setCountCacheValid:(BOOL)arg1 ;
-(void)setVerifyResult:(PHFetchResult *)arg1 ;
-(void)setCachedUnlockValue:(unsigned long long)arg1 ;
-(void)setProcessedCount:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)userInteractiveQueue;
-(unsigned long long)cachedUnlockValue;
@end
