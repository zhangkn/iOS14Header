//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDRequestDecorator-Protocol.h"

@class NSString;

@interface FMDActingRequestDecorator : NSObject <FMDRequestDecorator>
{
    CDUnknownBlockType _deviceContextGenerator;	// 8 = 0x8
    CDUnknownBlockType _deviceInfoGenerator;	// 16 = 0x10
    CDUnknownBlockType _serverContextGenerator;	// 24 = 0x18
    CDUnknownBlockType _requestHeaderGenerator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010004b6e4
@property(copy, nonatomic) CDUnknownBlockType requestHeaderGenerator; // @synthesize requestHeaderGenerator=_requestHeaderGenerator;
@property(copy, nonatomic) CDUnknownBlockType serverContextGenerator; // @synthesize serverContextGenerator=_serverContextGenerator;
@property(copy, nonatomic) CDUnknownBlockType deviceInfoGenerator; // @synthesize deviceInfoGenerator=_deviceInfoGenerator;
@property(copy, nonatomic) CDUnknownBlockType deviceContextGenerator; // @synthesize deviceContextGenerator=_deviceContextGenerator;
- (id)standardDeviceContext;	// IMP=0x000000010004b584
- (id)registerDeviceContextForAccount:(id)arg1;	// IMP=0x000000010004b4e8
- (id)initWithDeviceContextGenerator:(CDUnknownBlockType)arg1 deviceInfoGenerator:(CDUnknownBlockType)arg2 serverContextGenerator:(CDUnknownBlockType)arg3 requestHeaderGenerator:(CDUnknownBlockType)arg4;	// IMP=0x000000010004b3d4
- (id)init;	// IMP=0x000000010004b32c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

