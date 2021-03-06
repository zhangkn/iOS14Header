//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRRemoteObject.h"

@interface NRRemoteObjectCloud : NRRemoteObject
{
}

+ (_Bool)messagesShouldHaveValidSender;	// IMP=0x00000001000e6d80
- (void)sendSystemVersionsRequestToCompanionWithSentBlock:(CDUnknownBlockType)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e749c
- (void)sendSystemVersionsResponseWithSystemVersions:(id)arg1 forRequest:(id)arg2;	// IMP=0x00000001000e7268
- (void)sendSystemVersionsToDestinations:(id)arg1 withSentBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e6f7c
- (void)sendTermsEventToDestinations:(id)arg1 termsEvent:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3 withResponseBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e6d8c
- (void)sendMigratedAwayToDestination:(id)arg1 advertisedName:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e6d88
- (void)idsHandleReceiveSystemVersionBroadcast:(id)arg1;	// IMP=0x00000001000e6d7c
- (void)idsHandleSystemVersionRequest:(id)arg1;	// IMP=0x00000001000e6bb8
- (void)idsHandleAddTermsCloudEvent:(id)arg1;	// IMP=0x00000001000e6864
- (void)idsHandleMigratedAwayRequest:(id)arg1;	// IMP=0x00000001000e6694
- (void)idsHandleMigrationRequest:(id)arg1;	// IMP=0x00000001000e6690
- (void)sendMigrationRequestToDestinations:(id)arg1 shouldCancel:(_Bool)arg2 withSentBlock:(CDUnknownBlockType)arg3 withResponseBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e6224
- (void)registerProtobufHandlers;	// IMP=0x00000001000e61c0
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;	// IMP=0x00000001000e6144

@end

