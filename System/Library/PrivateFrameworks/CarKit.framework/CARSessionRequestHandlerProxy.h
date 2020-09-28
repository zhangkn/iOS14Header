/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CARSessionRequestService.h>

@protocol CARSessionRequestHandling;
@interface CARSessionRequestHandlerProxy : NSObject <CARSessionRequestService> {

	id<CARSessionRequestHandling> _requestHandler;

}

@property (assign,nonatomic,__weak) id<CARSessionRequestHandling> requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
-(id<CARSessionRequestHandling>)requestHandler;
-(void)service_startSessionWithHost:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)service_startAdvertisingCarPlayControlForUSBWithReply:(/*^block*/id)arg1 ;
-(void)service_prepareForRemovingWiFiUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)service_startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)service_cancelRequestsWithReply:(/*^block*/id)arg1 ;
-(void)setRequestHandler:(id<CARSessionRequestHandling>)arg1 ;
@end
