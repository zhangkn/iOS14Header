/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPStreamDataStorage.h>
#import <TSPersistence/TSPDocumentResourceDataStorageInfo.h>

@protocol TSPDocumentResourceBundleProviderTSUResourceRequest;
@class TSPDocumentResourceInfo, TSUOnce, NSDataAsset, NSString;

@interface TSPDocumentResourceDataAssetStorage : TSPStreamDataStorage <TSPDocumentResourceDataStorageInfo> {

	id<TSPDocumentResourceBundleProvider><TSUResourceRequest> _resourceRequest;
	TSPDocumentResourceInfo* _documentResourceInfo;
	TSUOnce* _dataAssetOnceToken;
	NSDataAsset* _dataAsset;

}

@property (nonatomic,readonly) NSDataAsset * dataAsset; 
@property (nonatomic,readonly) id<TSUResourceRequest> resourceRequest; 
@property (nonatomic,readonly) TSPDocumentResourceInfo * documentResourceInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)pixelSize;
-(BOOL)needsDownload;
-(unsigned long long)length;
-(id)init;
-(BOOL)isReadable;
-(id)fallbackColor;
-(unsigned long long)encodedLength;
-(id<TSUResourceRequest>)resourceRequest;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(id)NSDataWithOptions:(unsigned long long)arg1 ;
-(id)documentResourceLocator;
-(TSPDocumentResourceInfo *)documentResourceInfo;
-(id)initWithResourceRequest:(id)arg1 documentResourceInfo:(id)arg2 ;
-(BOOL)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 packageWriter:(id)arg3 ;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSDataAsset *)dataAsset;
@end

