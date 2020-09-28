//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "REMCDObject.h"

@class NSData, NSDate, NSOrderedSet, NSSet, NSString, REMCDAccount, REMCDSharee, REMColor;

@interface REMCDList : REMCDObject
{
}

+ (id)cdEntityName;	// IMP=0x0000000100039234
+ (id)fetchRequest;	// IMP=0x000000010006785c
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x000000010013f0e4
+ (id)newPlaceholderObjectForRecordID:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x000000010013aacc
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x000000010013a8d0
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;	// IMP=0x000000010013a348
+ (id)recordTypes;	// IMP=0x000000010013a284
- (_Bool)isShared;	// IMP=0x0000000100039248
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x0000000100039160
- (long long)compare:(id)arg1;	// IMP=0x0000000100039070
@property(retain, nonatomic) NSData *reminderIDsMergeableOrdering; // @dynamic reminderIDsMergeableOrdering;
- (_Bool)shouldCascadeMarkAsDeleteInto:(id)arg1 forRelationship:(id)arg2;	// IMP=0x000000010003e9c8
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x000000010003e950
@property(readonly) NSString *displayName;
- (void)restoreParentReferenceAfterUnmarkingForDeletion;	// IMP=0x0000000100142a94
- (id)objectsToBeDeletedBeforeThisObject;	// IMP=0x0000000100142994
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x0000000100142900
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x0000000100142898
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x0000000100140180
- (void)updateObjectWithShare:(id)arg1;	// IMP=0x000000010013f080
- (id)shareType;	// IMP=0x000000010013cfb0
- (id)shareTitle;	// IMP=0x000000010013cee0
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x000000010013ce44
- (_Bool)supportsDeletionByTTL;	// IMP=0x000000010013ce1c
- (id)newlyCreatedRecord;	// IMP=0x000000010013cdd0
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x000000010013c660
- (void)sortChildrenObjects;	// IMP=0x000000010013b404
- (id)recordType;	// IMP=0x000000010013acb8
- (id)recordZoneName;	// IMP=0x000000010013ac5c
- (void)objectWasDeletedFromCloudByAnotherDevice;	// IMP=0x000000010013abbc

// Remaining properties
@property(copy, nonatomic) NSString *badgeEmblem; // @dynamic badgeEmblem;
@property(retain, nonatomic) NSSet *calDAVNotifications; // @dynamic calDAVNotifications;
@property(retain, nonatomic) NSOrderedSet *childLists; // @dynamic childLists;
@property(retain, nonatomic) REMColor *color; // @dynamic color;
@property(retain, nonatomic) NSData *daBulkRequests; // @dynamic daBulkRequests;
@property(nonatomic) long long daDisplayOrder; // @dynamic daDisplayOrder;
@property(copy, nonatomic) NSString *daExternalIdentificationTag; // @dynamic daExternalIdentificationTag;
@property(nonatomic) _Bool daIsEventOnlyContainer; // @dynamic daIsEventOnlyContainer;
@property(nonatomic) _Bool daIsImmutable; // @dynamic daIsImmutable;
@property(nonatomic) _Bool daIsNotificationsCollection; // @dynamic daIsNotificationsCollection;
@property(nonatomic) _Bool daIsReadOnly; // @dynamic daIsReadOnly;
@property(nonatomic) _Bool isGroup; // @dynamic isGroup;
@property(copy, nonatomic) NSDate *lastUserAccessDate; // @dynamic lastUserAccessDate;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) REMCDAccount *parentAccount; // @dynamic parentAccount;
@property(retain, nonatomic) REMCDList *parentList; // @dynamic parentList;
@property(retain, nonatomic) NSData *reminderIDsMergeableOrdering_v2_JSON; // @dynamic reminderIDsMergeableOrdering_v2_JSON;
@property(retain, nonatomic) NSOrderedSet *reminders; // @dynamic reminders;
@property(retain, nonatomic) REMCDSharee *sharedOwner; // @dynamic sharedOwner;
@property(copy, nonatomic) NSString *sharedOwnerAddress; // @dynamic sharedOwnerAddress;
@property(copy, nonatomic) NSString *sharedOwnerName; // @dynamic sharedOwnerName;
@property(retain, nonatomic) NSSet *sharees; // @dynamic sharees;
@property(nonatomic) short sharingStatus; // @dynamic sharingStatus;
@property(nonatomic) _Bool showingLargeAttachments; // @dynamic showingLargeAttachments;
@property(nonatomic) short sortingDirection; // @dynamic sortingDirection;
@property(copy, nonatomic) NSString *sortingStyle; // @dynamic sortingStyle;

@end
