//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMDCommandHandler.h"

@class FMDSupportedAccessoryRegistry;

@interface FMDCommandHandlerAccessoryConfiguration : FMDCommandHandler
{
    FMDSupportedAccessoryRegistry *_supportedAccessoryRegistry;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100026e24
@property(nonatomic) __weak FMDSupportedAccessoryRegistry *supportedAccessoryRegistry; // @synthesize supportedAccessoryRegistry=_supportedAccessoryRegistry;
- (void)handleCommand;	// IMP=0x0000000100026d50
- (id)initWithParams:(id)arg1 supportedAccessoryRegistry:(id)arg2;	// IMP=0x0000000100026cb4

@end
