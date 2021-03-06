/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <AssetsLibraryServices/PLThumbnailManagerCore.h>

@class NSMutableSet, NSMutableArray, NSLock, PLThumbnailCascadingDownscaleContext, NSArray;

@interface PLThumbnailManager : PLThumbnailManagerCore {

	NSMutableSet* _previouslyRequestedThumbnailFixOIDs;
	NSMutableSet* _requestedThumbnailFixAssets;
	NSMutableArray* _alreadyFailedAssetObjectIDsForRebuild;
	NSLock* _fixLock;
	PLThumbnailCascadingDownscaleContext* _downscaleContext;
	BOOL _shouldRebuildThumbnails;
	BOOL _didCheckShouldRebuildThumbnails;
	BOOL _hasExceededThumbnailRebuildRequestLimit;
	BOOL _isRebuildingThumbnails;
	id _observerToken;
	NSArray* _slowPersistenceManagers;

}

@property (nonatomic,retain) id observerToken;                               //@synthesize observerToken=_observerToken - In the implementation block
@property (nonatomic,retain) NSArray * slowPersistenceManagers;              //@synthesize slowPersistenceManagers=_slowPersistenceManagers - In the implementation block
+(id)supportedThumbnailFormats;
-(void)preheatThumbnailDataWithFormat:(unsigned short)arg1 thumbnailIndexes:(id)arg2 ;
-(BOOL)hasThumbnailVersionMismatch;
-(id)imageTableForFormat:(unsigned short)arg1 ;
-(BOOL)hasExceededRebuildThumbnailRequestLimit;
-(BOOL)resetThumbnailsWithModelMigrator:(id)arg1 ;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 ;
-(CGImageRef)newImageForAsset:(id)arg1 format:(id)arg2 ;
-(void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3 ;
-(id)thumbManagerForFormatID:(unsigned short)arg1 ;
-(void)addRebuildThumbnailsRequest;
-(id)initWithPhotoLibraryPathManager:(id)arg1 modelMigrator:(id)arg2 ;
-(void)_recordRebuildThumbnailsAttempt;
-(void)setSlowPersistenceManagers:(NSArray *)arg1 ;
-(BOOL)hasMissingThumbnailsInLibrary:(id)arg1 ;
-(unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)arg1 ;
-(id)_tableDescriptions;
-(void)dealloc;
-(BOOL)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4 ;
-(void)removeRebuildThumbnailsRequest:(const char*)arg1 ;
-(BOOL)resetThumbnailsWithModelMigrator:(id)arg1 forced:(BOOL)arg2 ;
-(void)setThumbnailsForAsset:(id)arg1 withImage:(id)arg2 ;
-(void)setObserverToken:(id)arg1 ;
-(long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 library:(id)arg2 error:(id*)arg3 ;
-(NSArray *)slowPersistenceManagers;
-(id)_dataForAsset:(id)arg1 format:(unsigned short)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(unsigned short*)arg9 ;
-(id)thumbnailRebuildIndicatorPath;
-(BOOL)_performDownscaleIntoDatas:(id)arg1 image:(id)arg2 assetUUID:(id)arg3 ;
-(void)_removeMasterThumbDirectories;
-(void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)arg1 ;
-(void)removeThumbnailTablesUnsupportedOnly:(BOOL)arg1 ;
-(BOOL)hasDeprecationsOnly;
-(id)_missingThumbnailPredicate;
-(BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4 ;
-(void)removeObsoleteMetadata;
-(long long)_diskFootprintOfTableThumbnailTables;
-(unsigned short)_configurationThumbnailFormat;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2 ;
-(id)observerToken;
-(void)rebuildAllMissingThumbnailsInLibrary:(id)arg1 ;
-(id)thumbnailJPEGPathForPhoto:(id)arg1 ;
-(id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(CGSize)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(id)_rebuildThumbnailsQueue;
-(BOOL)isMissingThumbnailTables;
-(BOOL)setThumbnailsForThumbIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 assetUUID:(id)arg3 kind:(short)arg4 extension:(id)arg5 withImage:(id)arg6 ;
-(BOOL)hasRebuildThumbnailsRequest;
-(id)dataForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9 ;
-(int)_configurationThumbnailVersion;
-(void)discardCachedThumbnailDownscalerContexts;
-(void)_discardAlreadyFailedAssetObjectIDsForRebuild;
-(BOOL)isRebuildingThumbnails;
-(id)_allPossibleThumbnailFormatIDs;
@end

