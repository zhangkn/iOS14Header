/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWRedEyeReductionControllerInputDelegate.h>

@class NSDictionary, CIDualRedEyeRepairSession, NSMutableArray, NSString;

@interface BWRedEyeReductionController : BWStillImageProcessorController <BWRedEyeReductionControllerInputDelegate> {

	NSDictionary* _redEyeReductionParametersByPortType;
	CIDualRedEyeRepairSession* _redEyeRepairSession;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NSMutableArray* _requestQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)prewarm;
+(id)_newRedEyeRepairSessionWithMetalCommandQueue:(id)arg1 ;
-(id)_currentRequest;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)_serviceRequests;
-(unsigned long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(void)didReceiveFrameForInput:(id)arg1 ;
-(void)didReceiveAllFramesForInput:(id)arg1 ;
-(id)_requestForInput:(id)arg1 ;
-(int)_configureRedEyeReductionSessionWithConfiguration:(id)arg1 ;
-(void)_processRedEyeReductionWhenNecessaryForRequest:(id)arg1 ;
-(BOOL)_receivedRequiredFramesForRequest:(id)arg1 ;
-(void)_propagateSensorInterfaceRawFromAuxImage:(opaqueCMSampleBufferRef)arg1 toPrimaryImage:(opaqueCMSampleBufferRef)arg2 ;
-(void)_clearRequest:(id)arg1 ;
@end

