//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SDConnectionManagerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface SDXPCSession : NSObject <NSXPCListenerDelegate, SDConnectionManagerDelegate>
{
    NSXPCListener *_xpcManagerListener;	// 8 = 0x8
    NSMutableArray *_connections;	// 16 = 0x10
}

+ (id)sharedSession;	// IMP=0x000000010011b740
- (void).cxx_destruct;	// IMP=0x000000010011ba0c
@property(retain) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain) NSXPCListener *xpcManagerListener; // @synthesize xpcManagerListener=_xpcManagerListener;
- (void)connectionManagerDidInvalidate:(id)arg1;	// IMP=0x000000010011b9d4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010011b934
- (void)stop;	// IMP=0x000000010011b8dc
- (void)start;	// IMP=0x000000010011b81c
- (id)init;	// IMP=0x000000010011b7ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
