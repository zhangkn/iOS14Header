//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol EPIDSDevicePairingAgentObserver;

@protocol EPIDSDevicePairingAgent <NSObject>
- (void)disablePairingCheck:(_Bool)arg1;
- (void)removeIDSPairingAgentObserver:(id <EPIDSDevicePairingAgentObserver>)arg1;
- (void)addIDSPairingAgentObserver:(id <EPIDSDevicePairingAgentObserver>)arg1;
@end
