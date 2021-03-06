//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class VMPlayerTimelineSlider;

@protocol VMPlayerTimelineSliderDelegate <NSObject>

@optional
- (void)playerTimelineSlider:(VMPlayerTimelineSlider *)arg1 didChangeElapsedTime:(double)arg2;
- (void)playerTimelineSliderScrubbingDidEnd:(VMPlayerTimelineSlider *)arg1;
- (void)playerTimelineSliderScrubbingDidCancel:(VMPlayerTimelineSlider *)arg1;
- (void)playerTimelineSliderScrubbingDidBegin:(VMPlayerTimelineSlider *)arg1;
@end

