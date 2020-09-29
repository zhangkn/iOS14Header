/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:21 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/BWGraphStatusDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, NSString, BWGraph, BWDeferredProcessingSourceNode, FigCaptureDeferredProcessingJob, NSSet, NSDictionary;

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_os_transaction> _graphTransaction;
	NSString* _currentPortType;
	BWGraph* _graph;
	BOOL _graphRunning;
	BWDeferredProcessingSourceNode* _sourceNode;
	FigCaptureDeferredProcessingJob* _job;
	BOOL _interactiveQoS;
	long long _graphPrepareDurationNS;
	NSSet* _allSensorIDStrings;
	NSDictionary* _defaultSensorIDsByPortType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedProcessingEngine;
-(void)releaseResources;
-(void)dealloc;
-(void)graphDidPrepareNodes:(id)arg1 ;
-(void)_runJob;
-(id)init;
-(void)graph:(id)arg1 didFinishStartingWithError:(int)arg2 ;
-(void)_handleJobCompletion:(int)arg1 ;
-(BOOL)_reuseCurrentGraphForJob:(id)arg1 ;
-(void)_releaseGraph;
-(void)_createGraphAndRunJobWhenStarted;
-(void)_cleanupFromJob;
-(void)_reportCoreAnalyticsDataWithError:(int)arg1 container:(id)arg2 ;
-(void)executeJob:(id)arg1 ;
@end
