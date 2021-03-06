/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSLocale, NSDictionary;

@interface WeatherWindSpeedFormatter : NSFormatter {

	NSLocale* _locale;
	NSDictionary* _directionSubstringAttributes;

}

@property (retain) NSLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (retain) NSDictionary * directionSubstringAttributes;              //@synthesize directionSubstringAttributes=_directionSubstringAttributes - In the implementation block
+(id)convenienceFormatter;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)fallbackUnitString;
-(id)formattedStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(id)stringForWindSpeed:(float)arg1 ;
-(id)speedStringByConvertingToUserUnits:(float)arg1 ;
-(id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(NSLocale *)locale;
-(id)formattedStringForSpeed:(float)arg1 direction:(float)arg2 shortDescription:(BOOL)arg3 ;
-(id)init;
-(NSDictionary *)directionSubstringAttributes;
-(int)windSpeedUnit;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)setDirectionSubstringAttributes:(NSDictionary *)arg1 ;
-(id)templateStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(id)fallbackStringForWindSpeed:(float)arg1 ;
-(double)speedByConvertingToUserUnit:(double)arg1 ;
-(id)stringForWindDirection:(float)arg1 shortDescription:(BOOL)arg2 ;
@end

