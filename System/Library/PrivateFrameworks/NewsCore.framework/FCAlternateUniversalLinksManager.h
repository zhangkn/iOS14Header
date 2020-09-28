/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCBoostableOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCFetchedValueManagerObserving.h>

@protocol FCContentContext;
@class FCAASAFileManager, FCFetchedValueManager, NSURL, NSString, FCBundleSubscriptionManager, FCBundlePurchaseIDsFetchedValueManager, FCKeyValueStore, FCBoostableOperationThrottler;

@interface FCAlternateUniversalLinksManager : NSObject <FCAppActivityObserving, FCBoostableOperationThrottlerDelegate, FCFetchedValueManagerObserving> {

	FCAASAFileManager* _fileManager;
	FCFetchedValueManager* _fileManifestManager;
	NSURL* _containerDirectoryFileURL;
	NSString* _alternateAssetsDirectoryName;
	id<FCContentContext> _contentContext;
	FCBundleSubscriptionManager* _bundleSubscriptionManager;
	FCBundlePurchaseIDsFetchedValueManager* _bundlePurchaseIDsManager;
	FCKeyValueStore* _lastWrittenManifestStore;
	FCBoostableOperationThrottler* _updateThrottler;

}

@property (nonatomic,copy,readonly) NSURL * containerDirectoryFileURL;                                         //@synthesize containerDirectoryFileURL=_containerDirectoryFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * alternateAssetsDirectoryName;                                   //@synthesize alternateAssetsDirectoryName=_alternateAssetsDirectoryName - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                                            //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCBundleSubscriptionManager * bundleSubscriptionManager;                        //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (nonatomic,readonly) FCAASAFileManager * fileManager;                                                //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) FCBundlePurchaseIDsFetchedValueManager * bundlePurchaseIDsManager;              //@synthesize bundlePurchaseIDsManager=_bundlePurchaseIDsManager - In the implementation block
@property (nonatomic,readonly) FCFetchedValueManager * fileManifestManager;                                    //@synthesize fileManifestManager=_fileManifestManager - In the implementation block
@property (nonatomic,readonly) FCKeyValueStore * lastWrittenManifestStore;                                     //@synthesize lastWrittenManifestStore=_lastWrittenManifestStore - In the implementation block
@property (nonatomic,readonly) FCBoostableOperationThrottler * updateThrottler;                                //@synthesize updateThrottler=_updateThrottler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCAASAFileManager *)fileManager;
-(FCBundleSubscriptionManager *)bundleSubscriptionManager;
-(id<FCContentContext>)contentContext;
-(FCBoostableOperationThrottler *)updateThrottler;
-(NSString *)alternateAssetsDirectoryName;
-(void)fetchedObjectManager:(id)arg1 valueDidChange:(id)arg2 ;
-(id)initWithContainerDirectoryFileURL:(id)arg1 appActivityMonitor:(id)arg2 alternateAssetsDirectoryName:(id)arg3 contentContext:(id)arg4 purchaseController:(id)arg5 bundleSubscriptionManager:(id)arg6 ;
-(NSURL *)containerDirectoryFileURL;
-(id)init;
-(FCBundlePurchaseIDsFetchedValueManager *)bundlePurchaseIDsManager;
-(FCKeyValueStore *)lastWrittenManifestStore;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)updateWithCompletionHandler:(/*^block*/id)arg1 ;
-(FCFetchedValueManager *)fileManifestManager;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end
