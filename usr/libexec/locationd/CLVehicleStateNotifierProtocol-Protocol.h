//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@protocol CLVehicleStateNotifierProtocol <CLNotifierServiceProtocol>
- (void)resetVehicularFalsePositiveSuppressionDnd;
- (void)fetchVehicularFalsePositiveSuppressionStatusWithReply:(void (^)(_Bool))arg1;
- (void)fetchVehicularDndStateAndHintsAndOperatorStateWithReply:(void (^)(unsigned long long, unsigned long long, unsigned long long))arg1;
- (void)fetchVehicularDndOperatorStateWithReply:(void (^)(unsigned long long))arg1;
- (void)fetchVehicularDndStateAndHintsWithReply:(void (^)(unsigned long long, unsigned long long))arg1;
- (_Bool)syncgetDoSync:(void (^)(struct CLVehicleStateNotifier *))arg1;
- (void)doAsync:(void (^)(struct CLVehicleStateNotifier *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLVehicleStateNotifier *))arg1;
@end

