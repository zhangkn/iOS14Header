//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SRNotificationUtility : NSObject
{
}

+ (void)_postNotificationRequest:(id)arg1 notificationCenter:(id)arg2 destinations:(unsigned long long)arg3;	// IMP=0x00000001000a1dec
+ (void)postConnectionErrorTimeoutNotification:(unsigned long long)arg1;	// IMP=0x00000001000a1d68
+ (void)postSiriUnavailableNotification:(unsigned long long)arg1;	// IMP=0x00000001000a1ce4
+ (id)_deviceSpecificStringForDefaultString:(id)arg1;	// IMP=0x00000001000a1c28
+ (id)_createNotificationRequest:(id)arg1 body:(id)arg2 identifier:(id)arg3;	// IMP=0x00000001000a1b40
+ (id)_connectionErrorTimeoutNotificationRequest;	// IMP=0x00000001000a1a64
+ (id)_siriUnvailableNotificationRequest;	// IMP=0x00000001000a1988
+ (id)_userNotificationCenter;	// IMP=0x00000001000a1958

@end
