/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, AnalyticsWorkspace, NetworkAttachmentAnalytics, NSMutableDictionary, NSManagedObjectID, NSDictionary, SFNetworkAttachment, StopWatch, SFLiveRoutePerf, NSMutableSet, NSUUID;

@interface NetworkEpoch : NSObject <NSCopying> {

	NSDate* createdAt;
	NSString* identifier;
	BOOL fromRoamingEvent;
	AnalyticsWorkspace* workspace;
	NetworkAttachmentAnalytics* naspace;
	NSMutableDictionary* tickers;
	NSManagedObjectID* currentLiveRoutePerfObjectID;
	double lastBytesDelta;
	NSDate* lastBytesPartialUpdate;
	BOOL isSnapshot;
	NSDictionary* scores;
	BOOL isLowLqm;
	BOOL isLowq;
	BOOL isFaulty;
	BOOL isKnownGood;
	BOOL _active;
	BOOL _oncell;
	BOOL _supportsIPv4;
	BOOL _supportsIPv6;
	BOOL _hasInternetDNS;
	BOOL _knownGoodNotified;
	BOOL _deleteNetworkAttachmentsWhenDone;
	int _bars;
	unsigned _seqno;
	SFNetworkAttachment* _durable;
	long long _loi;
	NStatSourceRef _defRoute4;
	NStatSourceRef _defRoute6;
	NSString* _interfaceName;
	double _lqmTransitions;
	NSDate* _lastCountedDown;
	StopWatch* _overall;
	StopWatch* _lowLqm;
	StopWatch* _lowq;
	StopWatch* _fatal;
	SFLiveRoutePerf* _partial;
	SFLiveRoutePerf* _partial4;
	SFLiveRoutePerf* _partial6;
	double _initialRttAvg;
	double _initialRttVar;
	double _topDownlRate;
	NSMutableSet* _hasDNS;
	NSMutableSet* _impDNS;
	NSMutableSet* _hasGW;
	NSUUID* _uuid;

}

