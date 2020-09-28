/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLKUIAlmanacTransitInfo, NSOrderedSet, NSArray, NSDate, CLLocation, NSData;

@interface NTKSiderealData : NSObject <NSSecureCoding> {

	float _altitudes[361];
	BOOL _sunsetFollowsSunrise;
	BOOL _isConstantSunUpOrDown;
	CLKUIAlmanacTransitInfo* _sunriseSunsetInfo;
	NSOrderedSet* _sectors;
	NSArray* _waypoints;
	NSDate* _referenceDate;
	CLLocation* _referenceLocation;
	NSDate* _sunsetTime;
	NSDate* _sunriseTime;
	NSOrderedSet* _daytimeEvents;
	NSData* _gradientData;
	NSOrderedSet* _solarEvents;

}

@property (nonatomic,readonly) NSOrderedSet * solarEvents;                               //@synthesize solarEvents=_solarEvents - In the implementation block
@property (nonatomic,readonly) CLKUIAlmanacTransitInfo * sunriseSunsetInfo;              //@synthesize sunriseSunsetInfo=_sunriseSunsetInfo - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * sectors;                                   //@synthesize sectors=_sectors - In the implementation block
@property (nonatomic,readonly) NSArray * waypoints;                                      //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) NSDate * referenceDate;                                   //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,readonly) CLLocation * referenceLocation;                           //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,readonly) BOOL sunsetFollowsSunrise;                                //@synthesize sunsetFollowsSunrise=_sunsetFollowsSunrise - In the implementation block
@property (nonatomic,readonly) BOOL isConstantSunUpOrDown;                               //@synthesize isConstantSunUpOrDown=_isConstantSunUpOrDown - In the implementation block
@property (nonatomic,readonly) NSDate * sunsetTime;                                      //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (nonatomic,readonly) NSDate * sunriseTime;                                     //@synthesize sunriseTime=_sunriseTime - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * daytimeEvents;                             //@synthesize daytimeEvents=_daytimeEvents - In the implementation block
@property (nonatomic,readonly) NSData * gradientData;                                    //@synthesize gradientData=_gradientData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadCached;
-(NSDate *)sunriseTime;
-(CLLocation *)referenceLocation;
-(void)save;
-(NSDate *)sunsetTime;
-(NSArray *)waypoints;
-(NSDate *)referenceDate;
-(NSData *)gradientData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSOrderedSet *)sectors;
-(BOOL)isConstantSunUpOrDown;
-(CharacterPoseSpecs)altitudeForProgress:(double)arg1 ;
-(id)interpolateBetweenCalendricalMidnights:(double)arg1 ;
-(BOOL)isDateInReferenceDate:(id)arg1 ;
-(CLKUIAlmanacTransitInfo *)sunriseSunsetInfo;
-(BOOL)sunsetFollowsSunrise;
-(id)_generateGradientDataForXR:(BOOL)arg1 ;
-(id)_findSunsetTime;
-(id)_findSunriseTime;
-(BOOL)_computeSunsetFollowsSunrise;
-(BOOL)_computeIsConstantSunUpOrDown;
-(id)initWithReferenceDate:(id)arg1 referenceLocation:(id)arg2 sunriseSunsetInfo:(id)arg3 solarEvents:(id)arg4 daytimeEvents:(id)arg5 sectors:(id)arg6 waypoints:(id)arg7 altitudes:(float*)arg8 useXR:(BOOL)arg9 ;
-(NSOrderedSet *)daytimeEvents;
-(NSOrderedSet *)solarEvents;
@end
