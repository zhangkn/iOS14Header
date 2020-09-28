//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLBarometerCalibrationSourceAggregator, CLBarometerCalibrationTrack;
@protocol CLBarometerCalibrationContextClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationContextManager : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLBarometerCalibrationContextClient> _delegate;	// 16 = 0x10
    array_4864b4ac *fDataBuffers;	// 24 = 0x18
    CLBarometerCalibrationSourceAggregator *_sourceAggregator;	// 32 = 0x20
    CLBarometerCalibrationTrack *_fTrack;	// 40 = 0x28
}

@property(retain, nonatomic) CLBarometerCalibrationTrack *fTrack; // @synthesize fTrack=_fTrack;
- (void)cleanup;	// IMP=0x0000000100813da8
- (void)wetStateUpdated:(unsigned long long)arg1;	// IMP=0x0000000100813da4
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x0000000100813da0
- (void)dealloc;	// IMP=0x0000000100813d64
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(array_4864b4ac *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x0000000100813c48

@end
