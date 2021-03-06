/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VNProcessingDevice : NSObject <NSCopying>
+(id)allDevices;
+(id)defaultANEDevice;
+(void)_lockStaticObjectsAccessLock;
+(void)_unlockStaticObjectsAccessLock;
+(id)defaultDevice;
+(id)defaultCPUDevice;
+(id)defaultMetalDevice;
+(id)deviceForMetalDevice:(id)arg1 ;
+(id)directANEDevice;
+(void)forcedCleanup;
-(int)espressoEngine;
-(int)espressoStorageType;
-(id)metalDevice;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)targetsANE;
-(BOOL)targetsCPU;
-(BOOL)isEqual:(id)arg1 ;
-(int)espressoDeviceID;
-(unsigned long long)hash;
-(id)description;
-(BOOL)targetsGPU;
@end

