/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDPersonalizationStore : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(void)recordMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordLaunchesWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)getAppEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reportAppEvent:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)flushMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getClusterMappingsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getGroupingToken:(/*^block*/id)arg1 ;
-(void)resetActorIDWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadClusterMappingsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setClusterMapping:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setClusterMappings:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getTasteProfileToken:(/*^block*/id)arg1 ;
-(void)tasteProfileFeatureEnabled:(/*^block*/id)arg1 ;
-(void)resetMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_initWithServiceBroker:(id)arg1 ;
@end

