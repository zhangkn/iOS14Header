/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataProvenanceEntity : HDHealthEntity
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)databaseTable;
+(long long)protectionClass;
+(id)sourceIDsWithProvenanceFromSourceIDs:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_derivedFlagsForSourceID:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)insertOrLookupDataProvenanceForSyncProvenance:(long long)arg1 originProductType:(id)arg2 originSystemBuild:(id)arg3 originOSVersion:(SCD_Struct_HD6)arg4 localProductType:(id)arg5 localSystemBuild:(id)arg6 sourceVersion:(id)arg7 timeZoneName:(id)arg8 sourceID:(id)arg9 deviceID:(id)arg10 contributorID:(id)arg11 transaction:(id)arg12 error:(id*)arg13 ;
@end

