/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDMedicalIDDataMigrator : NSObject
+(BOOL)migrateMedicalIDDataIfNeeded:(id)arg1 ;
+(BOOL)_migrateFromVersionNoneTo1:(id)arg1 ;
+(BOOL)_migrateEmergencyContactsToVersion2:(id)arg1 ;
+(BOOL)_migrateEmergencyContactsToVersion3:(id)arg1 ;
+(BOOL)_migrateFromVersion3ToVersion4:(id)arg1 ;
@end

