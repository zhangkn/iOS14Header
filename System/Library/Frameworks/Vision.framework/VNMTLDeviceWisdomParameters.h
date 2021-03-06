/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/VNMTLDeviceWisdomParametersProviding.h>

@class NSString;

@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)wisdomParameterForMTLDevice:(id)arg1 error:(id*)arg2 ;
-(id)_cachedMetalDeviceWisdomParametersAndReturnError:(id*)arg1 ;
-(void)_flushMetalDeviceWisdomParametersCache;
-(id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id*)arg2 ;
-(id)_wisdomResourcesPath;
@end

