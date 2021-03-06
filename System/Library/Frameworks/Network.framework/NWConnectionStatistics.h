/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Network/Network-Structs.h>
@class NSString, NSUUID, NSArray, NWL2Report, NWDeviceReport, PBCodable;

@interface NWConnectionStatistics : NSObject {

	unsigned _awdMetricID;
	NSString* _clientIdentifier;
	NSString* _sourceIdentifier;
	NSUUID* _externallyVisibleConnectionUUID;
	NSArray* _externallyVisibleActivityUUIDs;
	NWL2Report* _layer2Report;
	NWDeviceReport* _deviceReport;
	PBCodable* _awdReport;
	NSArray* _activities;
	netcore_stats_tcp_report _report;

}

@property (nonatomic,retain) NSString * clientIdentifier;                                //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) netcore_stats_tcp_report report;                            //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) PBCodable * awdReport;                                      //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                                       //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (nonatomic,retain) NSArray * activities;                                       //@synthesize activities=_activities - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;                                //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL delegated; 
@property (nonatomic,readonly) int interfaceType; 
@property (nonatomic,readonly) unsigned timeToDnsResolvedMsecs; 
@property (nonatomic,readonly) unsigned timeToDnsStartMsecs; 
@property (nonatomic,readonly) unsigned dnsResolvedTimeMsecs; 
@property (nonatomic,readonly) BOOL dnsAnswersCached; 
@property (nonatomic,readonly) unsigned timeToConnectionStartMsecs; 
@property (nonatomic,readonly) unsigned timeToConnectionEstablishmentMsecs; 
@property (nonatomic,readonly) unsigned connectionEstablishmentTimeMsecs; 
@property (nonatomic,readonly) unsigned flowDurationMsecs; 
@property (nonatomic,readonly) int connectedInterfaceType; 
@property (nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) unsigned trafficClass; 
@property (nonatomic,readonly) BOOL fallbackEligible; 
@property (nonatomic,readonly) BOOL cellularFallback; 
@property (nonatomic,readonly) BOOL cellularRrcConnected; 
@property (nonatomic,readonly) BOOL tls13Configured; 
@property (nonatomic,readonly) BOOL tlsSucceeded; 
@property (nonatomic,readonly) BOOL kernelReportedStalls; 
@property (nonatomic,readonly) BOOL kernelReportingConnectionStalled; 
@property (nonatomic,readonly) BOOL kernelReportingReadStalled; 
@property (nonatomic,readonly) BOOL kernelReportingWriteStalled; 
@property (nonatomic,readonly) unsigned long long bytesIn; 
@property (nonatomic,readonly) unsigned long long bytesOut; 
@property (nonatomic,readonly) unsigned long long bytesDuplicate; 
@property (nonatomic,readonly) unsigned long long bytesOOO; 
@property (nonatomic,readonly) unsigned long long bytesRetransmitted; 
@property (nonatomic,readonly) unsigned long long packetsIn; 
@property (nonatomic,readonly) unsigned long long packetsOut; 
@property (nonatomic,readonly) unsigned long long packetsDuplicate; 
@property (nonatomic,readonly) unsigned long long packetsOOO; 
@property (nonatomic,readonly) unsigned long long packetsRetransmitted; 
@property (nonatomic,readonly) unsigned tcpRTTCurrentMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTSmoothedMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTBestMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTVariance; 
@property (nonatomic,readonly) unsigned tcpSynRetransmissionCount; 
@property (nonatomic,readonly) BOOL tcpFastOpen; 
@property (nonatomic,readonly) unsigned tcpBetterRouteEventCount; 
@property (nonatomic,readonly) unsigned tcpConnectionReuseCount; 
@property (nonatomic,readonly) unsigned tcpAppReportingDataStallCount; 
@property (nonatomic,readonly) unsigned tcpAppDataStallTimerMsecs; 
@property (nonatomic,readonly) unsigned connectionReportReason; 
@property (nonatomic,readonly) NSUUID * connectionUUID; 
@property (nonatomic,retain) NSUUID * externallyVisibleConnectionUUID;                   //@synthesize externallyVisibleConnectionUUID=_externallyVisibleConnectionUUID - In the implementation block
@property (nonatomic,retain) NSArray * externallyVisibleActivityUUIDs;                   //@synthesize externallyVisibleActivityUUIDs=_externallyVisibleActivityUUIDs - In the implementation block
@property (nonatomic,retain) NWL2Report * layer2Report;                                  //@synthesize layer2Report=_layer2Report - In the implementation block
@property (nonatomic,retain) NWDeviceReport * deviceReport;                              //@synthesize deviceReport=_deviceReport - In the implementation block
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * effectiveBundleID; 
-(unsigned long long)packetsRetransmitted;
-(NSUUID *)connectionUUID;
-(unsigned)trafficClass;
-(NSString *)effectiveBundleID;
-(unsigned long long)bytesOOO;
-(unsigned)timeToConnectionStartMsecs;
-(void)setDeviceReport:(NWDeviceReport *)arg1 ;
-(unsigned)timeToConnectionEstablishmentMsecs;
-(BOOL)kernelReportedStalls;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(unsigned long long)bytesOut;
-(id)_createStatisticsReportFromStruct:(const netcore_stats_tcp_statistics_report*)arg1 ;
-(unsigned)connectionEstablishmentTimeMsecs;
-(unsigned long long)packetsOOO;
-(BOOL)tcpFastOpen;
-(unsigned long long)packetsDuplicate;
-(void)setReport:(netcore_stats_tcp_report)arg1 ;
-(netcore_stats_tcp_report)report;
-(unsigned long long)packetsOut;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(unsigned long long)bytesDuplicate;
-(BOOL)kernelReportingReadStalled;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(NSArray *)activities;
-(unsigned long long)bytesIn;
-(void)setExternallyVisibleConnectionUUID:(NSUUID *)arg1 ;
-(int)connectedInterfaceType;
-(BOOL)kernelReportingWriteStalled;
-(unsigned)tcpBetterRouteEventCount;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(BOOL)tlsHandshakeTimedOut;
-(unsigned long long)packetsIn;
-(int)interfaceType;
-(NWDeviceReport *)deviceReport;
-(NSUUID *)externallyVisibleConnectionUUID;
-(BOOL)cellularFallback;
-(BOOL)connected;
-(unsigned)connectionReportReason;
-(void)setLayer2Report:(NWL2Report *)arg1 ;
-(unsigned long long)bytesRetransmitted;
-(unsigned)flowDurationMsecs;
-(BOOL)kernelReportingConnectionStalled;
-(BOOL)fallbackEligible;
-(NSString *)sourceIdentifier;
-(BOOL)dnsAnswersCached;
-(void)setExternallyVisibleActivityUUIDs:(NSArray *)arg1 ;
-(unsigned)dnsResolvedTimeMsecs;
-(NSString *)clientIdentifier;
-(unsigned)tcpRTTBestMsecs;
-(unsigned)tcpAppDataStallTimerMsecs;
-(unsigned)timeToDnsStartMsecs;
-(BOOL)delegated;
-(id)_createDataUsageSnapshotFromStruct:(const netcore_stats_data_usage_snapshot*)arg1 ;
-(unsigned)tcpConnectionReuseCount;
-(unsigned)tcpRTTVariance;
-(unsigned)tcpRTTCurrentMsecs;
-(BOOL)tls13Configured;
-(NSArray *)externallyVisibleActivityUUIDs;
-(unsigned)timeToDnsResolvedMsecs;
-(BOOL)tlsSucceeded;
-(id)initWithPBCodableData:(id)arg1 ;
-(unsigned)tcpSynRetransmissionCount;
-(unsigned)awdMetricID;
-(BOOL)cellularRrcConnected;
-(unsigned)tcpRTTSmoothedMsecs;
-(unsigned)tcpAppReportingDataStallCount;
-(NSString *)bundleID;
-(id)initWithTCPReport:(netcore_stats_tcp_report*)arg1 length:(unsigned long long)arg2 clientIdentifier:(id)arg3 sourceIdentifier:(id)arg4 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(PBCodable *)awdReport;
-(id)_createFallbackReportFromStruct:(const netcore_stats_tcp_cell_fallback_report*)arg1 ;
-(NWL2Report *)layer2Report;
@end

