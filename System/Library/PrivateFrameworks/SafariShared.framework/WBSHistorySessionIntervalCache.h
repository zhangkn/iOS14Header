/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSCalendar;

@interface WBSHistorySessionIntervalCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSCalendar* _calendar;
	Vector<double, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _intervalCache;

}
-(double)beginningOfSessionContainingTime:(double)arg1 ;
-(double)_beginningOfSessionContainingTime:(double)arg1 ;
-(void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double*)arg2 beginningOfNextDay:(double*)arg3 ;
-(id)init;
-(id)initWithCalendar:(id)arg1 ;
@end

