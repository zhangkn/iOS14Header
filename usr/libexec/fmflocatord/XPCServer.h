//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPCServerProtocol-Protocol.h"

@class NSString;

@interface XPCServer : NSObject <XPCServerProtocol>
{
}

- (id)_errorForCode:(int)arg1 message:(id)arg2;	// IMP=0x0000000100033590
- (_Bool)_hasClientAccessEntitlement;	// IMP=0x0000000100033474
- (id)substituteStandardURLPlaceholders:(id)arg1 withAccount:(id)arg2 withServiceIdentifier:(id)arg3;	// IMP=0x00000001000330d4
- (oneway void)refreshMyLocationWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032928
- (oneway void)willDeleteiCloudAccountUsingCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032750
- (oneway void)didChangeFMFAccountInfo:(id)arg1 usingCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

