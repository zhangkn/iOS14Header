/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedDepthDataInternal, AVDepthData;

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedDepthDataInternal* _internal;

}

@property (readonly) AVDepthData * depthData; 
@property (readonly) BOOL depthDataWasDropped; 
@property (readonly) long long droppedReason; 
+(void)initialize;
-(long long)droppedReason;
-(BOOL)depthDataWasDropped;
-(id)debugDescription;
-(void)dealloc;
-(id)_initWithDepthData:(id)arg1 timestamp:(SCD_Struct_AV0)arg2 depthDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
-(AVDepthData *)depthData;
-(id)description;
@end
