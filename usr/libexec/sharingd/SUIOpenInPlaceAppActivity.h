//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SUIOpenInAppActivity.h"

#import "SUIConcreteOpenInAppActivity-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SUIOpenInPlaceAppActivity : SUIOpenInAppActivity <SUIConcreteOpenInAppActivity>
{
}

- (_Bool)_supportsOpenInPlace;	// IMP=0x00000001001dcc7c
- (_Bool)_activitySupportsPromiseURLs;	// IMP=0x00000001001dcc70
- (void)performActivity;	// IMP=0x00000001001dcc04
- (id)ss_activityTypeToReportToHost;	// IMP=0x00000001001dcbf8
- (id)activityTitle;	// IMP=0x00000001001dcab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

