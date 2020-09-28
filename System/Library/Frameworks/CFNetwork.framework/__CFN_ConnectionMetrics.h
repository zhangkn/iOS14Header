/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_nw_connection, OS_nw_endpoint, OS_nw_establishment_report;
@class NSObject, __CFN_SessionMetrics, NSDictionary, NSUUID, NSString;

@interface __CFN_ConnectionMetrics : NSObject <NSSecureCoding> {

	os_unfair_lock_s connectionLock;
	BOOL _needsCachedTCPInfoAtEnd;
	BOOL _needsCachedSubflowCounts;
	BOOL _TLSConfigured;
	BOOL _proxyConfigured;
	BOOL _cellular;
	BOOL _expensive;
	BOOL _constrained;
	BOOL _multipath;
	BOOL _usedTFO;
	BOOL _usedByTransaction;
	BOOL _coalesced;
	unsigned short _negotiatedTLSProtocolVersion;
	unsigned short _negotiatedTLSCipherSuite;
	NSObject*<OS_nw_connection> _connection;
	__CFN_SessionMetrics* _sessionMetrics;
	NSDictionary* _cachedTCPInfoAtEnd;
	NSDictionary* _cachedSubflowCounts;
	NSUUID* _UUID;
	unsigned long long _identifier;
	NSUUID* _initiatingTransactionID;
	double _beginTime;
	double _establishTime;
	double _firstByteReceivedTime;
	double _endTime;
	NSObject*<OS_nw_endpoint> _endpoint;
	long long _http3DiscoveryStatus;
	NSObject*<OS_nw_endpoint> _localEndpoint;
	NSObject*<OS_nw_endpoint> _remoteEndpoint;
	NSString* _interfaceName;
	NSString* _networkProtocolName;
	NSObject*<OS_nw_establishment_report> _establishmentReport;
	weak_ptr<TransportConnection>* _transportConnection;

}

@property (nonatomic,copy) NSString * _daemon_interfaceName; 
+(BOOL)supportsSecureCoding;
-(void)set_daemon_interfaceName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)_daemon_interfaceName;
@end
