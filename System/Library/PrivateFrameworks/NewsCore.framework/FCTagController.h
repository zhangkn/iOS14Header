/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCTagsFetchOperationDelegate.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@protocol FCCoreConfigurationManager;
@class FCCKContentDatabase, FCAssetManager, FCTagRecordSource, NSCache, FCOperationThrottler, NSMutableDictionary, NSString;

@interface FCTagController : NSObject <FCTagsFetchOperationDelegate, FCCoreConfigurationObserving, FCOperationThrottlerDelegate, FCJSONEncodableObjectProviding> {

	FCCKContentDatabase* _contentDatabase;
	FCAssetManager* _assetManager;
	FCTagRecordSource* _tagRecordSource;
	id<FCCoreConfigurationManager> _configurationManager;
	NSCache* _fastCache;
	FCOperationThrottler* _tagPrefetchThrottler;
	NSMutableDictionary* _prefetchedTags;

}

@property (nonatomic,retain) FCCKContentDatabase * contentDatabase;                            //@synthesize contentDatabase=_contentDatabase - In the implementation block
@property (nonatomic,retain) FCAssetManager * assetManager;                                    //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) FCTagRecordSource * tagRecordSource;                              //@synthesize tagRecordSource=_tagRecordSource - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) NSCache * fastCache;                                              //@synthesize fastCache=_fastCache - In the implementation block
@property (nonatomic,retain) FCOperationThrottler * tagPrefetchThrottler;                      //@synthesize tagPrefetchThrottler=_tagPrefetchThrottler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * prefetchedTags;                             //@synthesize prefetchedTags=_prefetchedTags - In the implementation block
@property (assign,nonatomic) BOOL shouldPrefetchGlobalTags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isTagAllowed:(id)arg1 ;
+(BOOL)isTagAllowedInContentStoreFront:(id)arg1 ;
-(BOOL)shouldPrefetchGlobalTags;
-(id)slowCachedTagsForIDs:(id)arg1 ;
-(void)_fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setTagPrefetchThrottler:(FCOperationThrottler *)arg1 ;
-(FCTagRecordSource *)tagRecordSource;
-(void)_refreshTagsBasedOnAgeForTagIDs:(id)arg1 ;
-(id)slowCachedTagForID:(id)arg1 ;
-(void)setPrefetchedTags:(NSMutableDictionary *)arg1 ;
-(id)expectedFastCachedTagForID:(id)arg1 ;
-(void)dealloc;
-(void)fetchTagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setAssetManager:(FCAssetManager *)arg1 ;
-(void)fetchTagsForTagIDs:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)tagsForTagIDs:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(id)tagsForTagIDs:(id)arg1 ;
-(id)fetchOperationForTagsWithIDs:(id)arg1 ;
-(void)_fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSCache *)fastCache;
-(void)saveTagsToCache:(id)arg1 ;
-(id)init;
-(id)tagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 predicate:(/*^block*/id)arg3 ;
-(void)tagsFetchOperation:(id)arg1 didFetchTags:(id)arg2 ;
-(FCAssetManager *)assetManager;
-(void)fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)fastCachedTagForID:(id)arg1 ;
-(void)setContentDatabase:(FCCKContentDatabase *)arg1 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(void)setFastCache:(NSCache *)arg1 ;
-(void)setTagRecordSource:(FCTagRecordSource *)arg1 ;
-(void)setShouldPrefetchGlobalTags:(BOOL)arg1 ;
-(id)fetchOperationForTagsIncludingChildrenWithIDs:(id)arg1 softMaxAge:(double)arg2 ;
-(void)fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(FCOperationThrottler *)tagPrefetchThrottler;
-(id)fetchOperationForTagsWithIDs:(id)arg1 includeParents:(BOOL)arg2 ;
-(FCCKContentDatabase *)contentDatabase;
-(id)jsonEncodableObject;
-(id)_cachedTagForTagID:(id)arg1 fastCacheOnly:(BOOL)arg2 ;
-(id)fastCachedTagsForIDs:(id)arg1 ;
-(id)_cachedTagsForTagIDs:(id)arg1 fastCacheOnly:(BOOL)arg2 ;
-(id)initWithContentDatabase:(id)arg1 assetManager:(id)arg2 tagRecordSource:(id)arg3 configurationManager:(id)arg4 ;
-(id)fetchOperationForTagsWithIDs:(id)arg1 includeChildren:(BOOL)arg2 ;
-(NSMutableDictionary *)prefetchedTags;
@end

