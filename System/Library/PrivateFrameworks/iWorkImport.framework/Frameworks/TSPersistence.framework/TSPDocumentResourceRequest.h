/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSUResourceFileURLProvider.h>
#import <TSPersistence/TSUResourceRequest.h>
#import <TSPersistence/TSUResourceRequestObservable.h>

@protocol OS_dispatch_queue, TSUResourceRequest;
@class NSSet, TSPDocumentResourceCache, TSUObserverNotifier, NSObject, NSString, NSProgress;

@interface TSPDocumentResourceRequest : NSObject <TSUResourceFileURLProvider, TSUResourceRequest, TSUResourceRequestObservable> {

	TSPDocumentResourceCache* _documentResourceCache;
	NSSet* _documentResourceInfos;
	NSSet* _tags;
	TSUObserverNotifier* _observerNotifier;
	NSObject*<OS_dispatch_queue> _accessQueue;
	id<TSUResourceRequest> _accessQueue_backingResourceRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long estimatedDownloadSize; 
@property (readonly) NSSet * tags; 
@property (readonly) NSProgress * progress; 
-(NSSet *)tags;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(NSProgress *)progress;
-(NSString *)description;
-(unsigned long long)estimatedDownloadSize;
-(id)fileURLForResourceInfo:(id)arg1 ;
-(void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performResourceAccessUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDocumentResourceInfos:(id)arg1 tags:(id)arg2 documentResourceCache:(id)arg3 ;
-(id)initWithDocumentResourceInfos:(id)arg1 documentResourceCache:(id)arg2 ;
-(id)newBackingResourceRequestForDocumentResourceInfos:(id)arg1 documentResourceCache:(id)arg2 ;
-(void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)remoteURLForDocumentResourceInfo:(id)arg1 ;
-(id)urlForResourceInfo:(id)arg1 ;
@end
