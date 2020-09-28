//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface CBAPTicket : NSObject
{
    _Bool _isValid;	// 8 = 0x8
    NSData *_apTicket;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100014150
- (void).cxx_destruct;	// IMP=0x0000000100014b1c
@property(retain, nonatomic) NSData *apTicket; // @synthesize apTicket=_apTicket;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (_Bool)_hasEntitlementBoolForTag:(unsigned long long)arg1;	// IMP=0x00000001000148dc
- (_Bool)_verifyAPTicketDigest:(id)arg1;	// IMP=0x00000001000145a8
- (id)_loadAPTicket;	// IMP=0x00000001000143c4
- (_Bool)isEntitledForTag:(unsigned long long)arg1;	// IMP=0x0000000100014340
- (id)init;	// IMP=0x00000001000141bc

@end
