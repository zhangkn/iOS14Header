/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WDMedicalRecordDaySummaryDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSPredicate, HRProfile, HKConcept, NSArray, NSMutableArray, NSUUID, NSObject, WDMedicalRecordPagingContext, HKMultiTypeSampleIterator;

@interface WDMedicalRecordDisplayItemProvider : NSObject <WDMedicalRecordDaySummaryDelegate> {

	BOOL _shouldCancelDataCollection;
	long long _displayItemOptions;
	NSDictionary* _additionalPredicates;
	NSPredicate* _filter;
	/*^block*/id _errorHandler;
	long long _numOfRemovedRecords;
	HRProfile* _profile;
	HKConcept* _concept;
	NSArray* _preloadedRecords;
	NSMutableArray* _medicalRecordGroups;
	NSMutableArray* _dateLessGroups;
	NSArray* _pendingMedicalRecordGroups;
	NSArray* _pendingDateLessGroups;
	NSArray* _sampleTypes;
	NSArray* _sortDescriptors;
	NSPredicate* _accountsPredicate;
	/*^block*/id _updateHandler;
	NSUUID* _targetUUID;
	NSObject*<OS_dispatch_queue> _dataQueryQueue;
	WDMedicalRecordPagingContext* _pagingContext;
	HKMultiTypeSampleIterator* _iterator;

}

