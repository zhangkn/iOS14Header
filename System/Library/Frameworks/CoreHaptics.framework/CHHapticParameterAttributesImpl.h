/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHHapticParameterAttributes.h>

@class NSString;

@interface CHHapticParameterAttributesImpl : NSObject <CHHapticParameterAttributes> {

	float _minValue;
	float _maxValue;
	float _defaultValue;

}

@property (readonly) float minValue;                                //@synthesize minValue=_minValue - In the implementation block
@property (readonly) float maxValue;                                //@synthesize maxValue=_maxValue - In the implementation block
@property (readonly) float defaultValue;                            //@synthesize defaultValue=_defaultValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)defaultValue;
-(float)maxValue;
-(float)minValue;
-(id)init;
-(id)initWithMinValue:(float)arg1 maxValue:(float)arg2 defaultValue:(float)arg3 ;
@end
