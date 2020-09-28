//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSPCTitleAndButtonProviding-Protocol.h"

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NAFuture;

@protocol HSProxCardConfigurable <HSPCTitleAndButtonProviding>
@property(retain) HSProxCardCoordinator *coordinator;
@property(retain) HSSetupStateMachineConfiguration *config;
- (NAFuture *)commitConfiguration;
- (id)initWithCoordinator:(HSProxCardCoordinator *)arg1 config:(HSSetupStateMachineConfiguration *)arg2;
@end
