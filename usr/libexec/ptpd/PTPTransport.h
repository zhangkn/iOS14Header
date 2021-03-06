//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PTPOperationResponsePacket, PTPWrappedBytes;
@protocol OS_dispatch_queue;

@interface PTPTransport : NSObject
{
    unsigned short _type;	// 8 = 0x8
    int _role;	// 12 = 0xc
    int _connectionStatus;	// 16 = 0x10
    id _delegate;	// 24 = 0x18
    _Bool _timedOut;	// 32 = 0x20
    _Bool _responseReceived;	// 33 = 0x21
    PTPOperationResponsePacket *_response;	// 40 = 0x28
    unsigned char _headerBuffer[12];	// 48 = 0x30
    unsigned char _md5[16];	// 60 = 0x3c
    _Bool _failedMD5;	// 76 = 0x4c
    _Bool _headerBufferFound;	// 77 = 0x4d
    _Bool _delegateNeedsResponse;	// 78 = 0x4e
    _Bool _busy;	// 79 = 0x4f
    unsigned int _canceledTransactionID;	// 80 = 0x50
    PTPWrappedBytes *_dataForTransaction;	// 88 = 0x58
    unsigned long long _excessReceivedDataSize;	// 96 = 0x60
    unsigned int _totalBytesFilled;	// 104 = 0x68
    int _status;	// 108 = 0x6c
    NSObject<OS_dispatch_queue> *_ptpTransportIOQ;	// 112 = 0x70
}

- (unsigned long long)excessReceivedDataSize;	// IMP=0x0000000100031c40
- (void)deviceReset;	// IMP=0x0000000100031c3c
- (unsigned short)deviceStatus;	// IMP=0x0000000100031c34
- (void)cancelTransaction:(id)arg1;	// IMP=0x0000000100031c30
- (void)abortPendingIO;	// IMP=0x0000000100031c2c
- (_Bool)sendEvent:(id)arg1;	// IMP=0x0000000100031c24
- (_Bool)sendResponse:(id)arg1;	// IMP=0x0000000100031c1c
- (void)sendData:(id)arg1;	// IMP=0x0000000100031c18
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned int)arg3;	// IMP=0x0000000100031c10
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned int)arg3;	// IMP=0x0000000100031c08
- (void)setStatus:(int)arg1 withInfo:(char *)arg2;	// IMP=0x0000000100031b04
- (void)setTimedOut:(_Bool)arg1;	// IMP=0x0000000100031afc
- (_Bool)timedOut;	// IMP=0x0000000100031af4
- (_Bool)connected;	// IMP=0x0000000100031aec
- (int)role;	// IMP=0x0000000100031ae4
- (void)stop;	// IMP=0x0000000100031ae0
- (_Bool)startInitiator;	// IMP=0x0000000100031ad8
- (_Bool)startResponder;	// IMP=0x0000000100031ad0
- (int)connectionStatus;	// IMP=0x0000000100031ac8
- (unsigned short)type;	// IMP=0x0000000100031ac0
- (void)setResponseReceived:(_Bool)arg1;	// IMP=0x0000000100031ab8
- (id)md5;	// IMP=0x0000000100031a98
- (_Bool)responseReceived;	// IMP=0x0000000100031a90
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100031a88
- (void)setResponse:(id)arg1;	// IMP=0x0000000100031a54
- (id)response;	// IMP=0x0000000100031a4c
- (void)dealloc;	// IMP=0x0000000100031a00
- (id)init;	// IMP=0x0000000100031994

@end

