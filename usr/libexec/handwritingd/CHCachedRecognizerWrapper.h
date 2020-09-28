//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecognizer;

@interface CHCachedRecognizerWrapper : NSObject
{
    CHRecognizer *_recognizer;	// 8 = 0x8
    double _lastActiveTimestamp;	// 16 = 0x10
    long long _activeRequestCount;	// 24 = 0x18
}

@property(readonly, nonatomic) long long activeRequestCount; // @synthesize activeRequestCount=_activeRequestCount;
@property(readonly, nonatomic) double lastActiveTimestamp; // @synthesize lastActiveTimestamp=_lastActiveTimestamp;
- (void)dealloc;	// IMP=0x0000000100004f24
- (void)checkInRecognizer;	// IMP=0x0000000100004ee4
- (id)checkOutRecognizer;	// IMP=0x0000000100004ed0
- (id)initWithRecognizer:(id)arg1;	// IMP=0x0000000100004e5c

@end
