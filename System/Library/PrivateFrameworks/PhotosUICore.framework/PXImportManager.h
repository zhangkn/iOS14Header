/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMapTable, NSProgress;

@interface PXImportManager : NSObject {

	NSMapTable* _progressToProvidersMapping;
	NSMapTable* _progressToCompletionHandlerMapping;
	NSMapTable* _progressToSharedSourcesCompletionHandlerMapping;
	NSMapTable* _progressToErrorsMapping;
	NSMapTable* _providersToImportedResultObjectMapping;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(id)supportedTypeIdentifiers;
+(id)defaultManager;
-(void)fetchAssetsFromDrop:(id)arg1 importIfNeeded:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)importSharedSourcesForDragItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(id)importDragItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addProgress:(id)arg1 forItemProviders:(id)arg2 sharedSourceCompletionHandler:(/*^block*/id)arg3 ;
-(void)_handleCompletionOfImportForItemProvider:(id)arg1 resultObject:(id)arg2 progress:(id)arg3 error:(id)arg4 ;
-(void)_addProgress:(id)arg1 forItemProviders:(id)arg2 assetCreationCompletionHandler:(/*^block*/id)arg3 ;
-(void)_addProgress:(id)arg1 forItemProviders:(id)arg2 ;
-(void)_removeObserverFromProgress:(id)arg1 ;
-(id)_assetsForImportedItemProviders:(id)arg1 ;
-(id)_sourcesForItemProviders:(id)arg1 ;
@end
