//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CompletionProvider, NSString, UIWindow;

@protocol CompletionProviderDelegate <NSObject>
- (UIWindow *)windowHostingCompletionProvider:(CompletionProvider *)arg1;
- (void)completionProviderDidFail:(CompletionProvider *)arg1;
- (void)completionProvider:(CompletionProvider *)arg1 didFinishCompletingString:(NSString *)arg2;
@end
