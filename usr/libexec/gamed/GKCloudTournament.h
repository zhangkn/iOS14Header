//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKCloudTournament : NSObject
{
}

+ (void)lookForCustomTournamentInvitesInParticipantRecords:(id)arg1;	// IMP=0x00000001000259f8
+ (id)findContactParticipantRecordToRemoveForTournamentID:(id)arg1;	// IMP=0x00000001000256a8
+ (void)createZoneForPrivateContactDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002541c
+ (void)createPrivateContactInviteRecordsForPlayers:(id)arg1 tournamentID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024884
+ (id)contactInviteRecordNameForTournamentID:(id)arg1 playerID:(id)arg2;	// IMP=0x000000010002481c
+ (_Bool)isMessagesIDForLocalUser:(id)arg1;	// IMP=0x0000000100024508
+ (void)acceptShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024330
+ (void)fetchTournamentRecordIfNeededWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023d68
+ (void)addInviteeAndGenerateBulletinForShareMetadata:(id)arg1;	// IMP=0x0000000100022f80
+ (id)databaseForZoneID:(id)arg1;	// IMP=0x0000000100022e20
+ (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022870
+ (void)setInProgressAcceptShareRecordIDs:(id)arg1;	// IMP=0x000000010002281c
+ (id)inProgressAcceptShareRecordIDs;	// IMP=0x0000000100022810
+ (void)createShareWithShareRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021e14
+ (void)createCustomInviteZoneWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021b88
+ (void)fetchExistingShareWithRecordID:(id)arg1 fromDatabase:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021740
+ (void)shareURLForCustomTournament:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020d40
+ (id)inviteRecordWithDataForSharingTournament:(id)arg1 clientProxy:(id)arg2;	// IMP=0x0000000100020b2c
+ (id)inviteDictionaryForTournament:(id)arg1 originatingPlayerID:(id)arg2 clientProxy:(id)arg3;	// IMP=0x0000000100020928
+ (id)cloudKitOperationConfigurationForCustomInvite;	// IMP=0x000000010002085c
+ (id)shareRecordIDForTournamentID:(id)arg1 zoneID:(id)arg2;	// IMP=0x000000010002079c
+ (id)sharedDatabaseForInviteContainer;	// IMP=0x0000000100020738
+ (id)privateDatabaseForInviteContainer;	// IMP=0x00000001000206d4
+ (void)removeCustomTournament:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000202b0
+ (void)manageStatesForTournamentsWithDefinitionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f2e0
+ (void)manageTournamentsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e9f0
+ (_Bool)canManageTournaments;	// IMP=0x000000010001e94c
+ (id)lastUsedBundleID;	// IMP=0x000000010001e940
+ (void)setLastUsedBundleID:(id)arg1;	// IMP=0x000000010001e8ac
+ (id)lastManagementDate;	// IMP=0x000000010001e8a0
+ (void)setLastManagementDate:(id)arg1;	// IMP=0x000000010001e84c
+ (void)resetDataForTournamentsWithTournamentDefinitionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e414
+ (void)fetchAndUpdateRecordsWithIDs:(id)arg1 database:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001db3c
+ (id)checkForServerRecordChangedErrorsInModifyRecordsOperationError:(id)arg1;	// IMP=0x000000010001d818
+ (void)subscribeToDatabaseChangesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d070
+ (void)activeAutomaticTournamentsForTournamentDefinition:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c998
+ (void)allParticipantRecordsForTournamentReferences:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c38c
+ (void)localPlayerTournamentRecordsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b244
+ (void)localPlayerParticipantRecordsForTournaments:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ab78
+ (void)allTournamentDefintionRecordsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a5bc
+ (void)updateCacheForDatabase:(id)arg1 zoneIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100018b50
+ (void)updateCacheForPublicDatabaseForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018380
+ (void)updateCacheForDatabaseWithScope:(long long)arg1 bundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100017b14
+ (void)updatePlayerRanksForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017148
+ (void)updateScoreDataForParticipantRecord:(id)arg1 newScore:(long long)arg2 tournamentScoringMethod:(long long)arg3;	// IMP=0x0000000100016f98
+ (id)createParticipantRecordForTournamentRecord:(id)arg1 playerID:(id)arg2;	// IMP=0x0000000100016bec
+ (void)saveTournamentRecords:(id)arg1 deleteTournamentRecordIDs:(id)arg2 database:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100015c48
+ (id)cloudKitOperationConfiguration;	// IMP=0x0000000100015b7c
+ (void)createCustomTournamentWithRequest:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014cd8
+ (id)customTournamentRecordsForRequest:(id)arg1 definitionReference:(id)arg2;	// IMP=0x0000000100014494
+ (void)createAutomaticTournamentFromDefinition:(id)arg1 startDate:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013604
+ (id)automaticTournamentNameFromDefinition:(id)arg1 startDate:(id)arg2;	// IMP=0x00000001000132c4
+ (long long)timePeriod:(id)arg1;	// IMP=0x0000000100013248
+ (id)nextAutomaticTournamentStartDateForDefinitionRecurrenceRule:(id)arg1;	// IMP=0x00000001000130b8
+ (void)sortParticipants:(id)arg1;	// IMP=0x0000000100012f68
+ (void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012218
+ (id)contactPlayerInternalForPlayerID:(id)arg1 tournamentID:(id)arg2;	// IMP=0x0000000100011ffc
+ (void)declineLocalPlayerInvitationInTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011548
+ (void)removeInvitees:(id)arg1 fromCustomTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000107fc
+ (void)removeCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000fbe0
+ (void)addCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ef88
+ (void)addInvitees:(id)arg1 toCustomTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000dc30
+ (id)participantRecordNameForTournamentID:(id)arg1 playerID:(id)arg2;	// IMP=0x000000010000dbbc
+ (void)historicalDataForPlayer:(id)arg1 tournamentDefinitionWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000cc40
+ (id)computeHistoricalDataFromParticipationRecords:(id)arg1;	// IMP=0x000000010000c7bc
+ (void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000bc5c
+ (void)reportScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000aee4
+ (_Bool)tryTokenIsValid:(id)arg1 forTournamentParticipantRecord:(id)arg2;	// IMP=0x000000010000ae58
+ (_Bool)deviceIsValidForTournamentParticipantRecord:(id)arg1;	// IMP=0x000000010000ad9c
+ (void)resignLocalPlayerFromTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a260
+ (void)resumePlayInTournamentWithID:(id)arg1 withTryToken:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009510
+ (void)beginPlayInTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008700
+ (void)registerLocalPlayerForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000077b4
+ (void)decrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2;	// IMP=0x00000001000076e4
+ (void)incrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2;	// IMP=0x0000000100007618
+ (void)getLocalParticipantForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000752c
+ (void)getFriendCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007518
+ (void)getTotalPlayerCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000073ac
+ (void)tournamentsMatchingPredicate:(id)arg1 bundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006c84
+ (id)filterCustomTournamentsForLocalPlayer:(id)arg1;	// IMP=0x000000010000697c
+ (void)tournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000684c
+ (void)tournamentDefinitionWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006594
+ (void)tournamentDefinitionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006580
+ (void)updateUserRecordWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006114
+ (void)setProcessedRecordIDsForBulletins:(id)arg1;	// IMP=0x00000001000060c0
+ (id)processedRecordIDsForBulletins;	// IMP=0x00000001000060b4
+ (id)privateDatabase;	// IMP=0x0000000100006050
+ (id)publicDatabase;	// IMP=0x0000000100005fec
+ (id)tournamentQueue;	// IMP=0x0000000100005f78
+ (id)cacheQueue;	// IMP=0x0000000100005f08
+ (id)tournamentCache;	// IMP=0x0000000100005e9c

@end
