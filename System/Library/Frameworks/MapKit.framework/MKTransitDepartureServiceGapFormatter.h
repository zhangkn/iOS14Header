/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSTimeZone;

@interface MKTransitDepartureServiceGapFormatter : NSObject {

	NSDate* _departureCutoffDate;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSDate * departureCutoffDate;              //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                     //@synthesize timeZone=_timeZone - In the implementation block
-(id)initWithTimeZone:(id)arg1 departureCutoffDate:(id)arg2 ;
-(id)lastDepartureUntilStringFromDate:(id)arg1 ;
-(id)lastDepartureString;
-(id)lastDepartureAtStringFromDate:(id)arg1 ;
-(id)_descriptionForDepartureDate:(id)arg1 canIncludeDate:(BOOL)arg2 outDateFormat:(out unsigned long long*)arg3 ;
-(NSTimeZone *)timeZone;
-(NSDate *)departureCutoffDate;
@end

