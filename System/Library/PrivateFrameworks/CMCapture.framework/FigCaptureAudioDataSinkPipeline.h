/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:25 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@interface FigCaptureAudioDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 sourceAudioOutput:(id)arg4 clientAuditToken:(SCD_Struct_Fi79)arg5 renderDelegate:(id)arg6 ;
-(int)_buildAudioDataSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 clientAuditToken:(SCD_Struct_Fi79)arg4 renderDelegate:(id)arg5 ;
@end
