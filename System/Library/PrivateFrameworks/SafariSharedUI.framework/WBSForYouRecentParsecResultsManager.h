/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSArray;

@interface WBSForYouRecentParsecResultsManager : WBSForYouRecommendationMediatorDataSource {

	NSCache* _cache;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,copy,readonly) NSArray * recentRecommendations; 
+(id)recommendationsMatchingTopic:(id)arg1 fromArray:(id)arg2 ;
-(void)appendResultsIfApplicable:(id)arg1 withDelayedExistenceCheck:(BOOL)arg2 ;
-(BOOL)_hasPermissibleResultTypeForResult:(id)arg1 ;
-(id)_bestAcceptableImageForSFResult:(id)arg1 ;
-(NSArray *)recentRecommendations;
-(void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)appendResultsIfApplicable:(id)arg1 ;
-(id)_cacheEnsuringExistence;
-(void)_createInternalQueueIfNecessary;
-(void)clearAllResults;
@end
