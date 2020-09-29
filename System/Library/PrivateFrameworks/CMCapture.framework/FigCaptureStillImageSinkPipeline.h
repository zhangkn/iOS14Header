/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:22 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSArray, NSString, BWStillImageCoordinatorNode, BWStillImageSampleBufferSinkNode, BWPortraitHDRStagingNode;


@protocol FigCaptureStillImageSinkPipeline <NSObject>
@property (nonatomic,readonly) NSArray * nodes; 
@property (nonatomic,readonly) NSString * sinkID; 
@property (nonatomic,readonly) BWStillImageCoordinatorNode * stillImageCoordinatorNode; 
@property (nonatomic,readonly) BWStillImageSampleBufferSinkNode * stillImageSinkNode; 
@property (nonatomic,readonly) BWPortraitHDRStagingNode * portraitHDRStagingNode; 
@required
-(NSString *)sinkID;
-(NSArray *)nodes;
-(BWPortraitHDRStagingNode *)portraitHDRStagingNode;
-(BWStillImageCoordinatorNode *)stillImageCoordinatorNode;
-(void)enablePrepareTimeAllocationsForDeferredPrepare;
-(BWStillImageSampleBufferSinkNode *)stillImageSinkNode;

@end
