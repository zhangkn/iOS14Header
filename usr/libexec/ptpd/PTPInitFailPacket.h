//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTPInitFailPacket : NSObject
{
    unsigned int _reason;	// 8 = 0x8
}

- (void)setReason:(unsigned int)arg1;	// IMP=0x000000010002d844
- (unsigned int)reason;	// IMP=0x000000010002d83c
- (id)description;	// IMP=0x000000010002d7ec
- (id)contentForTCP;	// IMP=0x000000010002d760
- (id)initWithTCPBuffer:(void *)arg1;	// IMP=0x000000010002d6fc
- (id)initWithReason:(unsigned int)arg1;	// IMP=0x000000010002d6b4

@end

