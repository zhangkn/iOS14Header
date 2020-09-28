/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTPingService <NSObject>
@required
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4;
-(void)subscribeWithMachServiceName:(id)arg1;
-(void)sendBulletinSummary:(id)arg1;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)unsubscribeFromSectionID:(id)arg1;

@end
