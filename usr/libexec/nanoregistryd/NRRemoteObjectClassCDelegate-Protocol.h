//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NRRemoteObjectClassC, NRTermsEvent, NSDictionary, NSUUID;

@protocol NRRemoteObjectClassCDelegate <NSObject>
- (void)remoteObject:(NRRemoteObjectClassC *)arg1 receivedCheckTermsEvent:(NRTermsEvent *)arg2 fromIDSBTUUID:(NSUUID *)arg3 responseBlock:(void (^)(_Bool, NSError *))arg4;
- (void)remoteObject:(NRRemoteObjectClassC *)arg1 receivedAddTermsEvent:(NRTermsEvent *)arg2 fromIDSBTUUID:(NSUUID *)arg3 responseBlock:(void (^)(NSError *))arg4;
- (void)remoteObject:(NRRemoteObjectClassC *)arg1 receivedPropertyRequestWithRequestIdentifier:(id)arg2 fromIDSBTUUID:(NSUUID *)arg3;
- (void)remoteObject:(NRRemoteObjectClassC *)arg1 receivedPropertyChanges:(NSDictionary *)arg2 isAllProperties:(_Bool)arg3 fromIDSBTUUID:(NSUUID *)arg4;
@end
