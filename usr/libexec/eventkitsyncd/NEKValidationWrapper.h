//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SYChange-Protocol.h"

@class NSDate, NSString;

@interface NEKValidationWrapper : NSObject <SYChange>
{
    _Bool _showAlert;	// 8 = 0x8
    NSDate *_start;	// 16 = 0x10
    NSDate *_end;	// 24 = 0x18
    long long _masterCount;	// 32 = 0x20
    long long _occurrenceCount;	// 40 = 0x28
}

+ (_Bool)validationEnabled;	// IMP=0x0000000100014350
+ (id)validationWrapperForPb:(id)arg1;	// IMP=0x00000001000141f0
+ (id)validationWrapperForSameSpan:(id)arg1;	// IMP=0x0000000100014124
+ (id)validationWrapperForRightNow;	// IMP=0x0000000100014044
- (void).cxx_destruct;	// IMP=0x0000000100014df8
@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(nonatomic) long long occurrenceCount; // @synthesize occurrenceCount=_occurrenceCount;
@property(nonatomic) long long masterCount; // @synthesize masterCount=_masterCount;
@property(retain, nonatomic) NSDate *end; // @synthesize end=_end;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
- (void)validate;	// IMP=0x0000000100014ba4
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100014820
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
@property(readonly, nonatomic) long long changeType;
- (void)_countEvents;	// IMP=0x0000000100014358

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
