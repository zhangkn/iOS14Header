/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSDictionary, NSString;

@interface BWMovieFileOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	BWCoreAnalyticsMovieRecordingSphereAFStatistics* _sphereAFStatistics;
	NSDictionary* _sphereModeByPortType;
	NSDictionary* _APSModeByPortType;
	NSDictionary* _variableFrameRateStatistics;
	BOOL _videoMirrored;
	int _activeDeviceMask;
	int _devicePosition;
	int _videoOrientation;
	int _deviceType;
	int _clientIDType;
	float _nominalFramerate;
	int _height;
	int _width;
	double _duration;
	double _durationFront;
	double _durationRearWide;
	double _durationRearTele;
	double _durationRearSuperWide;

}

@property (assign,nonatomic) int activeDeviceMask;                                                             //@synthesize activeDeviceMask=_activeDeviceMask - In the implementation block
@property (assign,nonatomic) int devicePosition;                                                               //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) int videoOrientation;                                                             //@synthesize videoOrientation=_videoOrientation - In the implementation block
@property (assign,nonatomic) BOOL videoMirrored;                                                               //@synthesize videoMirrored=_videoMirrored - In the implementation block
@property (assign,nonatomic) int deviceType;                                                                   //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) int clientIDType;                                                                 //@synthesize clientIDType=_clientIDType - In the implementation block
@property (assign,nonatomic) double duration;                                                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double durationFront;                                                             //@synthesize durationFront=_durationFront - In the implementation block
@property (assign,nonatomic) double durationRearWide;                                                          //@synthesize durationRearWide=_durationRearWide - In the implementation block
@property (assign,nonatomic) double durationRearTele;                                                          //@synthesize durationRearTele=_durationRearTele - In the implementation block
@property (assign,nonatomic) double durationRearSuperWide;                                                     //@synthesize durationRearSuperWide=_durationRearSuperWide - In the implementation block
@property (assign,nonatomic) float nominalFramerate;                                                           //@synthesize nominalFramerate=_nominalFramerate - In the implementation block
@property (assign,nonatomic) int height;                                                                       //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) int width;                                                                        //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BWCoreAnalyticsMovieRecordingSphereAFStatistics* sphereAFStatistics;              //@synthesize sphereAFStatistics=_sphereAFStatistics - In the implementation block
@property (nonatomic,retain) NSDictionary * sphereModeByPortType;                                              //@synthesize sphereModeByPortType=_sphereModeByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * APSModeByPortType;                                                 //@synthesize APSModeByPortType=_APSModeByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * variableFrameRateStatistics;                                       //@synthesize variableFrameRateStatistics=_variableFrameRateStatistics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)devicePosition;
-(int)clientIDType;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(void)setDeviceType:(int)arg1 ;
-(NSDictionary *)APSModeByPortType;
-(void)setVideoOrientation:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(int)width;
-(void)setNominalFramerate:(float)arg1 ;
-(int)deviceType;
-(void)setDurationRearTele:(double)arg1 ;
-(double)duration;
-(int)height;
-(void)setDuration:(double)arg1 ;
-(void)dealloc;
-(double)durationRearSuperWide;
-(void)reset;
-(BWCoreAnalyticsMovieRecordingSphereAFStatistics*)sphereAFStatistics;
-(double)durationRearTele;
-(void)setWidth:(int)arg1 ;
-(void)setVariableFrameRateStatistics:(NSDictionary *)arg1 ;
-(id)init;
-(id)eventName;
-(float)nominalFramerate;
-(NSDictionary *)sphereModeByPortType;
-(void)setSphereModeByPortType:(NSDictionary *)arg1 ;
-(NSDictionary *)variableFrameRateStatistics;
-(void)setClientIDType:(int)arg1 ;
-(void)setDurationRearSuperWide:(double)arg1 ;
-(id)eventDictionary;
-(void)setDevicePosition:(int)arg1 ;
-(void)setDurationFront:(double)arg1 ;
-(void)setSphereAFStatistics:(BWCoreAnalyticsMovieRecordingSphereAFStatistics*)arg1 ;
-(int)videoOrientation;
-(void)setDurationRearWide:(double)arg1 ;
-(int)activeDeviceMask;
-(void)setAPSModeByPortType:(NSDictionary *)arg1 ;
-(double)durationRearWide;
-(double)durationFront;
-(BOOL)videoMirrored;
-(void)setActiveDeviceMask:(int)arg1 ;
@end
