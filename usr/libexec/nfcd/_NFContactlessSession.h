//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_NFSession.h"

#import "NFContactlessSessionInterface-Protocol.h"

@class NFApplet, NFSecureElementWrapper, NSArray, NSMutableDictionary, NSSet;

@interface _NFContactlessSession : _NFSession <NFContactlessSessionInterface>
{
    _Bool _fieldPresent;	// 8 = 0x8
    NFApplet *_activeApplet;	// 16 = 0x10
    NSArray *_activeGroupMembers;	// 24 = 0x18
    NSMutableDictionary *_appletMap;	// 32 = 0x20
    NSArray *_applets;	// 40 = 0x28
    unsigned long long _emulationState;	// 48 = 0x30
    unsigned long long _activeAppletEmulationProtocol;	// 56 = 0x38
    _Bool _plasticCardMode;	// 64 = 0x40
    NFSecureElementWrapper *_secureElementWrapper;	// 72 = 0x48
    NSArray *_secureElementWrappers;	// 80 = 0x50
    NSSet *_activeKeyIdentifiers;	// 88 = 0x58
}

+ (id)validateEntitlements:(id)arg1;	// IMP=0x000000010003ea7c
- (void).cxx_destruct;	// IMP=0x0000000100043e48
@property _Bool plasticCardMode; // @synthesize plasticCardMode=_plasticCardMode;
@property(readonly) NSSet *activeKeyIdentifiers; // @synthesize activeKeyIdentifiers=_activeKeyIdentifiers;
@property(retain) NSArray *secureElementWrappers; // @synthesize secureElementWrappers=_secureElementWrappers;
@property(retain) NFSecureElementWrapper *secureElementWrapper; // @synthesize secureElementWrapper=_secureElementWrapper;
- (void)handleFelicaStateEvent:(id)arg1;	// IMP=0x0000000100043d70
- (void)handleSelectEvent:(id)arg1;	// IMP=0x0000000100043c04
- (void)handleFieldReset;	// IMP=0x0000000100043afc
- (void)handleFieldNotification:(id)arg1;	// IMP=0x0000000100043a90
- (void)handleFieldChanged:(_Bool)arg1;	// IMP=0x0000000100043920
- (_Bool)startDefaultMode;	// IMP=0x0000000100043910
- (_Bool)startDefaultModeAndKeepSEOn:(_Bool)arg1;	// IMP=0x00000001000435b4
- (_Bool)startFieldDetectMode;	// IMP=0x00000001000435a4
- (_Bool)_startFieldDetectAndKeepSEOn:(_Bool)arg1;	// IMP=0x0000000100043520
- (_Bool)startWiredMode;	// IMP=0x00000001000434ac
- (_Bool)startCardEmulationWithType:(unsigned long long)arg1;	// IMP=0x00000001000434a0
- (oneway void)stopCardEmulation:(CDUnknownBlockType)arg1;	// IMP=0x0000000100043274
- (oneway void)startCardEmulation:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042e8c
- (oneway void)setActiveApplet:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042bd4
- (oneway void)getApplets:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042ab0
- (_Bool)_configureEmulationType:(unsigned long long)arg1 routingConfigWhenEmulationOff:(unsigned long long)arg2 fieldDetect:(long long)arg3;	// IMP=0x000000010004244c
- (_Bool)_configureEmulationType:(unsigned long long)arg1;	// IMP=0x00000001000423b0
- (unsigned long long)_getActiveAppletEmulationProtocol:(id)arg1;	// IMP=0x0000000100041e68
- (id)_getRelatedGroupMembersForActiveApplet;	// IMP=0x0000000100041a58
- (id)_getAppletsForAids:(id)arg1;	// IMP=0x000000010004178c
- (id)preloadApplets;	// IMP=0x0000000100040ac8
- (id)setActiveApplet:(id)arg1;	// IMP=0x000000010003ff60
- (id)setActiveKeys:(id)arg1 onApplet:(id)arg2;	// IMP=0x000000010003fbe8
- (id)_activateKeys:(_Bool)arg1 forIdentifiers:(id)arg2 onApplet:(id)arg3;	// IMP=0x000000010003f838
- (id)seidForApplet:(id)arg1;	// IMP=0x000000010003f7cc
- (void)switchToSecureElementWrapperForApplet:(id)arg1;	// IMP=0x000000010003f780
- (id)_getSecureElementWrapperForApplet:(id)arg1;	// IMP=0x000000010003f3a0
- (void)_setActiveSecureElementWrapper:(id)arg1;	// IMP=0x000000010003f204
- (_Bool)useFilteredApplets;	// IMP=0x000000010003f1fc
@property(readonly) NSArray *applets;
@property(readonly) NSArray *activeAppletGroupMembers;
@property(readonly) NFApplet *activeApplet;
- (void)cleanup;	// IMP=0x000000010003ee84
- (void)didStartSession:(id)arg1;	// IMP=0x000000010003ecec
- (_Bool)willStartSession;	// IMP=0x000000010003ec78
- (unsigned long long)initialRoutingMode;	// IMP=0x000000010003ec70

@end
