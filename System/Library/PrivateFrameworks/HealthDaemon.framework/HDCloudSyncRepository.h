/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSObject, NSMutableArray, HDProfile, CKContainer, NSArray, NSSet, NSString;

@interface HDCloudSyncRepository : NSObject {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	long long _pullOperationFailureCount;
	NSMutableArray* _ownerIdentifierFetchCompletionBlocks;
	BOOL _shouldPushToUnifiedZone;
	HDProfile* _profile;
	CKContainer* _primaryCKContainer;
	NSArray* _secondaryCKContainers;
	NSSet* _allCKContainers;
	unsigned long long _repositorySettings;
	NSString* _syncCircleIdentifier;

}

@property (assign,nonatomic) unsigned long long repositorySettings;               //@synthesize repositorySettings=_repositorySettings - In the implementation block
@property (nonatomic,readonly) int deviceMode; 
@property (nonatomic,readonly) BOOL shouldPushToUnifiedZone;                      //@synthesize shouldPushToUnifiedZone=_shouldPushToUnifiedZone - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) CKContainer * primaryCKContainer;                  //@synthesize primaryCKContainer=_primaryCKContainer - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryCKContainers;                   //@synthesize secondaryCKContainers=_secondaryCKContainers - In the implementation block
@property (nonatomic,readonly) NSSet * allCKContainers;                           //@synthesize allCKContainers=_allCKContainers - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncCircleIdentifier;              //@synthesize syncCircleIdentifier=_syncCircleIdentifier - In the implementation block
-(void)_disableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(NSSet *)allCKContainers;
-(HDProfile *)profile;
-(void)dealloc;
-(CKContainer *)primaryCKContainer;
-(id)initWithProfile:(id)arg1 syncCircleIdentifier:(id)arg2 primaryCKContainer:(id)arg3 secondaryCKContainers:(id)arg4 ;
-(id)ownerIdentifierForContainer:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setRepositorySettings:(unsigned long long)arg1 ;
-(int)deviceMode;
-(unsigned long long)repositorySettings;
-(id)containerForContainerIdentifier:(id)arg1 ;
-(BOOL)shouldPushToUnifiedZone;
-(void)_queue_generateRestoreEventSyncCompleteWithPullCompleteDate:(id)arg1 ;
-(NSString *)syncCircleIdentifier;
-(void)unitTest_setShouldPushToUnifiedZone:(BOOL)arg1 ;
-(NSArray *)secondaryCKContainers;
-(id)description;
@end
