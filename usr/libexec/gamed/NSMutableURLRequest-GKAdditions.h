//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;	// IMP=0x0000000100092848
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;	// IMP=0x0000000100092600
- (void)setSAPversion:(id)arg1;	// IMP=0x0000000100093294
- (void)setSAPSignature:(id)arg1;	// IMP=0x0000000100093220
- (void)setLocale:(id)arg1;	// IMP=0x0000000100093100
- (void)setInternal:(_Bool)arg1;	// IMP=0x0000000100093074
- (void)setPushToken:(id)arg1;	// IMP=0x0000000100092f44
- (void)setBuildVersion:(id)arg1;	// IMP=0x0000000100092eb8
- (void)setProtocolVersion:(id)arg1;	// IMP=0x0000000100092e2c
- (void)setProcessName:(id)arg1;	// IMP=0x0000000100092da0
- (void)setDeviceUniqueID:(id)arg1;	// IMP=0x0000000100092d14
- (void)setRestrictions:(id)arg1;	// IMP=0x0000000100092c4c
- (void)setStoreMode:(id)arg1;	// IMP=0x0000000100092bb8
- (void)setGameDescriptor:(id)arg1;	// IMP=0x000000010009298c
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;	// IMP=0x0000000100092898
@end

