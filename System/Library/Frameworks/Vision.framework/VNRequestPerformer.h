/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/VNRequestCancelling.h>
#import <libobjc.A.dylib/VNTrackerProviding.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface VNRequestPerformer : NSObject <VNRequestCancelling, VNTrackerProviding> {

	NSLock* _requestLock;
	NSMutableArray* _requestsInFlight;
	NSMutableArray* _requestsPending;
	NSMutableDictionary* _sequencedRequestObservations;
	NSMutableSet* _trackerKeys;

}
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)previousSequencedObservationsForRequest:(id)arg1 ;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)cancelAllRequests;
-(void)recordSequencedObservationsForRequest:(id)arg1 ;
-(id)init;
-(void)releaseTracker:(id)arg1 ;
-(id)dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(id)orderedRequestsForRequests:(id)arg1 ;
-(BOOL)_validateAndPrepareRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end

