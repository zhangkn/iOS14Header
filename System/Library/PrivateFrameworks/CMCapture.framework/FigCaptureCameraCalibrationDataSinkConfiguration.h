/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@interface FigCaptureCameraCalibrationDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateCameraCalibrationData;

}

@property (assign,nonatomic) BOOL discardsLateCameraCalibrationData;              //@synthesize discardsLateCameraCalibrationData=_discardsLateCameraCalibrationData - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)discardsLateCameraCalibrationData;
-(BOOL)isEqual:(id)arg1 ;
-(int)sinkType;
-(void)setDiscardsLateCameraCalibrationData:(BOOL)arg1 ;
-(id)description;
@end

