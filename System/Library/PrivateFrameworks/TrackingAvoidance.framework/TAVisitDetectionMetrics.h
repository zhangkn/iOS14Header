/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TAVisitDetectionMetrics : NSObject <NSSecureCoding> {

	double _distanceToPreviousVisit;
	double _residualDistanceToPreviousVisit;
	unsigned long long _nSigmaBetweenVisits;

}

@property (nonatomic,readonly) double distanceToPreviousVisit;                      //@synthesize distanceToPreviousVisit=_distanceToPreviousVisit - In the implementation block
@property (nonatomic,readonly) double residualDistanceToPreviousVisit;              //@synthesize residualDistanceToPreviousVisit=_residualDistanceToPreviousVisit - In the implementation block
@property (nonatomic,readonly) unsigned long long nSigmaBetweenVisits;              //@synthesize nSigmaBetweenVisits=_nSigmaBetweenVisits - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDistance:(double)arg1 residualDistance:(double)arg2 nSigma:(unsigned long long)arg3 ;
-(double)distanceToPreviousVisit;
-(double)residualDistanceToPreviousVisit;
-(unsigned long long)nSigmaBetweenVisits;
@end

