/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFNetMonitor.h>

@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor {

	HMFNetService* _service;

}

@property (readonly) HMFNetService * service;              //@synthesize service=_service - In the implementation block
-(id)netAddress;
-(id)initWithNetAddress:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(unsigned long long)reachabilityPath;
-(void)dealloc;
-(HMFNetService *)service;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)logIdentifier;
@end

