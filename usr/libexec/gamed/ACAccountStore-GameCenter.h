//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (GameCenter)
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e9c24
- (void)_gkSaveCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e94dc
- (void)_getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e8fac
- (id)_gkAccountForAppleID:(id)arg1;	// IMP=0x00000001000e8df0
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1;	// IMP=0x00000001000e8bec
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;	// IMP=0x00000001000e8b7c
- (id)_gkAllCredentials;	// IMP=0x00000001000e8b58
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e87b4
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;	// IMP=0x00000001000e8780
- (id)_gkMapAccountsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e7d6c
@end
