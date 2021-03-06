/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface RPLegacySessionMessage : NSObject {

	NSDictionary* _message;
	NSDictionary* _options;
	NSString* _requestID;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSDictionary * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) id responseHandler;                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)responseHandler;
-(NSDictionary *)options;
-(void)setResponseHandler:(id)arg1 ;
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSDictionary *)message;
@end

