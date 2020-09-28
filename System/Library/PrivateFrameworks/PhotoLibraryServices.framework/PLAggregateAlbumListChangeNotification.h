/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLAggregateAlbumList, PLAssetContainerListChangeNotification;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLAggregateAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _note;
	unsigned long long _indexOffet;

}
+(id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
-(id)insertedIndexes;
-(id)deletedObjects;
-(BOOL)shouldReload;
-(void)dealloc;
-(id)changedIndexes;
-(id)deletedIndexes;
-(id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3 ;
-(id)changedObjects;
-(id)albumList;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)insertedObjects;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(id)changedIndexesRelativeToSnapshot;
-(id)object;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
@end
