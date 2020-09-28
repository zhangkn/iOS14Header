/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2SessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, C2RoutingTable, C2SessionTLSCache, NSMapTable, NSMutableDictionary, NSString;

@interface C2SessionPool : NSObject <C2SessionDelegate> {

	BOOL _cleanUp_running;
	BOOL _testBehavior_disableAutomaticCleanup;
	NSObject*<OS_dispatch_queue> _underlyingDelegateQueue;
	NSObject*<OS_dispatch_queue> _sessionCreation_queue;
	NSObject*<OS_dispatch_queue> _cleanUp_queue;
	C2RoutingTable* _routingTable;
	C2SessionTLSCache* _sessionTLSCache;
	NSMapTable* _useCountByObject;
	NSMutableDictionary* _sessionGroupForSessionConfigurationName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> underlyingDelegateQueue;                       //@synthesize underlyingDelegateQueue=_underlyingDelegateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sessionCreation_queue;                         //@synthesize sessionCreation_queue=_sessionCreation_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cleanUp_queue;                                 //@synthesize cleanUp_queue=_cleanUp_queue - In the implementation block
@property (assign,nonatomic) BOOL cleanUp_running;                                                       //@synthesize cleanUp_running=_cleanUp_running - In the implementation block
@property (nonatomic,retain) C2RoutingTable * routingTable;                                              //@synthesize routingTable=_routingTable - In the implementation block
@property (nonatomic,retain) C2SessionTLSCache * sessionTLSCache;                                        //@synthesize sessionTLSCache=_sessionTLSCache - In the implementation block
@property (nonatomic,retain) NSMapTable * useCountByObject;                                              //@synthesize useCountByObject=_useCountByObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sessionGroupForSessionConfigurationName;              //@synthesize sessionGroupForSessionConfigurationName=_sessionGroupForSessionConfigurationName - In the implementation block
@property (assign,nonatomic) BOOL testBehavior_disableAutomaticCleanup;                                  //@synthesize testBehavior_disableAutomaticCleanup=_testBehavior_disableAutomaticCleanup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeSession:(id)arg1 ;
-(C2RoutingTable *)routingTable;
-(void)setRoutingTable:(C2RoutingTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingDelegateQueue;
-(void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3 ;
-(id)createDataTaskWithRequestIdentifer:(id)arg1 request:(id)arg2 options:(id)arg3 delegate:(id)arg4 sessionHandle:(id*)arg5 ;
-(NSMutableDictionary *)sessionGroupForSessionConfigurationName;
-(void)_unsafe_willCreate:(id)arg1 ;
-(BOOL)_unsafe_isCreating:(id)arg1 ;
-(void)_unsafe_didCreate:(id)arg1 ;
-(C2SessionTLSCache *)sessionTLSCache;
-(void)_unsafe_removeSessionGroupIfEmpty:(id)arg1 ;
-(void)ensureCleanUpRunning;
-(void)_unsafe_removeSession:(id)arg1 ;
-(BOOL)_cleanUp_job;
-(void)_cleanUp_schedule;
-(BOOL)testBehavior_cleanUp;
-(void)setUnderlyingDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)sessionCreation_queue;
-(void)setSessionCreation_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)cleanUp_queue;
-(void)setCleanUp_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)cleanUp_running;
-(void)setCleanUp_running:(BOOL)arg1 ;
-(void)setSessionTLSCache:(C2SessionTLSCache *)arg1 ;
-(NSMapTable *)useCountByObject;
-(void)setUseCountByObject:(NSMapTable *)arg1 ;
-(void)setSessionGroupForSessionConfigurationName:(NSMutableDictionary *)arg1 ;
-(BOOL)testBehavior_disableAutomaticCleanup;
-(void)setTestBehavior_disableAutomaticCleanup:(BOOL)arg1 ;
@end
