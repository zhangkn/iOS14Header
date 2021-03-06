/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionTaskTransactionMetrics, NSString, NSURL;

@interface OspreyConnectionMetrics : NSObject {

	NSURLSessionTaskTransactionMetrics* _metrics;
	unsigned long long _connectionState;

}

@property (nonatomic,readonly) unsigned long long connectionState;                    //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,readonly) double fetchStartToDomainLookupStartTime; 
@property (nonatomic,readonly) double dnsResolutionTime; 
@property (nonatomic,readonly) double connectionEstablishmentTime; 
@property (nonatomic,readonly) double tcpConnectTime; 
@property (nonatomic,readonly) double secureConnectionTime; 
@property (nonatomic,readonly) double fetchStartToFirstByteTime; 
@property (nonatomic,readonly) NSString * connectionMethod; 
@property (nonatomic,readonly) NSURL * requestURL; 
-(unsigned long long)connectionState;
-(id)initWithMetrics:(id)arg1 ;
-(NSURL *)requestURL;
-(NSString *)connectionMethod;
-(double)connectionEstablishmentTime;
-(double)dnsResolutionTime;
-(double)tcpConnectTime;
-(double)secureConnectionTime;
-(double)fetchStartToDomainLookupStartTime;
-(double)fetchStartToFirstByteTime;
@end

