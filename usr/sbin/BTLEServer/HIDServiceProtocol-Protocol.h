//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol HIDServiceProtocol <NSObject>
- (int)writeReportData:(NSData *)arg1 reportID:(unsigned char)arg2 reportType:(int)arg3 withResponse:(_Bool)arg4 error:(id *)arg5;
- (int)readReportData:(id *)arg1 reportID:(unsigned char)arg2 reportType:(int)arg3 error:(id *)arg4;
- (void)hidDeviceDesiredConnectionParametersDidChange;
- (void)hidDeviceDidStop;
- (void)hidDeviceDidStart;
@end

