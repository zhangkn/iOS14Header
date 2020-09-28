/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSMutableDictionary, GEOXPCActivity;

@interface GEORequestCountPowerLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _eventName;
	NSDate* _startDate;
	NSMutableDictionary* _clientInfo;
	GEOXPCActivity* _activity;

}
+(id)sharedInstance;
+(void)cancelOldActivities;
+(BOOL)shouldIgnoreRequestType:(int)arg1 fromClientWithId:(id)arg2 ;
-(void)startNewSessionWithName:(id)arg1 ;
-(void)dealloc;
-(void)incrementCountForClient:(id)arg1 requestType:(int)arg2 ;
-(void)_flushToPowerLog;
-(id)init;
-(void)_scheduleXpcActivity;
-(void)_cancelXpcActivity;
@end
