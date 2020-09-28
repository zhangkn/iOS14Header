/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class CADisplayLink, ARRunLoop;

@interface ARDisplayLink : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _callback;
	os_unfair_lock_s _lock;
	double _actualVsyncOffset;
	long long _preferredFramesPerSecond;
	double _vsyncOffset;
	ARRunLoop* _runloop;

}

@property (assign) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign) double vsyncOffset;                              //@synthesize vsyncOffset=_vsyncOffset - In the implementation block
@property (nonatomic,readonly) ARRunLoop * runloop;                 //@synthesize runloop=_runloop - In the implementation block
-(ARRunLoop *)runloop;
-(void)displayLinkCallback;
-(void)invalidate;
-(double)vsyncOffset;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)dealloc;
-(void)setVsyncOffset:(double)arg1 ;
-(id)init;
-(long long)preferredFramesPerSecond;
-(id)initWithPreferredFramesPerSecond:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)_recomputeActualVsyncOffsetWithVsyncOffset:(double)arg1 preferredFramesPerSecond:(long long)arg2 ;
@end
