/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetSync.framework/CoreDuetSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKSyncRemoteContextStorageDelegate <_DKSyncRemoteStorageDelegate>
@required
-(void)remoteContextStorage:(id)arg1 registrationIdentifier:(id)arg2 setArchivedObjects:(id)arg3 peer:(id)arg4;
-(BOOL)remoteContextStorage:(id)arg1 hasKnowledgeOfKeyPath:(id)arg2;
-(void)remoteContextStorage:(id)arg1 subscribeToChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
-(void)remoteContextStorage:(id)arg1 unsubscribeFromChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
-(id)remoteContextStorage:(id)arg1 archivedObjectsForKeyPaths:(id)arg2;

@end
