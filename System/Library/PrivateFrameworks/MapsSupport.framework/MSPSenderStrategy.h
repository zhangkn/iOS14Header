/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSPSharedTripGroupSession, NSMutableSet, GEOSharedNavState, NSMutableDictionary;

@interface MSPSenderStrategy : NSObject {

	MSPSharedTripGroupSession* _groupSession;
	NSMutableSet* _participants;
	GEOSharedNavState* _state;
	NSMutableDictionary* _destinationSentStates;
	NSMutableDictionary* _etaSentStates;
	NSMutableDictionary* _lastEtaUpdateDates;
	NSMutableDictionary* _routeSentStates;
	NSMutableDictionary* _trafficSentStates;

}

@property (nonatomic,retain) NSMutableDictionary * destinationSentStates;              //@synthesize destinationSentStates=_destinationSentStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * etaSentStates;                      //@synthesize etaSentStates=_etaSentStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastEtaUpdateDates;                 //@synthesize lastEtaUpdateDates=_lastEtaUpdateDates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * routeSentStates;                    //@synthesize routeSentStates=_routeSentStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * trafficSentStates;                  //@synthesize trafficSentStates=_trafficSentStates - In the implementation block
@property (nonatomic,retain) NSMutableSet * participants;                              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,copy) GEOSharedNavState * state;                                  //@synthesize state=_state - In the implementation block
-(void)addParticipants:(id)arg1 ;
-(void)setParticipants:(NSMutableSet *)arg1 ;
-(void)setState:(GEOSharedNavState *)arg1 ;
-(NSMutableSet *)participants;
-(BOOL)removeParticipant:(id)arg1 ;
-(GEOSharedNavState *)state;
-(void)_sendDestinationReachedUpdate:(id)arg1 to:(id)arg2 ;
-(void)_sendStoppedUpdate:(id)arg1 to:(id)arg2 ;
-(id)initWithGroupSession:(id)arg1 ;
-(void)restoreState:(id)arg1 ;
-(void)removeParticipants:(id)arg1 ;
-(void)_sendDestinationUpdate:(id)arg1 to:(id)arg2 ;
-(void)_sendETAUpdate:(id)arg1 to:(id)arg2 ;
-(void)_sendRouteUpdate:(id)arg1 to:(id)arg2 ;
-(void)_sendTrafficUpdate:(id)arg1 to:(id)arg2 ;
-(void)etaUpdated:(id)arg1 ;
-(void)destinationUpdated:(id)arg1 ;
-(void)routeUpdated:(id)arg1 ;
-(void)trafficUpdated:(id)arg1 ;
-(void)stateUpdated:(id)arg1 ;
-(void)destinationReached:(id)arg1 ;
-(void)sessionStopped:(id)arg1 ;
-(NSMutableDictionary *)destinationSentStates;
-(void)setDestinationSentStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)etaSentStates;
-(void)setEtaSentStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lastEtaUpdateDates;
-(void)setLastEtaUpdateDates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)routeSentStates;
-(void)setRouteSentStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)trafficSentStates;
-(void)setTrafficSentStates:(NSMutableDictionary *)arg1 ;
@end
