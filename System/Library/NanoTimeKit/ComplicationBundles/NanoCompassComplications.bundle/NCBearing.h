/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NCBearing : NSObject {

	double _bearing;

}

@property (assign,nonatomic) double bearing;              //@synthesize bearing=_bearing - In the implementation block
+(id)idealizedBearing;
+(id)randomizedBearing;
-(double)bearing;
-(void)setBearing:(double)arg1 ;
-(id)initWithBearing:(double)arg1 ;
-(id)initWithHeading:(id)arg1 ;
@end

