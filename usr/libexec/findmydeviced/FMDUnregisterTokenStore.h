//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMDUnregisterTokenStore : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
}

+ (id)computeAccessoryIdentifierWithIdentifier:(id)arg1;	// IMP=0x00000001000b3efc
+ (id)keychainLookupKeyForIdentifier:(id)arg1;	// IMP=0x00000001000b1c80
+ (id)tokenKeyForIdentifier:(id)arg1;	// IMP=0x00000001000b1bd4
- (void).cxx_destruct;	// IMP=0x00000001000b3ff4
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)allKeychainLookupKeys;	// IMP=0x00000001000b3e74
- (id)allTokenKeys;	// IMP=0x00000001000b3e0c
- (void)removeUnregisterTokenForKey:(id)arg1;	// IMP=0x00000001000b3cc4
- (void)removeKeychainItemForKey:(id)arg1;	// IMP=0x00000001000b3aa8
- (_Bool)isTokenDictionaryValid:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000b3820
- (void)clearUnregisterTokens;	// IMP=0x00000001000b3684
- (void)expungeUnregisterTokens:(id)arg1;	// IMP=0x00000001000b2f5c
- (void)saveUnregisterToken:(id)arg1 identifier:(id)arg2 expiryDate:(id)arg3;	// IMP=0x00000001000b291c
- (void)removeUnregisterTokenForIdentifier:(id)arg1;	// IMP=0x00000001000b27d8
- (id)unregisterTokenForIdentifier:(id)arg1;	// IMP=0x00000001000b1ea8
- (_Bool)accessoriesNeedUnregister;	// IMP=0x00000001000b1d2c
- (id)init;	// IMP=0x00000001000b1b28

@end

