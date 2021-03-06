/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSectionedLayoutDataSourceChangeDetails.h>

@class PXArrayChangeDetails, NSIndexSet, NSDictionary, NSNumber, NSString;

@interface PXSectionedDataSourceChangeDetails : NSObject <PXSectionedLayoutDataSourceChangeDetails> {

	NSDictionary* _itemChangeDetailsBySection;
	NSDictionary* _itemsWithSubitemChangesBySection;
	NSDictionary* _subitemChangeDetailsByItemBySection;
	NSNumber* _hasAnyChangesCache;
	NSNumber* _hasAnyInsertionsRemovalsOrMovesCache;
	unsigned long long _fromDataSourceIdentifier;
	unsigned long long _toDataSourceIdentifier;
	PXArrayChangeDetails* _sectionChanges;
	NSIndexSet* _sectionsWithItemChanges;

}

@property (nonatomic,readonly) unsigned long long fromDataSourceIdentifier;              //@synthesize fromDataSourceIdentifier=_fromDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long toDataSourceIdentifier;                //@synthesize toDataSourceIdentifier=_toDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) PXArrayChangeDetails * sectionChanges;                    //@synthesize sectionChanges=_sectionChanges - In the implementation block
@property (nonatomic,readonly) NSIndexSet * sectionsWithItemChanges;                     //@synthesize sectionsWithItemChanges=_sectionsWithItemChanges - In the implementation block
@property (nonatomic,readonly) BOOL hasAnyChanges; 
@property (nonatomic,readonly) BOOL hasAnyInsertionsRemovalsOrMoves; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)changesHaveAnyInsertionsRemovalsOrMoves:(id)arg1 ;
+(PXSimpleIndexPath)indexPathAfterApplyingChanges:(id)arg1 toIndexPath:(PXSimpleIndexPath)arg2 hasIncrementalChanges:(out BOOL*)arg3 objectChanged:(out BOOL*)arg4 ;
+(PXSimpleIndexPath)indexPathAfterRevertingChanges:(id)arg1 fromIndexPath:(PXSimpleIndexPath)arg2 hasIncrementalChanges:(out BOOL*)arg3 objectChanged:(out BOOL*)arg4 ;
+(id)indexPathSetAfterApplyingChanges:(id)arg1 toIndexPathSet:(id)arg2 hasIncrementalChanges:(out BOOL*)arg3 ;
+(id)indexPathSetAfterRevertingChanges:(id)arg1 fromIndexPathSet:(id)arg2 hasIncrementalChanges:(out BOOL*)arg3 ;
+(void)debug_assertValidChangeDetails:(id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3 ;
+(id)changeDetailsWithoutIncrementalChangesFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
+(id)changeDetailsWithNoChangesFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
+(BOOL)changeDetailsAreOnlyInsertionsOrOnlyRemovalsAtEnd:(id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3 ;
-(id)initWithFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 sectionChanges:(id)arg3 itemChangeDetailsBySection:(id)arg4 subitemChangeDetailsByItemBySection:(id)arg5 ;
-(id)subitemChangesInItem:(long long)arg1 section:(long long)arg2 ;
-(id)deletedItemsInSection:(long long)arg1 ;
-(id)insertedItemsInSection:(long long)arg1 ;
-(PXSimpleIndexPath)indexPathAfterApplyingChangesToIndexPath:(PXSimpleIndexPath)arg1 hasIncrementalChanges:(out BOOL*)arg2 objectChanged:(out BOOL*)arg3 ;
-(PXSimpleIndexPath)indexPathAfterRevertingChangesFromIndexPath:(PXSimpleIndexPath)arg1 hasIncrementalChanges:(out BOOL*)arg2 objectChanged:(out BOOL*)arg3 ;
-(id)changedItemsInSection:(long long)arg1 ;
-(unsigned long long)fromDataSourceIdentifier;
-(id)indexPathSetAfterApplyingChangesToIndexPathSet:(id)arg1 hasIncrementalChanges:(out BOOL*)arg2 ;
-(id)indexPathSetAfterRevertingChangesFromIndexPathSet:(id)arg1 hasIncrementalChanges:(out BOOL*)arg2 ;
-(unsigned long long)toDataSourceIdentifier;
-(PXArrayChangeDetails *)sectionChanges;
-(BOOL)hasAnyInsertionsRemovalsOrMoves;
-(id)init;
-(id)itemsWithSubitemChangesInSection:(long long)arg1 ;
-(NSIndexSet *)sectionsWithItemChanges;
-(id)itemChangesInSection:(long long)arg1 ;
-(NSString *)description;
-(BOOL)hasAnyChanges;
@end

