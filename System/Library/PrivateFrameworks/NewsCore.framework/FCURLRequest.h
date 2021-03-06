/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSURLSession, NSString;

@interface FCURLRequest : NSObject {

	NSURLRequest* _URLRequest;
	NSURLSession* _URLSession;
	long long _destination;
	long long _priority;
	NSString* _loggingKey;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSURLRequest * URLRequest;              //@synthesize URLRequest=_URLRequest - In the implementation block
@property (nonatomic,readonly) NSURLSession * URLSession;                   //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) long long destination;                       //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) long long priority;                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingKey;                  //@synthesize loggingKey=_loggingKey - In the implementation block
@property (nonatomic,copy,readonly) id completion;                          //@synthesize completion=_completion - In the implementation block
-(long long)destination;
-(NSURLSession *)URLSession;
-(NSString *)loggingKey;
-(NSURLRequest *)URLRequest;
-(void)setPriority:(long long)arg1 ;
-(id)initWithURLRequest:(id)arg1 session:(id)arg2 destination:(long long)arg3 priority:(long long)arg4 loggingKey:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)completion;
-(long long)priority;
@end

