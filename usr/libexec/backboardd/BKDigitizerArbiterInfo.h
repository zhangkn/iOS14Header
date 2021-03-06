//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDigitizerEventSchedulerBase, NSMapTable, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BKDigitizerArbiterInfo : NSObject
{
    _Bool _shouldIgnoreTouchesWhileObjectInProximity;	// 8 = 0x8
    unsigned int _previousVendedTouchStreamReference;	// 12 = 0xc
    BKDigitizerEventSchedulerBase *_scheduler;	// 16 = 0x10
    NSMutableArray *_touchAuthenticationClients;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSMutableDictionary *_perDisplayInfo;	// 40 = 0x28
    NSMapTable *_referenceToTouchStreamClientsMapping;	// 48 = 0x30
}

@property(nonatomic) unsigned int previousVendedTouchStreamReference; // @synthesize previousVendedTouchStreamReference=_previousVendedTouchStreamReference;
@property(retain, nonatomic) NSMapTable *referenceToTouchStreamClientsMapping; // @synthesize referenceToTouchStreamClientsMapping=_referenceToTouchStreamClientsMapping;
@property(retain, nonatomic) NSMutableDictionary *perDisplayInfo; // @synthesize perDisplayInfo=_perDisplayInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool shouldIgnoreTouchesWhileObjectInProximity; // @synthesize shouldIgnoreTouchesWhileObjectInProximity=_shouldIgnoreTouchesWhileObjectInProximity;
@property(retain, nonatomic) NSMutableArray *touchAuthenticationClients; // @synthesize touchAuthenticationClients=_touchAuthenticationClients;
@property(retain, nonatomic) BKDigitizerEventSchedulerBase *scheduler; // @synthesize scheduler=_scheduler;
- (id)touchStreamClientForReference:(unsigned int)arg1;	// IMP=0x0000000100081768
- (unsigned int)addTouchStreamClient:(id)arg1 toDisplayUUID:(id)arg2;	// IMP=0x00000001000815ac
- (void)enumerateTouchStreamsForAllDisplaysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100081538
- (void)enumerateDigitizersForAllDisplaysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000814c4
- (void)enumerateDigitizersForDisplay:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010008133c
- (id)touchStreamInfoForDisplayUUID:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000100081280
- (struct OpaqueBKDigitizerInfo *)infoForDigitizerService:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000100080ddc
- (id)_displayInfoForDisplay:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000100080d3c
- (void)digitizerServiceDidDetach:(id)arg1;	// IMP=0x0000000100080cd8
- (void)dealloc;	// IMP=0x0000000100080c78
- (id)initWithQueue:(id)arg1 scheduler:(id)arg2;	// IMP=0x0000000100080bd0

@end

