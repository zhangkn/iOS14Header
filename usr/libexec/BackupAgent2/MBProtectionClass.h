//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBProtectionClass : NSObject
{
}

+ (int)sqliteOpenFlagForProtectionClass:(int)arg1;	// IMP=0x000000010006f4e0
+ (_Bool)setWithFD:(int)arg1 value:(int)arg2 error:(id *)arg3;	// IMP=0x000000010006f414
+ (int)getWithFD:(int)arg1 error:(id *)arg2;	// IMP=0x000000010006f3c0
+ (int)openRawEncryptedWithPathFSR:(const char *)arg1 error:(id *)arg2;	// IMP=0x000000010006f18c
+ (_Bool)setWithPathFSR:(const char *)arg1 value:(int)arg2 error:(id *)arg3;	// IMP=0x000000010006f074
+ (_Bool)setWithPath:(id)arg1 value:(int)arg2 error:(id *)arg3;	// IMP=0x000000010006f01c
+ (int)getWithPathFSR:(const char *)arg1 error:(id *)arg2;	// IMP=0x000000010006efb8
+ (int)getWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006ef70
+ (int)openRawEncryptedWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000010006ef28
+ (_Bool)shouldCache:(int)arg1;	// IMP=0x000000010006ef18
+ (_Bool)canRestoreWhenLocked:(int)arg1;	// IMP=0x000000010006ef08
+ (_Bool)canBackupWhenLocked:(int)arg1;	// IMP=0x000000010006eef8
+ (_Bool)isProtected:(int)arg1;	// IMP=0x000000010006eeec

@end

