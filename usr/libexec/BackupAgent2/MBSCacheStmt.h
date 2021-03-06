//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MBSCacheLikeObject;

@interface MBSCacheStmt : NSObject
{
    id <MBSCacheLikeObject> _cache;	// 8 = 0x8
    NSString *_SQL;	// 16 = 0x10
    struct sqlite3_stmt *_stmt;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
    _Bool _reset;	// 40 = 0x28
}

@property(nonatomic, getter=isReset) _Bool reset; // @synthesize reset=_reset;
- (void)verifyEqualToStmt:(id)arg1 exceptColumnNumbers:(id)arg2;	// IMP=0x00000001000089a4
- (id)textColumn:(int)arg1;	// IMP=0x00000001000088e8
- (id)blobColumn:(int)arg1;	// IMP=0x0000000100008814
- (double)doubleColumn:(int)arg1;	// IMP=0x0000000100008788
- (long long)int64Column:(int)arg1;	// IMP=0x00000001000086fc
- (int)intColumn:(int)arg1;	// IMP=0x0000000100008670
- (id)valueOfColumn:(int)arg1;	// IMP=0x0000000100008530
- (int)typeOfColumn:(int)arg1;	// IMP=0x00000001000084a4
- (int)columnCount;	// IMP=0x0000000100008428
- (void)bindText:(id)arg1 atIndex:(int)arg2;	// IMP=0x0000000100008350
- (void)bindBlob:(id)arg1 atIndex:(int)arg2;	// IMP=0x000000010000825c
- (void)bindInteger:(long long)arg1 atIndex:(int)arg2;	// IMP=0x00000001000081a0
- (void)bindInt64:(long long)arg1 atIndex:(int)arg2;	// IMP=0x00000001000080e4
- (void)bindInt:(int)arg1 atIndex:(int)arg2;	// IMP=0x0000000100008028
- (void)reset;	// IMP=0x0000000100007f68
- (_Bool)step;	// IMP=0x0000000100007edc
- (void)dealloc;	// IMP=0x0000000100007e1c
- (id)initWithCache:(id)arg1 SQL:(id)arg2 stmt:(struct sqlite3_stmt *)arg3;	// IMP=0x0000000100007db8

@end

