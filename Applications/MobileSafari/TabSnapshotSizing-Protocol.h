//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITraitCollection;

@protocol TabSnapshotSizing <NSObject>
@property(readonly, nonatomic) unsigned long long snapshotBorderOptions;
@property(readonly, nonatomic) double desiredSnapshotScale;
- (unsigned long long)estimatedSnapshotsPerPageForBounds:(struct CGRect)arg1 withTraitCollection:(UITraitCollection *)arg2;
- (struct CGSize)snapshotSizeForSuggestedSize:(struct CGSize)arg1;
@end
