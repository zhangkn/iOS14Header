/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:44 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SwiftUI/BaseDateProvider.h>

@class NSDateFormatter, NSMutableArray, NSDate;

@interface TimeProvider : BaseDateProvider {

	NSDateFormatter* _dateFormatter;
	NSMutableArray* _sizingFallbackBlocks;
	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(id)_sessionTextForIndex:(long long)arg1 ;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4 ;
-(id)_timeTextWithDropMinutes:(BOOL)arg1 dropDesignator:(BOOL)arg2 ;
@end
