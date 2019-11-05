/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKCloudTournament : NSObject
+(void)acceptShareMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)cacheQueue;
+(void)removeCustomTournament:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)publicDatabase;
+(id)privateDatabase;
+(id)tournamentCache;
+(void)updateUserRecordWithHandler:(/*^block*/id)arg1 ;
+(id)filterCustomTournamentsForLocalPlayer:(id)arg1 ;
+(id)processedRecordIDsForBulletins;
+(id)createParticipantRecordForTournamentRecord:(id)arg1 playerID:(id)arg2 ;
+(void)incrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2 ;
+(void)registerLocalPlayerForTournamentWithID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)saveTournamentRecords:(id)arg1 deleteTournamentRecordIDs:(id)arg2 database:(id)arg3 handler:(/*^block*/id)arg4 ;
+(void)beginPlayInTournamentWithID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(BOOL)tryTokenIsValid:(id)arg1 forTournamentParticipantRecord:(id)arg2 ;
+(void)resumePlayInTournamentWithID:(id)arg1 withTryToken:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)resignLocalPlayerFromTournamentWithID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(BOOL)deviceIsValidForTournamentParticipantRecord:(id)arg1 ;
+(void)updateScoreDataForParticipantRecord:(id)arg1 newScore:(long long)arg2 tournamentScoringMethod:(long long)arg3 ;
+(void)reportScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(/*^block*/id)arg4 ;
+(void)updatePlayerRanksForTournamentWithID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)tournamentQueue;
+(id)cloudKitOperationConfiguration;
+(id)computeHistoricalDataFromParticipationRecords:(id)arg1 ;
+(void)tournamentsMatchingPredicate:(id)arg1 bundleID:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)participantRecordNameForTournamentID:(id)arg1 playerID:(id)arg2 ;
+(void)addInvitees:(id)arg1 toCustomTournamentWithID:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)createPrivateContactInviteRecordsForPlayers:(id)arg1 tournamentID:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)addCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)decrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2 ;
+(void)removeCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)contactInviteRecordNameForTournamentID:(id)arg1 playerID:(id)arg2 ;
+(void)declineLocalPlayerInvitationInTournamentWithID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)contactPlayerInternalForPlayerID:(id)arg1 tournamentID:(id)arg2 ;
+(void)sortParticipants:(id)arg1 ;
+(long long)timePeriod:(id)arg1 ;
+(id)automaticTournamentNameFromDefinition:(id)arg1 startDate:(id)arg2 ;
+(id)customTournamentRecordsForRequest:(id)arg1 definitionReference:(id)arg2 ;
+(void)shareURLForCustomTournament:(id)arg1 clientProxy:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)checkForServerRecordChangedErrorsInModifyRecordsOperationError:(id)arg1 ;
+(void)fetchAndUpdateRecordsWithIDs:(id)arg1 database:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)lastUsedBundleID;
+(void)updateCacheForPublicDatabaseForBundleID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)updateCacheForDatabase:(id)arg1 zoneIDs:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)subscribeToDatabaseChangesWithHandler:(/*^block*/id)arg1 ;
+(void)localPlayerTournamentRecordsForBundleID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)allTournamentDefintionRecordsWithHandler:(/*^block*/id)arg1 ;
+(void)lookForCustomTournamentInvitesInParticipantRecords:(id)arg1 ;
+(void)activeAutomaticTournamentsForTournamentDefinition:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)allParticipantRecordsForTournamentReferences:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)lastManagementDate;
+(void)setLastUsedBundleID:(id)arg1 ;
+(void)updateCacheForDatabaseWithScope:(long long)arg1 bundleID:(id)arg2 handler:(/*^block*/id)arg3 ;
+(BOOL)canManageTournaments;
+(void)setLastManagementDate:(id)arg1 ;
+(void)manageStatesForTournamentsWithDefinitionID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)nextAutomaticTournamentStartDateForDefinitionRecurrenceRule:(id)arg1 ;
+(void)createAutomaticTournamentFromDefinition:(id)arg1 startDate:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)inviteDictionaryForTournament:(id)arg1 originatingPlayerID:(id)arg2 clientProxy:(id)arg3 ;
+(id)shareRecordIDForTournamentID:(id)arg1 zoneID:(id)arg2 ;
+(id)privateDatabaseForInviteContainer;
+(id)inviteRecordWithDataForSharingTournament:(id)arg1 clientProxy:(id)arg2 ;
+(void)createShareWithShareRecordID:(id)arg1 rootRecord:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)fetchExistingShareWithRecordID:(id)arg1 fromDatabase:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)cloudKitOperationConfigurationForCustomInvite;
+(void)createCustomInviteZoneWithHandler:(/*^block*/id)arg1 ;
+(id)inProgressAcceptShareRecordIDs;
+(void)setInProgressAcceptShareRecordIDs:(id)arg1 ;
+(void)addInviteeAndGenerateBulletinForShareMetadata:(id)arg1 ;
+(id)sharedDatabaseForInviteContainer;
+(id)databaseForZoneID:(id)arg1 ;
+(id)findContactParticipantRecordToRemoveForTournamentID:(id)arg1 ;
+(void)fetchTournamentRecordIfNeededWithID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)createZoneForPrivateContactDataWithHandler:(/*^block*/id)arg1 ;
+(BOOL)isMessagesIDForLocalUser:(id)arg1 ;
+(void)setProcessedRecordIDsForBulletins:(id)arg1 ;
+(void)tournamentDefinitionsWithHandler:(/*^block*/id)arg1 ;
+(void)tournamentDefinitionWithID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)tournamentWithID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)getTotalPlayerCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(void)getFriendCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(void)getLocalParticipantForTournamentWithID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)historicalDataForPlayer:(id)arg1 tournamentDefinitionWithID:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)removeInvitees:(id)arg1 fromCustomTournamentWithID:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)createCustomTournamentWithRequest:(id)arg1 clientProxy:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)localPlayerParticipantRecordsForTournaments:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)resetDataForTournamentsWithTournamentDefinitionID:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)manageTournamentsForBundleID:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
