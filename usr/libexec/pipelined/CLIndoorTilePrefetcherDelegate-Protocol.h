//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLIndoorTilePrefetcher, IndoorRequestInfo, NSDate, NSError;

@protocol CLIndoorTilePrefetcherDelegate <NSObject>
- (void)reloadAvailabilityTilePrefetchParameters;
- (void)prefetcher:(CLIndoorTilePrefetcher *)arg1 didFinishForegroundRequest:(IndoorRequestInfo *)arg2 withError:(NSError *)arg3;
- (void)prefetcher:(CLIndoorTilePrefetcher *)arg1 didFinishForegroundRequest:(IndoorRequestInfo *)arg2;
- (void)tilePrefetchFinishedAllDownloads;
- (void)tileForegroundFetchFinishedAllDownloads;
- (void)tilePrefetchDidDownload:(const struct path *)arg1 forRequest:(IndoorRequestInfo *)arg2;
- (void)tilePrefetchForTileId:(const struct TileIdentifier *)arg1 updateRelevancy:(NSDate *)arg2;
- (_Bool)tilePrefetchShouldPrefetchTileDataForFloor:(const basic_string_7c0a1c0b *)arg1;
- (_Bool)tilePrefetchShouldPrefetchMetadataForFloor:(const basic_string_7c0a1c0b *)arg1 withLocationContext:(long long)arg2;
@end

