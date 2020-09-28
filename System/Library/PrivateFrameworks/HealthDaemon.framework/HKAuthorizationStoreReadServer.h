/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKAuthorizationStoreReadServer <NSObject>
@required
-(void)remote_fetchAuthorizationRecordsForSourceBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchAuthorizationRecordsForType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchSourcesRequestingAuthorizationForTypes:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_fetchAuthorizationStatusesForDocumentType:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_fetchAuthorizationStatusesForSampleUUID:(id)arg1 completion:(/*^block*/id)arg2;

@end
