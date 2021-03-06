//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol TPSAnalyticsDataProviderDataSource <NSObject>
- (unsigned long long)hintDisplayedCountForIdentifier:(NSString *)arg1;
- (NSDate *)lastDisplayedDateForIdentifier:(NSString *)arg1;
- (NSString *)displayTypeForIdentifier:(NSString *)arg1;
- (NSString *)contextForIdentifier:(NSString *)arg1;
- (NSString *)bundleIDForIdentifier:(NSString *)arg1;
- (NSString *)deliveryInfoVersion;
- (NSString *)experimentID;
- (NSString *)experimentCampID;
@end

