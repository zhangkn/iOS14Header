//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class DeliveryAccount, MailAccount, NSConditionLock, NSDictionary, NSError, NSString, NSThread;

@interface MCNewEmailAccountPayloadHandler : MCNewPayloadHandler
{
    NSConditionLock *_validationLock;	// 32 = 0x20
    NSThread *_validationThread;	// 40 = 0x28
    NSDictionary *_setAsideAccountInfo;	// 48 = 0x30
    _Bool _wasInstalledByMDM;	// 56 = 0x38
    NSString *_personaID;	// 64 = 0x40
    MailAccount *_incomingAccount;	// 72 = 0x48
    _Bool _incomingAccountUsesSSL;	// 80 = 0x50
    DeliveryAccount *_outgoingAccount;	// 88 = 0x58
    _Bool _outgoingAccountUsesSSL;	// 96 = 0x60
    _Bool _validationDone;	// 97 = 0x61
    _Bool _validationResult;	// 98 = 0x62
    NSError *_validationError;	// 104 = 0x68
    NSString *_incomingACAccountIdentifier;	// 112 = 0x70
    NSString *_outgoingACAccountIdentifier;	// 120 = 0x78
}

+ (id)unhashedAccountIdentifierWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;	// IMP=0x0000000100023be4
+ (id)MCACAccountIdentifierWithOutgoingAccountInfo:(id)arg1;	// IMP=0x0000000100023afc
+ (id)MCACAccountIdentifierWithIncomingAccountInfo:(id)arg1;	// IMP=0x00000001000239ec
- (void).cxx_destruct;	// IMP=0x0000000100028470
@property(retain, nonatomic) NSString *outgoingACAccountIdentifier; // @synthesize outgoingACAccountIdentifier=_outgoingACAccountIdentifier;
@property(retain, nonatomic) NSString *incomingACAccountIdentifier; // @synthesize incomingACAccountIdentifier=_incomingACAccountIdentifier;
- (void)unsetAside;	// IMP=0x0000000100028350
- (void)setAside;	// IMP=0x0000000100027f84
- (void)remove;	// IMP=0x0000000100027ed4
- (void)_remove;	// IMP=0x0000000100027cb8
- (id)_removeAccountWithPersistentResourceID:(id)arg1 fromArray:(id)arg2 outArray:(id *)arg3;	// IMP=0x0000000100027ac0
- (_Bool)isInstalled;	// IMP=0x00000001000278ec
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100027550
- (id)_installWithIncomingAccountInfo:(id)arg1 outgoingAccountInfo:(id)arg2 isInstalledByMDM:(_Bool)arg3 personaID:(id)arg4;	// IMP=0x00000001000269c8
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100026330
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(_Bool)arg3;	// IMP=0x0000000100026058
- (id)_errorFromValidationError:(id)arg1;	// IMP=0x0000000100025e18
- (void)_validateIncomingAccountOnThread;	// IMP=0x0000000100025ca4
- (id)_outgoingAccountWithAccountInfo:(id)arg1;	// IMP=0x00000001000257e0
- (id)_outgoingAccountInfoDictionaryWithUserInput:(id)arg1;	// IMP=0x000000010002520c
- (id)_incomingAccountWithAccountInfo:(id)arg1;	// IMP=0x0000000100024bcc
- (id)_incomingAccountInfoDictionaryWithUserInput:(id)arg1 isPreflight:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x0000000100023cd0
- (id)_persistentIDForCertificateUUID:(id)arg1 notFoundLocErrorString:(id)arg2 badLocErrorString:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100023714
- (id)_authSchemeForAuthenticationMethod:(id)arg1;	// IMP=0x0000000100023654
- (id)userInputFields;	// IMP=0x0000000100022cc8
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x0000000100022c20

@end

