/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFLocation;

@interface WFGeocodeResponse : WFResponse <NSSecureCoding> {

	WFLocation* _location;

}

@property (readonly) WFLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(WFLocation *)location;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

