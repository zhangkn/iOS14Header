//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RTCActivitySchedulerOptions, RTCSelfReporter;
@protocol OS_dispatch_queue, RTCDiskCacheDelegate;

@interface RTCDiskCache : NSObject
{
    RTCActivitySchedulerOptions *_options;	// 8 = 0x8
    RTCSelfReporter *_selfReporter;	// 16 = 0x10
    NSString *_rootPath;	// 24 = 0x18
    NSString *_oldestCacheFile;	// 32 = 0x20
    NSString *_newestCacheFile;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_stateQueue;	// 48 = 0x30
    id <RTCDiskCacheDelegate> _delegate;	// 56 = 0x38
}

@property(readonly) RTCActivitySchedulerOptions *options; // @synthesize options=_options;
@property(readonly) NSString *newestCacheFile; // @synthesize newestCacheFile=_newestCacheFile;
@property(readonly) NSString *oldestCacheFile; // @synthesize oldestCacheFile=_oldestCacheFile;
- (void)removeFromCacheDispatched:(id)arg1;	// IMP=0x0000000100006c9c
- (id)copyFirstEvent;	// IMP=0x0000000100006bbc
- (void)addEvent:(id)arg1;	// IMP=0x00000001000067e8
- (id)getOldestEventDispatched;	// IMP=0x0000000100006018
- (_Bool)searchForCacheFileWithOrder:(int)arg1;	// IMP=0x0000000100005edc
- (_Bool)searchForCacheFileWithOrderDispatched:(int)arg1;	// IMP=0x0000000100005bf8
- (_Bool)isSizeORTimeLimitationExceededForFile:(id)arg1;	// IMP=0x0000000100005b28
- (_Bool)isSizeORTimeLimitationExceededForFileDispatched:(id)arg1;	// IMP=0x0000000100005a00
- (id)pruneFileIfExpired:(id)arg1;	// IMP=0x0000000100005878
- (id)pruneFileIfExpiredDispatched:(id)arg1;	// IMP=0x0000000100005734
- (void)deleteAllCacheFiles;	// IMP=0x0000000100005670
- (void)deleteCurrentNewestCacheFile;	// IMP=0x0000000100005604
- (void)deleteCurrentOldestCacheFile;	// IMP=0x000000010000557c
- (void)deleteCurrentCacheFileWithOrderDispatched:(int)arg1;	// IMP=0x00000001000054d8
- (id)cacheFileExtention;	// IMP=0x00000001000054cc
- (id)diskCacheRootPath;	// IMP=0x00000001000054c4
- (void)writeInitialHeaderToFile:(id)arg1;	// IMP=0x0000000100005458
- (_Bool)secureWriteDataForHandle:(id)arg1 data:(id)arg2;	// IMP=0x0000000100005414
- (void)syncUp;	// IMP=0x0000000100005400
- (void)setSelfReporter:(id)arg1;	// IMP=0x00000001000053d8
- (id)delegate;	// IMP=0x00000001000053d0
- (void)dealloc;	// IMP=0x0000000100005320
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100005178

@end
