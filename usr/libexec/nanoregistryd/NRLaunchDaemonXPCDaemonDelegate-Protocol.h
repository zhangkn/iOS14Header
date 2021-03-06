//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSUUID;

@protocol NRLaunchDaemonXPCDaemonDelegate <NSObject>
- (void)xpcClearRecoveryFlagWithCompletion:(void (^)(NSError *))arg1;
- (void)xpcCheckIfFlaggedForRecoveryWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)xpcGetBackupHashWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)xpcUnquarantineDataWithStoreUUID:(NSUUID *)arg1 services:(NSSet *)arg2 completion:(void (^)(NSError *))arg3;
- (void)xpcDeleteQuarantinedDataWithStoreUUID:(NSUUID *)arg1 completion:(void (^)(void))arg2;
- (void)xpcQuarantineDataWithStoreUUID:(NSUUID *)arg1 services:(NSSet *)arg2 completion:(void (^)(NSError *))arg3;
- (void)xpcCleanupPairingStoreWithUUIDs:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)xpcDeletePairedStoreWithUUID:(NSUUID *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)xpcEnableNanoDaemons:(unsigned long long)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

