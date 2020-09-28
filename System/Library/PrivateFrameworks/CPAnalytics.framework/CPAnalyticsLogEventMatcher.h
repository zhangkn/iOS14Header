/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class CPAnalyticsEventMatcher, NSString, NSArray;

@interface CPAnalyticsLogEventMatcher : CPAnalyticsEventMatcher {

	CPAnalyticsEventMatcher* _eventMatcher;
	BOOL _shouldLogEventName;
	NSString* _eventTypeLabel;
	NSArray* _eventPropertiesToLog;

}

@property (nonatomic,readonly) NSString * eventTypeLabel;                   //@synthesize eventTypeLabel=_eventTypeLabel - In the implementation block
@property (nonatomic,readonly) BOOL shouldLogEventName;                     //@synthesize shouldLogEventName=_shouldLogEventName - In the implementation block
@property (nonatomic,readonly) NSArray * eventPropertiesToLog;              //@synthesize eventPropertiesToLog=_eventPropertiesToLog - In the implementation block
-(NSArray *)eventPropertiesToLog;
-(id)init;
-(BOOL)shouldLogEventName;
-(id)initWithConfig:(id)arg1 ;
-(BOOL)doesMatch:(id)arg1 ;
-(NSString *)eventTypeLabel;
@end
