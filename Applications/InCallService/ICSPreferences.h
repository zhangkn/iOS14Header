//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHPreferences.h"

@class NSString;

@interface ICSPreferences : PHPreferences
{
    unsigned long long _announcements;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
}

+ (id)sharedPreferences;	// IMP=0x0000000100038ba8
- (void).cxx_destruct;	// IMP=0x0000000100038f7c
- (void)setDomain:(id)arg1;	// IMP=0x0000000100038f70
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100038e40
@property(readonly, nonatomic) long long moments;
@property(readonly, nonatomic) _Bool hasAdoptedModernInCallAPI;
@property(nonatomic) _Bool hasBannersEnabled;
@property(nonatomic) unsigned long long announcements; // @synthesize announcements=_announcements;
- (id)domain;	// IMP=0x0000000100038c44
@property(readonly, nonatomic) NSString *pptOutgoingFaceTimeCallHandleValue;
@property(readonly, nonatomic) NSString *pptIncomingFaceTimeCallHandleValue;
@property(readonly, nonatomic) NSString *pptOutgoingCallHandleValue;
@property(readonly, nonatomic) NSString *pptIncomingCallHandleValue;

@end
