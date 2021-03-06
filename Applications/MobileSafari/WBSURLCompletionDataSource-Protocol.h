//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBSURLCompletionUserTypedString;
@protocol WBSURLCompletionMatchData;

@protocol WBSURLCompletionDataSource <NSObject>
- (id <WBSURLCompletionMatchData>)fakeBookmarkMatchDataWithURLString:(NSString *)arg1 title:(NSString *)arg2 shouldPreload:(_Bool)arg3;
- (void)enumerateMatchDataForTypedStringHint:(WBSURLCompletionUserTypedString *)arg1 options:(unsigned long long)arg2 withBlock:(void (^)(id <WBSURLCompletionMatchData>))arg3;
@end

