//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCDependencyReader.h>

@class NSMutableDictionary;

@interface MCDependencyManager : MCDependencyReader
{
    NSMutableDictionary *_memberQueueSystemOrphansDict;	// 8 = 0x8
    NSMutableDictionary *_memberQueueUserOrphansDict;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0000000100064524
- (void).cxx_destruct;	// IMP=0x0000000100066980
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserOrphansDict; // @synthesize memberQueueUserOrphansDict=_memberQueueUserOrphansDict;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemOrphansDict; // @synthesize memberQueueSystemOrphansDict=_memberQueueSystemOrphansDict;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 fromSystem:(_Bool)arg5 user:(_Bool)arg6;	// IMP=0x0000000100066780
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;	// IMP=0x00000001000666e8
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 toSystem:(_Bool)arg5 user:(_Bool)arg6;	// IMP=0x00000001000664f0
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;	// IMP=0x0000000100066458
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x000000010006605c
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x0000000100065fe8
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x0000000100065c9c
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x0000000100065c28
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x0000000100065844
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x00000001000657d0
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x00000001000655e4
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x0000000100065570
- (id)memberQueueOrphanedParentsInUserDomain:(id)arg1;	// IMP=0x00000001000654f0
- (id)memberQueueOrphanedParentsInSystemDomain:(id)arg1;	// IMP=0x0000000100065470
- (id)orphanedParentsForUserDomain:(id)arg1;	// IMP=0x00000001000652e4
- (id)orphanedParentsForSystemDomain:(id)arg1;	// IMP=0x0000000100065158
- (id)orphanedParentsForDomain:(id)arg1;	// IMP=0x0000000100064e5c
- (void)memberQueueRemoveOrphanParent:(id)arg1 inDomain:(id)arg2 fromSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x0000000100064bb4
- (void)memberQueueAddOrphanParent:(id)arg1 inDomain:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x00000001000648f0
- (void)commitChangesCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100064664
- (void)commitChanges;	// IMP=0x00000001000645bc
- (id)_init;	// IMP=0x0000000100064530

@end
