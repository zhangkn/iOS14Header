//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MBProgressDelegate;

@interface MBProgress : NSObject
{
    NSObject<MBProgressDelegate> *_delegate;	// 8 = 0x8
    double _offset;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    double _current;	// 32 = 0x20
    double _total;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001faec
@property(nonatomic) double total; // @synthesize total=_total;
@property(nonatomic) double current; // @synthesize current=_current;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSObject<MBProgressDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)updateWithDuration:(double)arg1 size:(unsigned long long)arg2;	// IMP=0x000000010001f9c0
- (void)addDuration:(double)arg1;	// IMP=0x000000010001f924
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) double percentage;
- (id)init;	// IMP=0x000000010001f888

@end
