/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject <NSSecureCoding> {

	long long _status;
	double _duration;
	FUFlightStep* _departure;
	FUFlightStep* _arrival;
	NSString* _baggageClaim;

}

@property (assign) long long status;                      //@synthesize status=_status - In the implementation block
@property (assign) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (readonly) double currentProgress; 
@property (retain) FUFlightStep * departure;              //@synthesize departure=_departure - In the implementation block
@property (retain) FUFlightStep * arrival;                //@synthesize arrival=_arrival - In the implementation block
@property (retain) NSString * baggageClaim;               //@synthesize baggageClaim=_baggageClaim - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setStatus:(long long)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(FUFlightStep *)arrival;
-(long long)status;
-(double)currentProgress;
-(void)setBaggageClaim:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)baggageClaim;
-(id)initWithCoder:(id)arg1 ;
-(FUFlightStep *)departure;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDeparture:(FUFlightStep *)arg1 ;
-(void)setArrival:(FUFlightStep *)arg1 ;
-(id)description;
@end

