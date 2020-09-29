/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:21 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>

@class BWNodeOutput;

@interface BWVideoSDOFSplitNode : BWFanOutNode {

	opaqueCMFormatDescriptionRef _originalVideoFormatDescription;
	BWNodeOutput* _originalOutput;
	BWNodeOutput* _sdofOutput;

}

@property (nonatomic,readonly) BWNodeOutput * originalOutput;              //@synthesize originalOutput=_originalOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sdofOutput;                  //@synthesize sdofOutput=_sdofOutput - In the implementation block
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(BWNodeOutput *)sdofOutput;
-(void)dealloc;
-(BWNodeOutput *)originalOutput;
-(id)init;
@end
