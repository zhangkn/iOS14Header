/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraMetricsSnapshotLogEvent, NSError;

@interface HMDCameraSnapshotMetrics : HMFObject {

	HMDCameraMetricsSnapshotLogEvent* _cameraSnapshotMetricsLogEvent;
	NSError* _error;

}

@property (nonatomic,readonly) HMDCameraMetricsSnapshotLogEvent * cameraSnapshotMetricsLogEvent;              //@synthesize cameraSnapshotMetricsLogEvent=_cameraSnapshotMetricsLogEvent - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                 //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 snapshotForNotification:(BOOL)arg4 ;
-(HMDCameraMetricsSnapshotLogEvent *)cameraSnapshotMetricsLogEvent;
@end

