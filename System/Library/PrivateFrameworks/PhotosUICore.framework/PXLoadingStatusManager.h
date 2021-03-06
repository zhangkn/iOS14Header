/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSHashTable, NSMutableSet, NSMapTable, NSMutableDictionary;

@interface PXLoadingStatusManager : NSObject {

	NSHashTable* _observers;
	BOOL __isUpdateScheduled;
	NSMutableSet* __invalidLoadingStatusItems;
	NSMapTable* __loadOperationTrackingIDsByItem;
	NSMapTable* __loadingStatusByItem;
	NSMutableDictionary* __itemByLoadOperationTrackingID;
	NSMutableDictionary* __loadingStatusByLoadOperationTrackingID;

}

@property (assign,setter=_setUpdateScheduled:,nonatomic) BOOL _isUpdateScheduled;                          //@synthesize _isUpdateScheduled=__isUpdateScheduled - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _invalidLoadingStatusItems;                                  //@synthesize _invalidLoadingStatusItems=__invalidLoadingStatusItems - In the implementation block
@property (nonatomic,readonly) NSMapTable * _loadOperationTrackingIDsByItem;                               //@synthesize _loadOperationTrackingIDsByItem=__loadOperationTrackingIDsByItem - In the implementation block
@property (nonatomic,readonly) NSMapTable * _loadingStatusByItem;                                          //@synthesize _loadingStatusByItem=__loadingStatusByItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _itemByLoadOperationTrackingID;                       //@synthesize _itemByLoadOperationTrackingID=__itemByLoadOperationTrackingID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _loadingStatusByLoadOperationTrackingID;              //@synthesize _loadingStatusByLoadOperationTrackingID=__loadingStatusByLoadOperationTrackingID - In the implementation block
-(void)_setLoadingStatus:(id)arg1 forItem:(id)arg2 ;
-(void)unregisterObserver:(id)arg1 ;
-(id)willBeginLoadOperationWithItem:(id)arg1 ;
-(void)_setUpdateScheduled:(BOOL)arg1 ;
-(void)_updateLoadingStatusForItemsIfNeeded;
-(BOOL)_isUpdateScheduled;
-(NSMapTable *)_loadOperationTrackingIDsByItem;
-(void)didCancelLoadOperationWithTrackingID:(id)arg1 ;
-(void)didCompleteLoadOperationWithTrackingID:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_updateLoadingStatusForItem:(id)arg1 ;
-(NSMapTable *)_loadingStatusByItem;
-(void)_updateLoadingStatusForItemIfNeeded:(id)arg1 ;
-(id)loadingStatusForItem:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)_resetLoadingStatusForItemIfAppropriate:(id)arg1 ;
-(void)_updateIfNeeded;
-(NSMutableDictionary *)_loadingStatusByLoadOperationTrackingID;
-(void)_setNeedsUpdate;
-(void)didUpdateLoadOperationWithTrackingID:(id)arg1 withProgress:(double)arg2 ;
-(void)_updateNowIfNeeded;
-(void)_setLoadingStatus:(id)arg1 forLoadOperationTrackingID:(id)arg2 ;
-(id)init;
-(NSMutableSet *)_invalidLoadingStatusItems;
-(NSMutableDictionary *)_itemByLoadOperationTrackingID;
-(void)_invalidateLoadingStatusForItem:(id)arg1 ;
-(BOOL)_needsUpdate;
@end

