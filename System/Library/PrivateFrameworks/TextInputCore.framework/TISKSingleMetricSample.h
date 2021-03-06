/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding> {

	NSMutableArray* _samples;

}

@property (nonatomic,retain) NSMutableArray * samples;              //@synthesize samples=_samples - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)makeMetric;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(NSMutableArray *)samples;
-(void)addSample:(id)arg1 ;
-(double)average;
-(double)variance;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(BOOL)isEmpty;
-(void)merge:(id)arg1 ;
-(id)description;
-(id)generateDataForSR:(id)arg1 ;
@end

