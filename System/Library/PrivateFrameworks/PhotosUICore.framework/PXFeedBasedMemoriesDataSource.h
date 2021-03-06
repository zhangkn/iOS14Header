/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesDataSource.h>

@class NSArray;

@interface PXFeedBasedMemoriesDataSource : PXMemoriesDataSource {

	NSArray* _entries;

}

@property (nonatomic,copy,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(long long)numberOfSections;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)sectionedObjectReferenceForMemoryUUID:(id)arg1 ;
-(NSArray *)entries;
@end

