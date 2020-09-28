//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Account, NSString;

@interface ServiceProvider : NSObject
{
    Account *_account;	// 8 = 0x8
    id _didDeactivateToken;	// 16 = 0x10
    id _didUpdateToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100008c54
@property(retain, nonatomic) id didUpdateToken; // @synthesize didUpdateToken=_didUpdateToken;
@property(retain, nonatomic) id didDeactivateToken; // @synthesize didDeactivateToken=_didDeactivateToken;
@property(retain, nonatomic) Account *account; // @synthesize account=_account;
- (void)_teardown;	// IMP=0x0000000100008adc
- (void)deinitializeProvider;	// IMP=0x0000000100008ad8
- (void)accountDidChange;	// IMP=0x0000000100008ad4
- (void)accountDeactivated;	// IMP=0x0000000100008ac8
@property(readonly, nonatomic) NSString *serviceName;
- (void)stop;	// IMP=0x0000000100008ab0
- (void)start;	// IMP=0x000000010000864c

@end
