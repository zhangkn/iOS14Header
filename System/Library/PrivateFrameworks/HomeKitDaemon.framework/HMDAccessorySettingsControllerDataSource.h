/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMDBackingStore, HMFActivity;


@protocol HMDAccessorySettingsControllerDataSource
@property (readonly) HMDBackingStore * backingStore; 
@property (retain) HMFActivity * setupActivity; 
@property (assign) double setupStartTimestamp; 
@property (assign) double homepodSetupLatency; 
@property (assign) double homepodSettingsCreationTimestamp; 
@required
-(HMDBackingStore *)backingStore;
-(double)homepodSettingsCreationTimestamp;
-(double)homepodSetupLatency;
-(void)setHomepodSetupLatency:(double)arg1;
-(void)setHomepodSettingsCreationTimestamp:(double)arg1;
-(HMFActivity *)setupActivity;
-(void)setSetupActivity:(id)arg1;
-(void)setSetupStartTimestamp:(double)arg1;
-(double)setupStartTimestamp;
-(id)modelsToMakeSettingsForController:(id)arg1 parentUUID:(id)arg2;
-(id)modelsToMigrateSettingsForController:(id)arg1;

@end
