/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SVVisibilityMonitor.h>

@class SVKeyValueObserver;

@interface SXVideoPlayerAdSlotVisibilityMonitor : SVVisibilityMonitor {

	SVKeyValueObserver* _observer;

}

@property (nonatomic,readonly) SVKeyValueObserver * observer;              //@synthesize observer=_observer - In the implementation block
-(SVKeyValueObserver *)observer;
-(id)initWithVideoPlayerViewController:(id)arg1 videoAdSlotVisiblePercentageProvider:(id)arg2 ;
@end
