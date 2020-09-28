/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDictionary, NSError;

@interface FCNetworkEvent : NSObject <NSCopying> {

	int _type;
	NSURL* _URL;
	NSString* _requestUUID;
	NSString* _operationID;
	double _startTime;
	NSDictionary* _w3cNavigationTiming;
	unsigned long long _requestSize;
	unsigned long long _responseSize;
	NSString* _responseMIMEType;
	unsigned long long _HTTPStatusCode;
	NSString* _HTTPMethod;
	NSDictionary* _HTTPResponseHeaders;
	NSString* _containerName;
	NSError* _error;

}

@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * requestUUID;                           //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,copy) NSString * operationID;                           //@synthesize operationID=_operationID - In the implementation block
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSDictionary * w3cNavigationTiming;               //@synthesize w3cNavigationTiming=_w3cNavigationTiming - In the implementation block
@property (assign,nonatomic) unsigned long long requestSize;                 //@synthesize requestSize=_requestSize - In the implementation block
@property (assign,nonatomic) unsigned long long responseSize;                //@synthesize responseSize=_responseSize - In the implementation block
@property (nonatomic,copy) NSString * responseMIMEType;                      //@synthesize responseMIMEType=_responseMIMEType - In the implementation block
@property (assign,nonatomic) unsigned long long HTTPStatusCode;              //@synthesize HTTPStatusCode=_HTTPStatusCode - In the implementation block
@property (nonatomic,copy) NSString * HTTPMethod;                            //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * HTTPResponseHeaders;               //@synthesize HTTPResponseHeaders=_HTTPResponseHeaders - In the implementation block
@property (nonatomic,copy) NSString * containerName;                         //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,copy) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double totalDuration; 
@property (nonatomic,readonly) double fetchStartTime; 
@property (nonatomic,readonly) double dnsDuration; 
@property (nonatomic,readonly) double connectDuration; 
@property (nonatomic,readonly) double requestDuration; 
@property (nonatomic,readonly) double responseDuration; 
@property (nonatomic,readonly) double responseEndTime; 
-(double)fetchStartTime;
-(unsigned long long)responseSize;
-(double)responseDuration;
-(double)totalDuration;
-(NSString *)requestUUID;
-(void)setRequestUUID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResponseMIMEType:(NSString *)arg1 ;
-(NSString *)containerName;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(NSString *)responseMIMEType;
-(unsigned long long)requestSize;
-(NSString *)HTTPMethod;
-(void)setContainerName:(NSString *)arg1 ;
-(double)requestDuration;
-(double)connectDuration;
-(id)debugDescription;
-(NSDictionary *)HTTPResponseHeaders;
-(double)dnsDuration;
-(NSURL *)URL;
-(void)setOperationID:(NSString *)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(int)type;
-(NSString *)operationID;
-(void)setHTTPResponseHeaders:(NSDictionary *)arg1 ;
-(double)responseEndTime;
-(void)setType:(int)arg1 ;
-(void)setW3cNavigationTiming:(NSDictionary *)arg1 ;
-(void)setHTTPStatusCode:(unsigned long long)arg1 ;
-(NSDictionary *)w3cNavigationTiming;
-(unsigned long long)HTTPStatusCode;
-(id)description;
-(void)setRequestSize:(unsigned long long)arg1 ;
@end
