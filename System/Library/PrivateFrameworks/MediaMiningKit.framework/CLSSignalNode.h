/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSSignalNode : NSObject {

	unsigned long long _identifier;
	NSString* _name;
	double _operatingPoint;
	double _highPrecisionOperatingPoint;
	double _highRecallOperatingPoint;

}

@property (readonly) unsigned long long identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (readonly) double operatingPoint;                           //@synthesize operatingPoint=_operatingPoint - In the implementation block
@property (readonly) double highPrecisionOperatingPoint;              //@synthesize highPrecisionOperatingPoint=_highPrecisionOperatingPoint - In the implementation block
@property (readonly) double highRecallOperatingPoint;                 //@synthesize highRecallOperatingPoint=_highRecallOperatingPoint - In the implementation block
-(unsigned long long)identifier;
-(id)signalInfoWithIsHierarchical:(BOOL)arg1 ;
-(BOOL)passesWithSignal:(id)arg1 ;
-(double)operatingPoint;
-(BOOL)passesHighPrecisionWithSignal:(id)arg1 ;
-(BOOL)passesHighRecallWithConfidence:(double)arg1 ;
-(BOOL)failsHighPrecisionWithConfidence:(double)arg1 ;
-(BOOL)failsWithConfidence:(double)arg1 ;
-(BOOL)failsHighRecallWithSignal:(id)arg1 ;
-(double)highRecallOperatingPoint;
-(BOOL)passesWithConfidence:(double)arg1 ;
-(BOOL)passesHighPrecisionWithConfidence:(double)arg1 ;
-(BOOL)failsWithSignal:(id)arg1 ;
-(BOOL)failsHighRecallWithConfidence:(double)arg1 ;
-(double)highPrecisionOperatingPoint;
-(id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 operatingPoint:(double)arg3 highPrecisionOperatingPoint:(double)arg4 highRecallOperatingPoint:(double)arg5 ;
-(BOOL)failsHighPrecisionWithSignal:(id)arg1 ;
-(NSString *)name;
-(BOOL)passesHighRecallWithSignal:(id)arg1 ;
@end
