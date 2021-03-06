//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData;

@protocol BAASupportDelegate <NSObject>
+ (int)getBlessedUser:(unsigned int *)arg1 keybagUUID:(unsigned char [16])arg2;
+ (int)confirmSigKey:(unsigned int)arg1 status:(int)arg2;
+ (int)getSigKeyCertificates:(unsigned int)arg1 certificates:(id *)arg2;
+ (int)getSigKeyExpDate:(unsigned int)arg1 expirationDate:(unsigned long long *)arg2;
+ (int)setSigKey:(unsigned int)arg1 expirationDate:(unsigned long long)arg2 keyData:(NSData *)arg3 certificates:(NSArray *)arg4;
+ (int)generateSigKey:(unsigned int)arg1 keyData:(id *)arg2 attestation:(id *)arg3 pubKey:(id *)arg4;
+ (_Bool)isInternal;
@end

