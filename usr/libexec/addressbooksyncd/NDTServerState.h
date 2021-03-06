//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NDTSQFile, NDTSQKeyValueStore, NSString;

__attribute__((visibility("hidden")))
@interface NDTServerState : NSObject
{
    NSString *_path;	// 8 = 0x8
    NDTSQKeyValueStore *_store;	// 16 = 0x10
    NDTSQFile *_file;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100017a94
- (_Bool)getBoolValueForKey:(id)arg1 default:(_Bool)arg2;	// IMP=0x0000000100017a1c
- (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000001000179b8
- (double)getDoubleValueForKey:(id)arg1 default:(double)arg2;	// IMP=0x0000000100017940
- (void)setDoubleValue:(double)arg1 forKey:(id)arg2;	// IMP=0x00000001000178d4
- (long long)getIntegerValueForKey:(id)arg1 default:(long long)arg2;	// IMP=0x0000000100017864
- (void)setIntegerValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000100017800
- (id)getStringValueForKey:(id)arg1 default:(id)arg2;	// IMP=0x0000000100017774
- (void)setStringValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000176fc
- (void)_migrateFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000001000174cc
- (id)initWithPath:(id)arg1;	// IMP=0x00000001000172d0

@end

