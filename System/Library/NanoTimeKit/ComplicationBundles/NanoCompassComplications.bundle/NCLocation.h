/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoCompassComplications/NanoCompassComplications-Structs.h>
@class NSDate, NSError;

@interface NCLocation : NSObject {

	double _accuracy;
	NSDate* _timestamp;
	NSDate* _reportedTimestamp;
	NSError* _error;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double accuracy;                                //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * reportedTimestamp;                     //@synthesize reportedTimestamp=_reportedTimestamp - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasReading; 
+(id)idealizedLocation;
+(id)locationWithLocation:(id)arg1 error:(id)arg2 ;
+(id)randomizedLocation;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setAccuracy:(double)arg1 ;
-(double)accuracy;
-(id)description;
-(void)setReportedTimestamp:(NSDate *)arg1 ;
-(id)initWithLocation:(id)arg1 error:(id)arg2 ;
-(BOOL)hasAcceptibleAccuracy;
-(BOOL)hasReading;
-(BOOL)isBetterThan:(id)arg1 ;
-(NSDate *)reportedTimestamp;
@end
