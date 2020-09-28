/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNConfidenceProvidingWritable.h>
#import <libobjc.A.dylib/SNResult.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>
#import <libobjc.A.dylib/SNConfidenceProviding.h>

@class NSString;

@interface SNSpeechEmotionResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding> {

	double _confidence;
	double _mood;
	double _valence;
	double _arousal;
	double _dominance;
	SCD_Struct_SN4 _timeRange;

}

@property (assign) double mood;                                     //@synthesize mood=_mood - In the implementation block
@property (assign) double valence;                                  //@synthesize valence=_valence - In the implementation block
@property (assign) double arousal;                                  //@synthesize arousal=_arousal - In the implementation block
@property (assign) double dominance;                                //@synthesize dominance=_dominance - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(SCD_Struct_SN4)timeRange;
-(double)mood;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(void)setMood:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)confidence;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)valence;
-(double)arousal;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setConfidence:(double)arg1 ;
-(double)dominance;
-(void)setValence:(double)arg1 ;
-(void)setArousal:(double)arg1 ;
-(void)setDominance:(double)arg1 ;
-(BOOL)isEqualToSpeechEmotionResult:(id)arg1 ;
@end
