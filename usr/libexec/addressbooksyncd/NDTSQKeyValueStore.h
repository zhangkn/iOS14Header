//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NDTSQSchema.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NDTSQKeyValueStore : NDTSQSchema
{
    NSString *_insert;	// 8 = 0x8
    NSString *_select;	// 16 = 0x10
    NSString *_baseName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000033c0
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100003268
- (id)getDataForKey:(id)arg1 default:(id)arg2;	// IMP=0x00000001000030a0
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100002efc
- (id)getStringForKey:(id)arg1 default:(id)arg2;	// IMP=0x0000000100002d1c
- (void)setDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000100002bec
- (double)getDoubleForKey:(id)arg1 default:(double)arg2;	// IMP=0x0000000100002a80
- (void)setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000010000294c
- (long long)getIntegerForKey:(id)arg1 default:(long long)arg2;	// IMP=0x0000000100002784
- (id)instanceName;	// IMP=0x000000010000273c
- (void)migrateFrom:(long long)arg1;	// IMP=0x0000000100002738
- (long long)currentVersion;	// IMP=0x0000000100002730
- (void)createTables;	// IMP=0x00000001000026bc
- (id)initWithName:(id)arg1;	// IMP=0x00000001000025b8

@end
