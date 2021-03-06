//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_NFSession.h"

#import "NFTrustSessionInterface-Protocol.h"

@class NFSecureElementWrapper, NFTrustDBApplet, NFTrustDataBase, NSArray, NSString;

@interface _NFTrustSession : _NFSession <NFTrustSessionInterface>
{
    _Bool _isInstanceSelected;	// 8 = 0x8
    NFSecureElementWrapper *_secureElementWrapper;	// 16 = 0x10
    NSString *_applicationIdentifier;	// 24 = 0x18
    NFTrustDBApplet *_trustDBApplet;	// 32 = 0x20
    NFTrustDataBase *_trustDB;	// 40 = 0x28
    NSArray *_keys;	// 48 = 0x30
}

+ (id)validateEntitlements:(id)arg1;	// IMP=0x00000001000ac0ac
- (void).cxx_destruct;	// IMP=0x00000001000b4ea4
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NFTrustDataBase *trustDB; // @synthesize trustDB=_trustDB;
@property(retain, nonatomic) NFTrustDBApplet *trustDBApplet; // @synthesize trustDBApplet=_trustDBApplet;
@property(nonatomic) _Bool isInstanceSelected; // @synthesize isInstanceSelected=_isInstanceSelected;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) NFSecureElementWrapper *secureElementWrapper; // @synthesize secureElementWrapper=_secureElementWrapper;
- (oneway void)signWithKey:(id)arg1 signRequest:(id)arg2 paymentRequest:(id)arg3 authorization:(id)arg4 callBack:(CDUnknownBlockType)arg5;	// IMP=0x00000001000b28fc
- (oneway void)createKey:(id)arg1 cresteKeyRequest:(id)arg2 callBack:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b02c4
- (oneway void)deleteKey:(id)arg1 callBack:(CDUnknownBlockType)arg2;	// IMP=0x00000001000af81c
- (id)deleteDBKey:(id)arg1;	// IMP=0x00000001000ae88c
- (unsigned long long)getNumberOfKeys:(id *)arg1;	// IMP=0x00000001000ae840
- (oneway void)listKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ae318
- (id)getListOfKeysWithError:(id *)arg1;	// IMP=0x00000001000ad888
- (void)deselectInstance;	// IMP=0x00000001000ad374
- (id)selectInstance;	// IMP=0x00000001000ac944
- (unsigned long long)initialRoutingMode;	// IMP=0x00000001000ac93c
- (void)didStartSession:(id)arg1;	// IMP=0x00000001000ac84c
- (id)initWithRemoteObject:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000001000ac468

@end

