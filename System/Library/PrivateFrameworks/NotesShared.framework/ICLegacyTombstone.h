/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSString, NSDate;

@interface ICLegacyTombstone : ICCloudSyncingObject

@property (nonatomic,retain) ICAccount * account; 
@property (assign,nonatomic) short type; 
@property (nonatomic,retain) NSString * contentHashAtImport; 
@property (nonatomic,retain) NSDate * modificationDateAtImport; 
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(BOOL)hasTombstonePrefix:(id)arg1 ;
+(short)tombstoneTypeFromRecordName:(id)arg1 ;
+(id)legacyTombstonesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)tombstoneIdentifierForObjectIdentifier:(id)arg1 type:(short)arg2 ;
+(id)legacyTombstoneWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newLegacyTombstoneWithIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3 ;
+(id)addLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3 ;
+(void)removeLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 context:(id)arg3 ;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)allLegacyTombstonesInContext:(id)arg1 ;
+(void)addLegacyTombstoneForNote:(id)arg1 ;
+(void)removeLegacyTombstoneForNote:(id)arg1 ;
+(void)addLegacyTombstoneForFolder:(id)arg1 ;
+(void)removeLegacyTombstoneForFolder:(id)arg1 ;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(id)recordZoneName;
-(void)deleteFromLocalDatabase;
-(id)newlyCreatedRecord;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isInICloudAccount;
-(id)ic_loggingValues;
-(id)cloudAccount;
-(id)recordType;
-(BOOL)hasAllMandatoryFields;
@end
