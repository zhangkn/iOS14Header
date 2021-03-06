/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@class NSUUID, CWFRequestParameters, NSDate, NSDictionary;

@interface CWFXPCRequest : NSBlockOperation {

	BOOL _didSendResponse;
	NSUUID* _UUID;
	long long _type;
	CWFRequestParameters* _requestParameters;
	NSDate* _receivedAt;
	NSDictionary* _info;
	/*^block*/id _response;

}

@property (assign) BOOL didSendResponse;                                          //@synthesize didSendResponse=_didSendResponse - In the implementation block
@property (nonatomic,copy) NSUUID * UUID;                                         //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) CWFRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,copy) NSDate * receivedAt;                                   //@synthesize receivedAt=_receivedAt - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id response;                                           //@synthesize response=_response - In the implementation block
-(NSDictionary *)info;
-(CWFRequestParameters *)requestParameters;
-(BOOL)isFinished;
-(void)setResponse:(id)arg1 ;
-(BOOL)isExecuting;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)setReceivedAt:(NSDate *)arg1 ;
-(NSUUID *)UUID;
-(void)setDidSendResponse:(BOOL)arg1 ;
-(NSDate *)receivedAt;
-(id)init;
-(long long)type;
-(void)setRequestParameters:(CWFRequestParameters *)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)response;
-(BOOL)didSendResponse;
-(id)description;
@end

