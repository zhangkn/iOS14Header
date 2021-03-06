//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUDialRequest.h>

@class NPHDialRequestDisplayDetails, NSArray, NSString;

@interface TUDialRequest (NanoPhone)
+ (void)_logProvider:(id)arg1;	// IMP=0x000000010000b904
@property(nonatomic) _Bool nph_injectFallDetectAudioMessage;
@property(copy, nonatomic) NSString *nph_errorAlertMessage;
@property(copy, nonatomic) NSArray *nph_disambiguationDestinations;
- (void)nph_logWithReason:(id)arg1 indented:(_Bool)arg2;	// IMP=0x000000010000b7f4
@property(readonly, nonatomic) _Bool nph_needsRTTDisambiguationPrompt;
@property(readonly, nonatomic) _Bool nph_needsPrompt;
@property(readonly, nonatomic) NPHDialRequestDisplayDetails *nph_displayDetails;
@end

