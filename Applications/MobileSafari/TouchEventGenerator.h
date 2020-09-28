//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TouchEventGenerator : NSObject
{
    struct __IOHIDEventSystemClient *_ioSystemClient;	// 8 = 0x8
    struct {
        int identifier;
        struct CGPoint point;
        double pathMajorRadius;
        double pathPressure;
        unsigned char pathProximity;
    } _activePoints[5];	// 16 = 0x10
    unsigned long long _activePointCount;	// 256 = 0x100
}

+ (id)sharedTouchEventGenerator;	// IMP=0x0000000100139c94
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;	// IMP=0x000000010013a520
- (void)liftUp:(struct CGPoint)arg1;	// IMP=0x000000010013a510
- (void)liftUp:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000010013a488
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000010013a3cc
- (void)touchDown:(struct CGPoint)arg1;	// IMP=0x000000010013a39c
- (void)touchDown:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000010013a314
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000010013a29c
- (void)_updateTouchPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000010013a204
- (_Bool)_sendHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100139f6c
- (struct __IOHIDEvent *)_createIOHIDEventType:(int)arg1;	// IMP=0x0000000100139d50
- (id)init;	// IMP=0x0000000100139cd8

@end
