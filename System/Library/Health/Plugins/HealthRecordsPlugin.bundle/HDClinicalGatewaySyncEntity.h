/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/HDSyncEntity.h>

@class NSString;

@interface HDClinicalGatewaySyncEntity : NSObject <HDSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5 ;
+(BOOL)supportsSyncStore:(id)arg1 ;
+(long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(id)syncEntityIdentifier;
+(id)_syncObjectsGenerationPredicate;
+(BOOL)_shouldInsertReceivedCodableGateway:(id)arg1 profile:(id)arg2 ;
@end