@property (nonatomic,retain) HRProfile * profile;                                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HKConcept * concept;                                       //@synthesize concept=_concept - In the implementation block
@property (nonatomic,copy) NSArray * preloadedRecords;                                  //@synthesize preloadedRecords=_preloadedRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * medicalRecordGroups;                      //@synthesize medicalRecordGroups=_medicalRecordGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * dateLessGroups;                           //@synthesize dateLessGroups=_dateLessGroups - In the implementation block
@property (nonatomic,retain) NSArray * pendingMedicalRecordGroups;                      //@synthesize pendingMedicalRecordGroups=_pendingMedicalRecordGroups - In the implementation block
@property (nonatomic,retain) NSArray * pendingDateLessGroups;                           //@synthesize pendingDateLessGroups=_pendingDateLessGroups - In the implementation block
@property (nonatomic,copy) NSArray * sampleTypes;                                       //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                 //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) NSPredicate * accountsPredicate;                           //@synthesize accountsPredicate=_accountsPredicate - In the implementation block
@property (nonatomic,copy) id updateHandler;                                            //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) NSUUID * targetUUID;                                         //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataQueryQueue;               //@synthesize dataQueryQueue=_dataQueryQueue - In the implementation block
@property (nonatomic,retain) WDMedicalRecordPagingContext * pagingContext;              //@synthesize pagingContext=_pagingContext - In the implementation block
@property (nonatomic,retain) HKMultiTypeSampleIterator * iterator;                      //@synthesize iterator=_iterator - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelDataCollection;                           //@synthesize shouldCancelDataCollection=_shouldCancelDataCollection - In the implementation block
@property (assign,nonatomic) long long displayItemOptions;                              //@synthesize displayItemOptions=_displayItemOptions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalPredicates;                //@synthesize additionalPredicates=_additionalPredicates - In the implementation block
@property (nonatomic,retain) NSPredicate * filter;                                      //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) id errorHandler;                                             //@synthesize errorHandler=_errorHandler - In the implementation block
@property (assign,nonatomic) long long numOfRemovedRecords;                             //@synthesize numOfRemovedRecords=_numOfRemovedRecords - In the implementation block
+(id)supportedRecordCategoriesByCategoryType;
+(id)allSupportedRecordCategories;
+(id)unknownRecordCategory;
+(id)allSupportedSampleTypes;
-(void)reload;
-(void)setProfile:(HRProfile *)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(NSPredicate *)filter;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setConcept:(HKConcept *)arg1 ;
-(long long)numberOfGroups;
-(void)setUpdateHandler:(id)arg1 ;
-(HRProfile *)profile;
-(id)updateHandler;
-(HKConcept *)concept;
-(NSObject*<OS_dispatch_queue>)dataQueryQueue;
-(void)_queue_resetPagingInformation;
-(void)_queue_queryForNextBatchOfData;
-(void)setTargetUUID:(NSUUID *)arg1 ;
-(void)setShouldCancelDataCollection:(BOOL)arg1 ;
-(void)_commitPendingGroupsAndCallUpdateHandlerBypassGroupChangeDetermination:(BOOL)arg1 ;
-(void)setSampleTypes:(NSArray *)arg1 ;
-(void)daySummaryHasDisplayItemUpdate:(id)arg1 ;
-(void)stopCollectingData;
-(NSMutableArray *)medicalRecordGroups;
-(WDMedicalRecordPagingContext *)pagingContext;
-(NSMutableArray *)dateLessGroups;
-(id)_displayItemGroupAtIndex:(long long)arg1 ;
-(id)_queue_synthesizedPredicatesForMedicalType:(id)arg1 ;
-(void)_queue_setupIterator;
-(NSDictionary *)additionalPredicates;
-(NSPredicate *)accountsPredicate;
-(NSArray *)pendingMedicalRecordGroups;
-(NSArray *)pendingDateLessGroups;
-(void)setPendingMedicalRecordGroups:(NSArray *)arg1 ;
-(void)setPendingDateLessGroups:(NSArray *)arg1 ;
-(void)setMedicalRecordGroups:(NSMutableArray *)arg1 ;
-(void)setDateLessGroups:(NSMutableArray *)arg1 ;
-(void)setNumOfRemovedRecords:(long long)arg1 ;
-(BOOL)shouldCancelDataCollection;
-(void)_processAccumulatedRecordsForPage:(id)arg1 ;
-(id)indexPathForRecordId:(id)arg1 ;
-(NSArray *)preloadedRecords;
-(void)_displayItemGroupsForSummaryOfRecords:(id)arg1 displayRemovedRecords:(BOOL)arg2 style:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_sortedDisplayItemGroupWithDateDisplay:(id)arg1 sourceDaySummaryMapping:(id)arg2 ;
-(id)initWithProfile:(id)arg1 displayItemOptions:(long long)arg2 sampleTypes:(id)arg3 filter:(id)arg4 additionalPredicates:(id)arg5 sortDescriptors:(id)arg6 ;
-(long long)displayItemOptions;
-(void)setDisplayItemOptions:(long long)arg1 ;
-(void)setAccountsPredicate:(NSPredicate *)arg1 ;
-(void)setDataQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPagingContext:(WDMedicalRecordPagingContext *)arg1 ;
-(NSArray *)sampleTypes;
-(id)initWithProfile:(id)arg1 concept:(id)arg2 preloadedRecords:(id)arg3 displayItemOptions:(long long)arg4 sampleTypes:(id)arg5 filter:(id)arg6 additionalPredicates:(id)arg7 sortDescriptors:(id)arg8 ;
-(void)startCollectingDataUntilRecordWithUUID:(id)arg1 withUpdateHandler:(/*^block*/id)arg2 ;
-(void)requestDataOfNextPage;
-(id)displayItemForIndexPath:(id)arg1 ;
-(long long)numOfRemovedRecords;
-(long long)numberOfDisplayItemsForGroupAtIndex:(long long)arg1 ;
-(id)titleForGroupAtIndex:(long long)arg1 ;
-(id)subtitleForGroupAtIndex:(long long)arg1 ;
-(void)setIterator:(HKMultiTypeSampleIterator *)arg1 ;
-(void)setSampleTypes:(id)arg1 predicatesPerType:(id)arg2 accountsPredicate:(id)arg3 ;
-(void)setFilter:(NSPredicate *)arg1 ;
-(void)setPreloadedRecords:(NSArray *)arg1 ;
-(id)removedRecords;
-(HKMultiTypeSampleIterator *)iterator;
-(id)errorHandler;
-(NSUUID *)targetUUID;
@end
