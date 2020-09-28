//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KmlEndpointCreationConfig, KmlKeyDataTransmitter, KmlSecureChannel, NSArray, NSString;

@interface KmlCommandHandler : NSObject
{
    NSArray *_expectedCommands;	// 8 = 0x8
    KmlSecureChannel *_secureChannel;	// 16 = 0x10
    NSString *_pairingPassword;	// 24 = 0x18
    KmlEndpointCreationConfig *_keyConfig;	// 32 = 0x20
    _Bool _writeDataEnd;	// 40 = 0x28
    long long _currentCommand;	// 48 = 0x30
    long long _opControlFlowType;	// 56 = 0x38
    KmlKeyDataTransmitter *_keyData;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100056a20

@end
