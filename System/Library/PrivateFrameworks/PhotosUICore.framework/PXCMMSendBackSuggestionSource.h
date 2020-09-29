/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXObservable.h>

@protocol OS_dispatch_queue;
@class NSObject, PXAssetsDataSource, PHMomentShare, PXCMMSendBackSuggestion, PXCMMContext;

@interface PXCMMSendBackSuggestionSource : PXObservable {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	unsigned long long _sourceType;
	BOOL _hasInitiatedFetchRequest;
	BOOL _shouldShowBanner;
	PXAssetsDataSource* _assetsDataSource;
	PHMomentShare* _originatingMomentShare;
	PXCMMSendBackSuggestion* _suggestion;
	PXCMMContext* _sendBackContext;

}

@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource;               //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (nonatomic,readonly) PHMomentShare * originatingMomentShare;              //@synthesize originatingMomentShare=_originatingMomentShare - In the implementation block
@property (nonatomic,readonly) PXCMMSendBackSuggestion * suggestion;                //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) PXCMMContext * sendBackContext;                      //@synthesize sendBackContext=_sendBackContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowBanner;                               //@synthesize shouldShowBanner=_shouldShowBanner - In the implementation block
+(id)new;
+(id)sendBackContextTimeLocationMatching:(id)arg1 sourceType:(unsigned long long)arg2 ;
+(id)sendBackContextOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 sourceType:(unsigned long long)arg3 ;
+(id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)_sendBackFetchResultUsingTimeLocationMatching:(id)arg1 ;
+(id)_assetsInDateRanges:(id)arg1 ;
+(id)_filterAssets:(id)arg1 byLocations:(id)arg2 maxDistanceMeters:(double)arg3 ;
-(PXAssetsDataSource *)assetsDataSource;
-(void)startLoading;
-(id)mutableChangeObject;
-(void)setSuggestion:(PXCMMSendBackSuggestion *)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(PXCMMSendBackSuggestion *)suggestion;
-(id)init;
-(id)initWithAssetsDataSource:(id)arg1 sourceType:(unsigned long long)arg2 originatingMomentShare:(id)arg3 ;
-(BOOL)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)arg1 ;
-(void)_fetchSuggestedSendBackContext;
-(id)_fetchSuggestedParticipantsForAssetCollection:(id)arg1 ;
-(void)_fetchQueue_fetchSuggestedSendBackContext;
-(void)setSendBackContext:(PXCMMContext *)arg1 ;
-(void)setShouldShowBanner:(BOOL)arg1 ;
-(id)_allMetadataAssets;
-(id)_createSendBackContext;
-(id)_sendBackFetchResultUsingPhotosGraph;
-(id)sendBackContextPhotosGraphBasedWithSourceType:(unsigned long long)arg1 ;
-(PHMomentShare *)originatingMomentShare;
-(PXCMMContext *)sendBackContext;
-(BOOL)shouldShowBanner;
@end
