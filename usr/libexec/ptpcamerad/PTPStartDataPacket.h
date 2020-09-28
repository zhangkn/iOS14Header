//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PTPStartDataPacket : NSObject
{
    unsigned int _transactionID;	// 8 = 0x8
    unsigned long long _totalDataSize;	// 16 = 0x10
}

- (void)setTotalDataSize:(unsigned long long)arg1;	// IMP=0x0000000100010404
- (unsigned long long)totalDataSize;	// IMP=0x00000001000103fc
- (void)setTransactionID:(unsigned int)arg1;	// IMP=0x00000001000103f4
- (unsigned int)transactionID;	// IMP=0x00000001000103ec
- (id)description;	// IMP=0x00000001000103a4
- (id)contentForTCP;	// IMP=0x000000010001030c
- (id)initWithTCPBuffer:(void *)arg1;	// IMP=0x0000000100010288
- (id)initWithTransactionID:(unsigned int)arg1 totalDataSize:(unsigned long long)arg2;	// IMP=0x0000000100010238

@end
