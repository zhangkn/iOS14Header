/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@class NSDictionary, NSMutableSet, NSString;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {

	NSDictionary* _membershipsByChannelID;
	NSMutableSet* _membershipReferences;

}

@property (nonatomic,retain) NSDictionary * membershipsByChannelID;              //@synthesize membershipsByChannelID=_membershipsByChannelID - In the implementation block
@property (nonatomic,retain) NSMutableSet * membershipReferences;                //@synthesize membershipReferences=_membershipReferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backingRecordZoneIDs;
+(BOOL)requiresBatchedSync;
+(id)backingRecordIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(id)desiredKeys;
+(long long)commandQueueUrgency;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
-(void)removeItemWithItemID:(id)arg1 ;
-(BOOL)isAllowedToSeeDraftsForChannelID:(id)arg1 ;
-(void)_refreshPublicMembershipsWithCompletion:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(id)feedDescriptorForDraftFeedForChannel:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(BOOL)isMemberOfChannelID:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)dealloc;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(NSMutableSet *)membershipReferences;
-(void)setMembershipReferences:(NSMutableSet *)arg1 ;
-(id)referenceToMembershipForMembershipID:(id)arg1 ;
-(id)membershipChannelIDs;
-(void)fetchMembershipsWithIDs:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setMembershipsByChannelID:(NSDictionary *)arg1 ;
-(void)isAllowedToSeeArticleID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)hasMemberships;
-(NSDictionary *)membershipsByChannelID;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)_fetchPrivateChannelMembershipsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldShowAllDraftContent;
-(void)refreshPublicMemberships;
-(void)isAllowedToSeeIssueID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addItem:(id)arg1 toStore:(BOOL)arg2 ;
-(void)changedMembershipsFrom:(id)arg1 toMemberships:(id)arg2 ;
@end
