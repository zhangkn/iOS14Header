/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_parameters;
@class NSObject, NSSet, NSUUID, NSArray, NSString, NSURL, NSDictionary, NWAddressEndpoint, NWInterface, NSData;

@interface NWParameters : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enableSFO;
	NSObject*<OS_nw_parameters> _internalParameters;
	NSSet* _SSLCipherSuitesInternal;
	unsigned long long _minimumSSLProtocolVersionInternal;
	unsigned long long _maximumSSLProtocolVersionInternal;

}

@property (retain) NSObject*<OS_nw_parameters> internalParameters;                                       //@synthesize internalParameters=_internalParameters - In the implementation block
@property (assign,nonatomic) BOOL indefinite; 
@property (assign,nonatomic) BOOL noProxy; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isDryRun,nonatomic,readonly) BOOL dryRun; 
@property (nonatomic,readonly) BOOL prohibitCellular; 
@property (assign,nonatomic) BOOL prohibitFallback; 
@property (assign,getter=isDiscretionary,nonatomic) BOOL discretionary; 
@property (assign,nonatomic) BOOL allowSocketAccess; 
@property (nonatomic,retain) NSUUID * parentID; 
@property (nonatomic,readonly) NSArray * parentIDs; 
@property (setter=SLCipherSuitesInternal,nonatomic,retain) NSSet * SSLCipherSuitesInternal;              //@synthesize SSLCipherSuitesInternal=_SSLCipherSuitesInternal - In the implementation block
@property (assign,nonatomic) unsigned long long minimumSSLProtocolVersionInternal;                       //@synthesize minimumSSLProtocolVersionInternal=_minimumSSLProtocolVersionInternal - In the implementation block
@property (assign,nonatomic) unsigned long long maximumSSLProtocolVersionInternal;                       //@synthesize maximumSSLProtocolVersionInternal=_maximumSSLProtocolVersionInternal - In the implementation block
@property (nonatomic,readonly) unsigned char transportProtocol; 
@property (assign,nonatomic) BOOL keepAlive; 
@property (assign,nonatomic) unsigned long long keepAliveIdleTime; 
@property (assign,nonatomic) unsigned long long keepAliveInterval; 
@property (assign,nonatomic) BOOL keepAliveOffload; 
@property (assign,nonatomic) BOOL httpsProxyIsOpaque; 
@property (assign,nonatomic) BOOL httpsProxyOverTLS; 
@property (assign,nonatomic) BOOL attachProtocolListener; 
@property (assign,nonatomic) BOOL prohibitJoiningProtocols; 
@property (assign,nonatomic) BOOL allowJoiningConnectedFd; 
@property (assign,nonatomic) BOOL allowDuplicateStateUpdates; 
@property (assign,nonatomic) BOOL trustInvalidCertificates; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) unsigned char ipProtocol; 
@property (assign,nonatomic) int pid; 
@property (assign,nonatomic) unsigned uid; 
@property (nonatomic,copy) NSUUID * processUUID; 
@property (nonatomic,copy) NSUUID * effectiveProcessUUID; 
@property (nonatomic,copy) NSString * effectiveBundleID; 
@property (assign,nonatomic) BOOL useLongOutstandingQueries; 
@property (assign,nonatomic) BOOL ignoreResolverStats; 
@property (assign,nonatomic) BOOL useAWDL; 
@property (assign,nonatomic) BOOL useP2P; 
@property (assign,nonatomic) BOOL resolvePTR; 
@property (assign,nonatomic) BOOL multipath; 
@property (assign,nonatomic) int multipathService; 
@property (assign,nonatomic) BOOL multipathForceEnable; 
@property (assign,nonatomic) unsigned char requiredAddressFamily; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,readonly) NSURL * sanitizedURL; 
@property (nonatomic,copy) NSDictionary * proxyConfiguration; 
@property (nonatomic,retain) NWAddressEndpoint * localAddress; 
@property (assign,nonatomic) BOOL reuseLocalAddress; 
@property (nonatomic,retain) NWInterface * requiredInterface; 
@property (assign,nonatomic) long long requiredInterfaceType; 
@property (assign,nonatomic) long long requiredInterfaceSubtype; 
@property (assign,nonatomic) BOOL enableTFO; 
@property (assign,nonatomic) BOOL enableTFONoCookie; 
@property (assign,nonatomic) BOOL fastOpenForceEnable; 
@property (assign,nonatomic) BOOL enableSFO;                                                             //@synthesize enableSFO=_enableSFO - In the implementation block
@property (nonatomic,retain) NSData * metadata; 
@property (assign,nonatomic) BOOL prohibitRoaming; 
@property (nonatomic,copy) NSArray * protocolTransforms; 
@property (assign,nonatomic) BOOL allowUnusableAddresses; 
@property (assign,nonatomic) BOOL preferNoProxy; 
@property (nonatomic,copy) NSString * account; 
@property (assign,nonatomic) unsigned long long dataMode; 
@property (assign,nonatomic) unsigned long long trafficClass; 
@property (assign,nonatomic) BOOL prohibitExpensivePaths; 
@property (assign,nonatomic) BOOL prohibitConstrainedPaths; 
@property (assign,nonatomic) BOOL reduceBuffering; 
@property (assign,nonatomic) BOOL disableNagleAlgorithm; 
@property (assign,nonatomic) BOOL enableTLS; 
@property (nonatomic,copy) NSData * TLSSessionID; 
@property (nonatomic,copy) NSSet * SSLCipherSuites; 
@property (assign,nonatomic) unsigned long long minimumSSLProtocolVersion; 
@property (assign,nonatomic) unsigned long long maximumSSLProtocolVersion; 
+(BOOL)supportsSecureCoding;
+(id)parametersWithCParameters:(id)arg1 ;
+(id)parametersWithProtocolBufferData:(id)arg1 ;
-(NSUUID *)parentID;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(void)setRequiredAddressFamily:(unsigned char)arg1 ;
-(id)copyCParameters;
-(void)setIndefinite:(BOOL)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(unsigned long long)trafficClass;
-(NSString *)effectiveBundleID;
-(NWAddressEndpoint *)localAddress;
-(void)setIgnoreResolverStats:(BOOL)arg1 ;
-(void)prohibitInterfaceSubtype:(long long)arg1 ;
-(void)prohibitInterface:(id)arg1 ;
-(BOOL)hasDelegatedProcessUUID;
-(BOOL)useAWDL;
-(BOOL)httpsProxyIsOpaque;
-(unsigned long long)keepAliveIdleTime;
-(void)setProhibitRoaming:(BOOL)arg1 ;
-(void)preferNetworkAgentWithUUID:(id)arg1 ;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)reduceBuffering;
-(void)setMaximumSSLProtocolVersion:(unsigned long long)arg1 ;
-(void)setSourceApplicationWithBundleID:(id)arg1 ;
-(void)setAttachProtocolListener:(BOOL)arg1 ;
-(void)setHttpsProxyOverTLS:(BOOL)arg1 ;
-(BOOL)prohibitRoaming;
-(void)requireNetworkAgentWithUUID:(id)arg1 ;
-(void)setMetadata:(NSData *)arg1 ;
-(int)multipathService;
-(NSSet *)SSLCipherSuitesInternal;
-(NSDictionary *)proxyConfiguration;
-(void)setNoProxy:(BOOL)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(void)setInitialDataPayload:(id)arg1 ;
-(NSString *)privateDescription;
-(void)preferNetworkAgentWithDomain:(id)arg1 type:(id)arg2 ;
-(BOOL)prohibitJoiningProtocols;
-(BOOL)isDiscretionary;
-(void)setAllowDuplicateStateUpdates:(BOOL)arg1 ;
-(BOOL)allowJoiningConnectedFd;
-(BOOL)trustInvalidCertificates;
-(void)setInternalParameters:(NSObject*<OS_nw_parameters>)arg1 ;
-(BOOL)keepAliveOffload;
-(NSSet *)SSLCipherSuites;
-(BOOL)prohibitFallback;
-(NSData *)metadata;
-(void)setRequiredInterfaceType:(long long)arg1 ;
-(BOOL)copyEffectiveAuditToken:(SCD_Struct_NW22*)arg1 ;
-(BOOL)isDryRun;
-(void)setAccount:(NSString *)arg1 ;
-(void)avoidNetworkAgentWithDomain:(id)arg1 type:(id)arg2 ;
-(BOOL)hasPreferredNetworkAgents;
-(id)createProtocolBufferObject;
-(void)setMultipathService:(int)arg1 ;
-(void)setProtocolAtLevel:(unsigned long long)arg1 protocol:(nw_protocol_identifier*)arg2 ;
-(void)setEnableTFO:(BOOL)arg1 ;
-(void)setProhibitFallback:(BOOL)arg1 ;
-(void)setProhibitJoiningProtocols:(BOOL)arg1 ;
-(unsigned long long)keepAliveInterval;
-(NSString *)account;
-(void)setAllowSocketAccess:(BOOL)arg1 ;
-(BOOL)attachProtocolListener;
-(void)setEnableTLS:(BOOL)arg1 ;
-(void)setResolvePTR:(BOOL)arg1 ;
-(void)setKeepAlive:(BOOL)arg1 ;
-(BOOL)ignoreResolverStats;
-(BOOL)enableTFONoCookie;
-(unsigned char)requiredAddressFamily;
-(BOOL)fastOpenForceEnable;
-(unsigned short)tlsVersionWithSSLProtocol:(int)arg1 ;
-(void)setPid:(int)arg1 ;
-(unsigned char)ipProtocol;
-(BOOL)allowUnusableAddresses;
-(void)setProtocolTransforms:(NSArray *)arg1 ;
-(void)setRequiredInterface:(NWInterface *)arg1 ;
-(void)setProhibitExpensivePaths:(BOOL)arg1 ;
-(BOOL)hasNonEmptyProxyConfiguration;
-(void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2 ;
-(BOOL)allowSocketAccess;
-(BOOL)prohibitConstrainedPaths;
-(void)setDisableNagleAlgorithm:(BOOL)arg1 ;
-(unsigned long long)maximumSSLProtocolVersionInternal;
-(void)setSSLCipherSuitesInternal:(NSSet *)arg1 ;
-(BOOL)disableNagleAlgorithm;
-(id)init;
-(void)setSSLCipherSuites:(NSSet *)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)setKeepAliveInterval:(unsigned long long)arg1 ;
-(id)copyRequiredAgentsDescription;
-(BOOL)noProxy;
-(void)setKeepAliveIdleTime:(unsigned long long)arg1 ;
-(void)setEnableTFONoCookie:(BOOL)arg1 ;
-(unsigned char)transportProtocol;
-(NSArray *)parentIDs;
-(void)setAllowUnusableAddresses:(BOOL)arg1 ;
-(void)setProxyConfiguration:(NSDictionary *)arg1 ;
-(BOOL)httpsProxyOverTLS;
-(BOOL)useP2P;
-(void)setParentID:(NSUUID *)arg1 ;
-(void)setKeepAliveOffload:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)avoidNetworkAgentWithUUID:(id)arg1 ;
-(void)setMultipath:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)multipath;
-(void)setMaximumSSLProtocolVersionInternal:(unsigned long long)arg1 ;
-(unsigned long long)dataMode;
-(BOOL)enableTLS;
-(NSUUID *)effectiveProcessUUID;
-(BOOL)enableTFO;
-(void)setProhibitConstrainedPaths:(BOOL)arg1 ;
-(void)setUseP2P:(BOOL)arg1 ;
-(void)prohibitInterfaceType:(long long)arg1 ;
-(long long)requiredInterfaceSubtype;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSourceApplicationWithToken:(SCD_Struct_NW22)arg1 ;
-(BOOL)resolvePTR;
-(NSURL *)sanitizedURL;
-(void)setPreferNoProxy:(BOOL)arg1 ;
-(void)setHttpsProxyIsOpaque:(BOOL)arg1 ;
-(BOOL)isValid;
-(NSData *)TLSSessionID;
-(void)setMinimumSSLProtocolVersion:(unsigned long long)arg1 ;
-(void)prohibitNetworkAgentWithUUID:(id)arg1 ;
-(void)setUseAWDL:(BOOL)arg1 ;
-(void)setUid:(unsigned)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)hasProhibitedNetworkAgents;
-(void)setRequiredInterfaceSubtype:(long long)arg1 ;
-(unsigned long long)maximumSSLProtocolVersion;
-(long long)requiredInterfaceType;
-(NSArray *)protocolTransforms;
-(void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
-(NWInterface *)requiredInterface;
-(void)setTLSSessionID:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)useLongOutstandingQueries;
-(BOOL)preferNoProxy;
-(NSURL *)url;
-(void)setReuseLocalAddress:(BOOL)arg1 ;
-(void)setLocalAddress:(NWAddressEndpoint *)arg1 ;
-(BOOL)enableSFO;
-(unsigned long long)minimumSSLProtocolVersion;
-(void)setUseLongOutstandingQueries:(BOOL)arg1 ;
-(NSObject*<OS_nw_parameters>)internalParameters;
-(void)setEnableSFO:(BOOL)arg1 ;
-(void)setMinimumSSLProtocolVersionInternal:(unsigned long long)arg1 ;
-(NSUUID *)processUUID;
-(BOOL)allowDuplicateStateUpdates;
-(BOOL)keepAlive;
-(void)setProcessUUID:(NSUUID *)arg1 ;
-(void)setEffectiveProcessUUID:(NSUUID *)arg1 ;
-(void)setFastOpenForceEnable:(BOOL)arg1 ;
-(BOOL)prohibitCellular;
-(void)setAllowJoiningConnectedFd:(BOOL)arg1 ;
-(void)setDataMode:(unsigned long long)arg1 ;
-(int)pid;
-(unsigned long long)minimumSSLProtocolVersionInternal;
-(BOOL)indefinite;
-(id)description;
-(BOOL)reuseLocalAddress;
-(BOOL)prohibitExpensivePaths;
-(void)setTrustInvalidCertificates:(BOOL)arg1 ;
-(BOOL)multipathForceEnable;
-(BOOL)hasRequiredNetworkAgents;
-(BOOL)hasDelegatedPIDForOriginatingPID:(int)arg1 ;
-(void)setMultipathForceEnable:(BOOL)arg1 ;
-(void)setReduceBuffering:(BOOL)arg1 ;
-(unsigned)uid;
@end
