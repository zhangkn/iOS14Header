//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CellularLoggingConfiguration, NSArray, NSError;

@protocol CellularLoggingDelegate <NSObject>
- (void)configurationListAvailable:(NSArray *)arg1;
- (void)didStateChanged:(long long)arg1 errorCode:(NSError *)arg2 config:(CellularLoggingConfiguration *)arg3;
- (void)didCollectLogs:(NSArray *)arg1 errorCode:(NSError *)arg2;
@end

