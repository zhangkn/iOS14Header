//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSOperationQueue, NSPointerArray;
@protocol OS_dispatch_queue;

@interface ActionManager : NSObject
{
    _Bool _operationTransactionActive;	// 8 = 0x8
    NSDate *_nextRegisterDate;	// 16 = 0x10
    long long _nextActionIdNumber;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_metadataModsQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_transactionSerialQueue;	// 40 = 0x28
    NSOperationQueue *_actionExecutionQueue;	// 48 = 0x30
    NSPointerArray *_weakActions;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x000000010000f8ec
- (void).cxx_destruct;	// IMP=0x000000010001110c
@property(retain, nonatomic) NSPointerArray *weakActions; // @synthesize weakActions=_weakActions;
@property(nonatomic) _Bool operationTransactionActive; // @synthesize operationTransactionActive=_operationTransactionActive;
@property(retain, nonatomic) NSOperationQueue *actionExecutionQueue; // @synthesize actionExecutionQueue=_actionExecutionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionSerialQueue; // @synthesize transactionSerialQueue=_transactionSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metadataModsQueue; // @synthesize metadataModsQueue=_metadataModsQueue;
@property(nonatomic) long long nextActionIdNumber; // @synthesize nextActionIdNumber=_nextActionIdNumber;
@property(retain, nonatomic) NSDate *nextRegisterDate; // @synthesize nextRegisterDate=_nextRegisterDate;
- (void)_setDependenciesForNewAction:(id)arg1;	// IMP=0x0000000100010db4
- (id)description;	// IMP=0x0000000100010b64
- (void)refreshTransactionState:(unsigned long long)arg1;	// IMP=0x00000001000109a8
- (void)cancelAllActions;	// IMP=0x00000001000108e8
- (void)cancelActionWithId:(id)arg1;	// IMP=0x00000001000105b8
- (id)enqueueAction:(id)arg1;	// IMP=0x000000010000fc20
- (id)init;	// IMP=0x000000010000f958

@end
