/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncManagerPipelineTask.h>

@class HDCloudSyncShareSetupMetadata, HDCloudSyncPipelineStageAcceptShares, NSArray;

@interface HDCloudSyncManagerAcceptSharesTask : HDCloudSyncManagerPipelineTask {

	HDCloudSyncShareSetupMetadata* _shareSetupMetadata;
	HDCloudSyncPipelineStageAcceptShares* _acceptSharesPipelineStage;

}

@property (nonatomic,copy,readonly) NSArray * acceptedShares; 
-(id)pipelineForRepository:(id)arg1 ;
-(NSArray *)acceptedShares;
-(id)initWithManager:(id)arg1 context:(id)arg2 shareSetupMetadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)requiresExistingShareOwnerParticipant;
@end
