/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageSensor.h>
#import <libobjc.A.dylib/AVCapturePointCloudDataOutputDelegate.h>

@class NSMutableDictionary, NSString, AVCapturePointCloudDataOutput, ARDepthSensorSettings;

@interface ARDepthSensor : ARImageSensor <AVCapturePointCloudDataOutputDelegate> {

	NSMutableDictionary* _extrinsicsMap;
	NSString* _projectorMode;
	AVCapturePointCloudDataOutput* _pointCloudOutput;

}

@property (nonatomic,retain) AVCapturePointCloudDataOutput * pointCloudOutput;              //@synthesize pointCloudOutput=_pointCloudOutput - In the implementation block
@property (nonatomic,readonly) ARDepthSensorSettings * mutableDepthSettings; 
@property (nonatomic,retain) NSString * projectorMode;                                      //@synthesize projectorMode=_projectorMode - In the implementation block
@property (nonatomic,copy,readonly) ARDepthSensorSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerSignPostForPointCloudData:(id)arg1 ;
-(void)reconfigure:(id)arg1 ;
-(void)pointCloudDataOutput:(id)arg1 didOutputPointCloudData:(id)arg2 timestamp:(SCD_Struct_AR19)arg3 connection:(id)arg4 ;
-(void)pointCloudDataOutput:(id)arg1 didDropPointCloudData:(id)arg2 timestamp:(SCD_Struct_AR19)arg3 connection:(id)arg4 reason:(long long)arg5 ;
-(NSString *)projectorMode;
-(void)start;
-(void)setProjectorMode:(NSString *)arg1 ;
-(void)stop;
-(NSString *)description;
-(AVCapturePointCloudDataOutput *)pointCloudOutput;
-(id)configureCaptureSession;
-(void)_configureProjectorModeForDevice:(id)arg1 ;
-(BOOL)canReconfigure:(id)arg1 ;
-(ARDepthSensorSettings *)mutableDepthSettings;
-(unsigned long long)providedDataTypes;
-(id)prepareToStart;
-(void)setPointCloudOutput:(AVCapturePointCloudDataOutput *)arg1 ;
@end

