/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKHeadphoneAudioExposureControlClient.h>

@class HKProxyProvider, NSString;

@interface HKHeadphoneAudioExposureControl : NSObject <_HKXPCExportable, HKHeadphoneAudioExposureControlClient> {

	HKProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)rebuildWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)insertQuantityWithExposure:(double)arg1 duration:(double)arg2 startDate:(id)arg3 includesNotificationSample:(BOOL)arg4 synced:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchDoseLimitInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)overrideDoseLimit:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

