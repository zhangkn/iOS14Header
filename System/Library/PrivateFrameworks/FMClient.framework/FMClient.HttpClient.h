/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:30 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@interface FMClient.HttpClient : NSObject <NSURLSessionDelegate> {

	 authenticationChallengeHandler;
	 httpSuccessCodeMin;
	 httpSuccessCodeMax;
	 endpoint;
	 statusCodeHandlers;
	 statusCodeHandlerQueue;
	 $__lazy_storage_$_session;

}
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
@end
