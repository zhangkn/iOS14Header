/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HMDCameraRecordingAudioCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _audioChannelCount;
	NSArray* _bitRateModes;
	NSArray* _audioSampleRates;
	NSNumber* _maxAudioBitRate;

}

@property (nonatomic,copy,readonly) NSNumber * audioChannelCount;              //@synthesize audioChannelCount=_audioChannelCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * bitRateModes;                    //@synthesize bitRateModes=_bitRateModes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioSampleRates;                //@synthesize audioSampleRates=_audioSampleRates - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * maxAudioBitRate;                //@synthesize maxAudioBitRate=_maxAudioBitRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)audioChannelCount;
-(BOOL)_parseFromTLVData;
-(NSArray *)audioSampleRates;
-(NSArray *)bitRateModes;
-(id)initWithChannelCount:(id)arg1 bitRateModes:(id)arg2 audioSampleRates:(id)arg3 maxAudioBitRate:(id)arg4 ;
-(NSNumber *)maxAudioBitRate;
@end

