//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DIError : NSObject
{
}

+ (_Bool)failWithRetCode:(int)arg1 prefix:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001dbd8
+ (id)errorWithRetCode:(int)arg1 prefix:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001dad0
+ (_Bool)failWithEnumValue:(long long)arg1 errorString:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001daa0
+ (id)errorWithEnumValue:(long long)arg1 errorString:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001d8ec
+ (id)errorWithEnumValue:(long long)arg1 errorString:(id)arg2;	// IMP=0x000000010001d8d4

@end
