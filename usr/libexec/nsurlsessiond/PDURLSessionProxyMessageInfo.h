//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PBCodable;

@interface PDURLSessionProxyMessageInfo : NSObject
{
    unsigned short _type;	// 8 = 0x8
    PBCodable *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000076f0
@property unsigned short type; // @synthesize type=_type;
@property(copy) PBCodable *message; // @synthesize message=_message;
- (id)initWithMessage:(id)arg1 type:(unsigned short)arg2;	// IMP=0x0000000100007630

@end
