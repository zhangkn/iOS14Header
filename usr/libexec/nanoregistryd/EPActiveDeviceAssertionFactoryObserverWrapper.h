//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol EPActiveDeviceAssertionFactoryObserver;

@interface EPActiveDeviceAssertionFactoryObserverWrapper : NSObject
{
    id <EPActiveDeviceAssertionFactoryObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010008d6dc
@property(nonatomic) __weak id <EPActiveDeviceAssertionFactoryObserver> observer; // @synthesize observer=_observer;
- (void)assertionFactoryDidBecomeIdle:(id)arg1;	// IMP=0x000000010008d660

@end
