/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_TaskMetrics, __CFN_SessionMetrics, NSUUID, NSURLRequest, NSURLResponse, __CFN_ConnectionMetrics, NSDictionary;

@interface __CFN_TransactionMetrics : NSObject <NSSecureCoding> {

	BOOL _scheduledOriginLoad;
	BOOL _firstOnConnection;
	BOOL _pushed;
	BOOL _APSRelayAttempted;
	BOOL _APSRelaySucceeded;
	__CFN_TaskMetrics* _taskMetrics;
	__CFN_SessionMetrics* _sessionMetrics;
	long long _lastResponseHeaderSize;
	long long _lastResponseBodySize;
	long long _lastResponseBodyTransferSize;
	NSUUID* _UUID;
	NSURLRequest* _request;
	NSURLRequest* _transferredRequest;
	NSURLResponse* _cachedResponse;
	NSURLResponse* _lastResponse;
	__CFN_ConnectionMetrics* _connectionMetrics;
	long long _requestHeaderSize;
	long long _requestBodySize;
	long long _requestBodyTransferSize;
	long long _responseHeaderSize;
	long long _responseBodySize;
	long long _responseBodyTransferSize;
	double _beginTime;
	double _endTime;
	double _cacheLookupBeginTime;
	double _cacheLookupEndTime;
	double _requestBeginTime;
	double _requestEndTime;
	double _responseBeginTime;
	double _responseEndTime;
	unsigned long long _endReason;
	long long _schedulingTier;
	long long _options;
	NSDictionary* _tcpInfoBegin;
	NSDictionary* _tcpInfoEnd;
	NSDictionary* _subflowCountsBegin;
	NSDictionary* _subflowCountsEnd;

}

@property (nonatomic,retain) __CFN_ConnectionMetrics * _daemon_connectionMetrics; 
+(BOOL)supportsSecureCoding;
-(void)set_daemon_connectionMetrics:(__CFN_ConnectionMetrics *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(__CFN_ConnectionMetrics *)_daemon_connectionMetrics;
-(void)encodeWithCoder:(id)arg1 ;
@end
