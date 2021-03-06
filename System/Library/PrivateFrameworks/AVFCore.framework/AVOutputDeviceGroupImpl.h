/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVOutputDeviceGroup, NSArray, AVOutputDevice;


@protocol AVOutputDeviceGroupImpl <NSObject>
@property (__weak) AVOutputDeviceGroup * parentOutputDeviceGroup; 
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * groupLeader; 
@property (readonly) float volume; 
@required
-(NSArray *)outputDevices;
-(void)setVolume:(float)arg1;
-(long long)volumeControlType;
-(float)volume;
-(void)setParentOutputDeviceGroup:(id)arg1;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(/*^block*/id)arg3;
-(AVOutputDeviceGroup *)parentOutputDeviceGroup;
-(AVOutputDevice *)groupLeader;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)receivesLongFormAudioFromLocalDevice;

@end

