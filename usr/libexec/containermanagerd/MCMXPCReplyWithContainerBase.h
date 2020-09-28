//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMXPCReplyWithContainer-Protocol.h"

@class NSString, NSURL, NSUUID;

@interface MCMXPCReplyWithContainerBase : NSObject <MCMXPCReplyWithContainer>
{
    _Bool _existed;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSString *_containerPathIdentifier;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    unsigned long long _containerClass;	// 48 = 0x30
    NSString *_personaUniqueString;	// 56 = 0x38
    char *_sandboxToken;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000271b8
@property(readonly, nonatomic) char *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property(readonly, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *containerPathIdentifier; // @synthesize containerPathIdentifier=_containerPathIdentifier;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)dealloc;	// IMP=0x0000000100027128
- (id)initWithMetadata:(id)arg1 sandboxToken:(const char *)arg2;	// IMP=0x0000000100026f50
- (_Bool)encodeReplyOntoXPCObject:(id)arg1;	// IMP=0x0000000100026cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
