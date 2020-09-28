//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NDTSQFile, NEKEnvironment, NEKPreferencesObserver;
@protocol OS_dispatch_queue;

@interface NEKDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_daemonQueue;	// 16 = 0x10
    NEKPreferencesObserver *_preferencesObserver;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_preferencesQueue;	// 32 = 0x20
    NDTSQFile *_logDbFile;	// 40 = 0x28
    NEKEnvironment *_environment;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010002f1cc
- (void)_enableDisableLogging;	// IMP=0x000000010002f1b8
- (void)_blockUntilUnlock;	// IMP=0x000000010002eec8
- (void)_triggerMigrationSync;	// IMP=0x000000010002ee68
- (void)_triggerNightlySync;	// IMP=0x000000010002ee08
- (void)_triggerFullSync;	// IMP=0x000000010002eda8
- (void)_databaseChangedExternally;	// IMP=0x000000010002ed50
- (void)didReceiveReunionSyncCommand:(id)arg1;	// IMP=0x000000010002eb04
- (void)didReceiveStartSyncCommand:(id)arg1;	// IMP=0x000000010002e8b8
- (void)_registerForNotifications;	// IMP=0x000000010002dbf8
- (id)environment;	// IMP=0x000000010002dbe0
- (id)initWithEnvironment:(id)arg1;	// IMP=0x000000010002d5f0

@end
