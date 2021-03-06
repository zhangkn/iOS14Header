//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NROSTransactionLogger : NSObject
{
    NSMutableDictionary *_outstandingTransactions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_os_transaction> *_masterTransaction;	// 24 = 0x18
}

+ (void)deleteKeepAliveFile;	// IMP=0x000000010000ea38
+ (void)createKeepAliveFile;	// IMP=0x000000010000e7a4
+ (id)sharedInstance;	// IMP=0x000000010000dfd0
- (void).cxx_destruct;	// IMP=0x000000010000ec34
@property(retain, nonatomic) NSObject<OS_os_transaction> *masterTransaction; // @synthesize masterTransaction=_masterTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *outstandingTransactions; // @synthesize outstandingTransactions=_outstandingTransactions;
- (void)removeTransaction:(id)arg1;	// IMP=0x000000010000e5c4
- (id)addTransaction:(id)arg1;	// IMP=0x000000010000e3a4
- (void)dumpTransactions:(id)arg1 isAdded:(_Bool)arg2;	// IMP=0x000000010000e120
- (id)init;	// IMP=0x000000010000e06c

@end

