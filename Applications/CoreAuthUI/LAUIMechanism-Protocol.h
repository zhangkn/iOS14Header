//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LAContextExternalizationProt-Protocol.h"

@class NSDictionary, NSError;

@protocol LAUIMechanism <LAContextExternalizationProt>
- (void)internalInfoWithReply:(void (^)(NSDictionary *))arg1;
- (void)uiFailureWithError:(NSError *)arg1;
- (void)uiSuccessWithResult:(NSDictionary *)arg1;
- (void)uiEvent:(long long)arg1 options:(NSDictionary *)arg2;
@end