@property (assign,nonatomic) long long loi;                                         //@synthesize loi=_loi - In the implementation block
@property (readonly) BOOL active;                                                   //@synthesize active=_active - In the implementation block
@property (readonly) BOOL oncell;                                                   //@synthesize oncell=_oncell - In the implementation block
@property (assign,nonatomic) NStatSourceRef defRoute4;                              //@synthesize defRoute4=_defRoute4 - In the implementation block
@property (assign,nonatomic) NStatSourceRef defRoute6;                              //@synthesize defRoute6=_defRoute6 - In the implementation block
@property (assign,nonatomic) BOOL supportsIPv4;                                     //@synthesize supportsIPv4=_supportsIPv4 - In the implementation block
@property (assign,nonatomic) BOOL supportsIPv6;                                     //@synthesize supportsIPv6=_supportsIPv6 - In the implementation block
@property (readonly) NSString * primaryKey; 
@property (readonly) NSString * interfaceName;                                      //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) int bars;                                                        //@synthesize bars=_bars - In the implementation block
@property (assign) double lqmTransitions;                                           //@synthesize lqmTransitions=_lqmTransitions - In the implementation block
@property (nonatomic,retain) NSDate * lastCountedDown;                              //@synthesize lastCountedDown=_lastCountedDown - In the implementation block
@property (nonatomic,retain) StopWatch * overall;                                   //@synthesize overall=_overall - In the implementation block
@property (nonatomic,retain) StopWatch * lowLqm;                                    //@synthesize lowLqm=_lowLqm - In the implementation block
@property (nonatomic,retain) StopWatch * lowq;                                      //@synthesize lowq=_lowq - In the implementation block
@property (nonatomic,retain) StopWatch * fatal;                                     //@synthesize fatal=_fatal - In the implementation block
@property (nonatomic,retain) SFLiveRoutePerf * partial;                             //@synthesize partial=_partial - In the implementation block
@property (nonatomic,retain) SFLiveRoutePerf * partial4;                            //@synthesize partial4=_partial4 - In the implementation block
@property (nonatomic,retain) SFLiveRoutePerf * partial6;                            //@synthesize partial6=_partial6 - In the implementation block
@property (nonatomic,readonly) double initialRttAvg;                                //@synthesize initialRttAvg=_initialRttAvg - In the implementation block
@property (nonatomic,readonly) double initialRttVar;                                //@synthesize initialRttVar=_initialRttVar - In the implementation block
@property (assign,nonatomic) double topDownlRate;                                   //@synthesize topDownlRate=_topDownlRate - In the implementation block
@property (nonatomic,retain) NSMutableSet * hasDNS;                                 //@synthesize hasDNS=_hasDNS - In the implementation block
@property (nonatomic,retain) NSMutableSet * impDNS;                                 //@synthesize impDNS=_impDNS - In the implementation block
@property (nonatomic,retain) NSMutableSet * hasGW;                                  //@synthesize hasGW=_hasGW - In the implementation block
@property (assign,nonatomic) BOOL hasInternetDNS;                                   //@synthesize hasInternetDNS=_hasInternetDNS - In the implementation block
@property (nonatomic,readonly) SFNetworkAttachment * durable;                       //@synthesize durable=_durable - In the implementation block
@property (nonatomic,readonly) SFLiveRoutePerf * currentLiveRoutePerf; 
@property (nonatomic,retain) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (assign) BOOL knownGoodNotified;                                          //@synthesize knownGoodNotified=_knownGoodNotified - In the implementation block
@property (readonly) unsigned seqno;                                                //@synthesize seqno=_seqno - In the implementation block
@property (assign,nonatomic) BOOL deleteNetworkAttachmentsWhenDone;                 //@synthesize deleteNetworkAttachmentsWhenDone=_deleteNetworkAttachmentsWhenDone - In the implementation block
+(BOOL)parsePrimaryKey:(id)arg1 majorID:(id*)arg2 minorID:(id*)arg3 ;
+(id)snapshotsIn:(id)arg1 olderThan:(id)arg2 ;
+(void)resetDataFor:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3 ;
+(id)epochWithPrimaryKey:(id)arg1 interfaceName:(id)arg2 isCell:(BOOL)arg3 maxBars:(int)arg4 roamingEvent:(BOOL)arg5 roamingAttrs:(long long)arg6 supportsIPv4:(BOOL)arg7 supportsIPv6:(BOOL)arg8 inWorkspace:(id)arg9 andQueue:(id)arg10 ;
+(unsigned long long)coalescingFactor;
+(BOOL)pruneDataOlderThan:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3 ;
+(void)resetDataForSSIDs:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3 ;
+(BOOL)parsePrimaryKeyStr:(const char*)arg1 majorIDLengthInBytes:(int*)arg2 minorIDLengthInBytes:(int*)arg3 ;
-(unsigned)seqno;
-(BOOL)active;
-(void)reportCaptivityRedirect;
-(BOOL)knownGoodNotified;
-(StopWatch *)overall;
-(SFLiveRoutePerf *)partial6;
-(void)setTopDownlRate:(double)arg1 ;
-(void)setDefRoute6:(NStatSourceRef)arg1 ;
-(SFLiveRoutePerf *)partial;
-(void)setImpDNS:(NSMutableSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKnownGoodNotified:(BOOL)arg1 ;
-(NSMutableSet *)hasGW;
-(NSMutableSet *)impDNS;
-(NStatSourceRef)defRoute4;
-(double)topDownlRate;
-(void)reportCertError;
-(void)setHasGW:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(StopWatch *)lowLqm;
-(BOOL)matchesLOI:(long long)arg1 ;
-(id)_initWithPrimaryKey:(id)arg1 interfaceName:(id)arg2 isCell:(BOOL)arg3 maxBars:(int)arg4 roamingEvent:(BOOL)arg5 roamingAttrs:(long long)arg6 supportsIPv4:(BOOL)arg7 supportsIPv6:(BOOL)arg8 inWorkspace:(id)arg9 andQueue:(id)arg10 ;
-(NSString *)primaryKey;
-(void)setLastCountedDown:(NSDate *)arg1 ;
-(void)setLqmTransitions:(double)arg1 ;
-(BOOL)_isLiveRoutePerfinScope:(id)arg1 forTime:(id)arg2 ;
-(NSDate *)lastCountedDown;
-(double)initialRttAvg;
-(int)compareToSnapshot:(id)arg1 ;
-(BOOL)deleteNetworkAttachmentsWhenDone;
-(void)setOverall:(StopWatch *)arg1 ;
-(BOOL)hasTypicalShortStay;
-(id)_init;
-(void)reportAdminDisable;
-(void)setSupportsIPv4:(BOOL)arg1 ;
-(SFNetworkAttachment *)durable;
-(void)setHasDNS:(NSMutableSet *)arg1 ;
-(void)setLoi:(long long)arg1 ;
-(BOOL)hasInternetDNS;
-(void)_retrieveLOIAttrsOnQueue:(id)arg1 roamingEvent:(BOOL)arg2 roamingAttrs:(long long)arg3 ;
-(void)setBars:(int)arg1 ;
-(void)setPartial:(SFLiveRoutePerf *)arg1 ;
-(id)_createCellSignature;
-(BOOL)hasCountDownActive:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)unloadDurableState;
-(void)setLowq:(StopWatch *)arg1 ;
-(double)initialRttVar;
-(NSUUID *)uuid;
-(long long)loi;
-(void)setPartial4:(SFLiveRoutePerf *)arg1 ;
-(void)retire;
-(NStatSourceRef)defRoute6;
-(BOOL)supportsIPv4;
-(double)lqmTransitions;
-(StopWatch *)fatal;
-(NSString *)interfaceName;
-(void)updateMetrics:(id)arg1 source:(NStatSourceRef)arg2 wasProgress:(/*^block*/id)arg3 ;
-(void)setDefRoute4:(NStatSourceRef)arg1 ;
-(id)establishPartials:(id)arg1 withFlag:(BOOL)arg2 ;
-(BOOL)oncell;
-(id)mapLOIToString;
-(id)_networkAttachmentDurableState;
-(BOOL)createCountDown:(id)arg1 atTime:(id)arg2 nextTick:(unsigned long long)arg3 ticksTotal:(unsigned long long)arg4 onQueue:(id)arg5 withIterationBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(SFLiveRoutePerf *)partial4;
-(BOOL)countDownStop:(id)arg1 eventTimeStamp:(id)arg2 ;
-(void)setLowLqm:(StopWatch *)arg1 ;
-(BOOL)supportsIPv6;
-(NSMutableSet *)hasDNS;
-(void)setPartial6:(SFLiveRoutePerf *)arg1 ;
-(StopWatch *)lowq;
-(void)setHasInternetDNS:(BOOL)arg1 ;
-(int)bars;
-(long long)getMatchingRTLocationOfInterestType;
-(SFLiveRoutePerf *)currentLiveRoutePerf;
-(id)description;
-(void)reportDataStall;
-(void)setDeleteNetworkAttachmentsWhenDone:(BOOL)arg1 ;
-(void)setFatal:(StopWatch *)arg1 ;
-(void)setSupportsIPv6:(BOOL)arg1 ;
@end
