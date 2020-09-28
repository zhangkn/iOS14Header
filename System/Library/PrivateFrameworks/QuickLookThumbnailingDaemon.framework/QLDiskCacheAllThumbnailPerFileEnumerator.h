/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailingDaemon/QLDiskCacheEnumerator.h>

@class QLCacheFileIdentifier, QLCacheIndexDatabaseQueryEnumerator, QLCacheThumbnailData, NSData, QLCacheBlobInfo;

@interface QLDiskCacheAllThumbnailPerFileEnumerator : QLDiskCacheEnumerator {

	QLCacheFileIdentifier* _fileIdentifier;
	QLCacheIndexDatabaseQueryEnumerator* _cacheIndexDatabaseEnumerator;
	QLCacheThumbnailData* _thumbnailData;
	NSData* _bitmapData;
	QLCacheBlobInfo* _bitmapDataBlobInfo;
	NSData* _metadata;
	QLCacheBlobInfo* _metadataBlobInfo;

}
-(void)_createNewCacheIndexDatabaseEnumeratorWithFileIdentifier:(id)arg1 ;
-(id)initWithDiskCache:(id)arg1 fileIdentifier:(id)arg2 ;
-(id)nextThumbnailData;
@end
