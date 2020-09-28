//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class CLCppContainer, CLLocation, NSString;
@protocol CLLocationProviderClientProtocol;

@protocol CLLocationProviderProtocol <CLNotifierServiceProtocol>
- (NSString *)syncgetName;
- (_Bool)syncgetIsSimulationEnabled;
- (_Bool)syncgetLocationUnavailable;
- (_Bool)syncgetLocationPrivate:(struct CLDaemonLocationPrivate *)arg1;
- (_Bool)syncgetLocation:(CDStruct_88736aa7 *)arg1;
- (_Bool)syncgetNotification:(const int *)arg1 data:(struct NotificationData *)arg2;
- (void)sendSimulatedLocationUnavailable;
- (void)sendSimulatedLocation:(CLLocation *)arg1;
- (void)setSimulationEnabled:(_Bool)arg1;
- (void)start;
- (void)shutdown;
- (void)register:(byref id <CLLocationProviderClientProtocol>)arg1 forNotification:(int)arg2 distanceFilter:(double)arg3;
- (void)updateNotification:(int)arg1 withRegistrationInfo:(CLCppContainer *)arg2 forClient:(byref id <CLLocationProviderClientProtocol>)arg3;
@end
