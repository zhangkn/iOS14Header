/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface PXSearchResultsAssetCurator : NSObject
+(id)_fetchAssetsForAssetUUIDs:(id)arg1 ;
+(void)performCurationForAssetResults:(id)arg1 searchQuery:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_sampledAssetUUIDsFromAssetResults:(id)arg1 curatedAssetLimit:(unsigned long long)arg2 priorityAssetUUID:(id)arg3 maxNumberToSample:(unsigned long long)arg4 rangeToSample:(unsigned long long)arg5 ;
+(id)_fetchResultForCuratedAssets:(id)arg1 ;
+(id)_sortedCuratedAssetsFromSampledAssets:(id)arg1 priorityAssetUUID:(id)arg2 curatedAssetLimit:(unsigned long long)arg3 ;
@end
