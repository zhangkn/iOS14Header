/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKTurnBasedParticipantInternal, NSDate, NSString, GKPlayer;

@interface GKTurnBasedParticipant : NSObject {

	GKTurnBasedParticipantInternal* _internal;

}

@property (readonly) GKTurnBasedParticipantInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSDate * lastTurnDate; 
@property (nonatomic,copy) NSDate * timeoutDate; 
@property (nonatomic,readonly) NSString * matchStatusString; 
@property (nonatomic,readonly) BOOL isWinner; 
@property (nonatomic,readonly) GKPlayer * invitedBy; 
@property (nonatomic,readonly) NSString * inviteMessage; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) GKPlayer * player; 
@property (nonatomic,readonly) long long status; 
@property (assign,nonatomic) long long matchOutcome; 
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)keyPathsForValuesAffectingStatus;
+(id)stringForMatchOutcome:(long long)arg1 totalParticipant:(long long)arg2 ;
+(id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+(id)keyPathsForValuesAffectingMatchOutcomeString;
+(BOOL)matchOutcomeIsValidForDoneState:(long long)arg1 ;
-(GKPlayer *)player;
-(BOOL)isLocalPlayer;
-(NSDate *)lastTurnDate;
-(id)matchOutcomeStringForLocalPlayer:(long long)arg1 ;
-(NSString *)matchStatusString;
-(id)matchOutcomeString:(long long)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(GKPlayer *)invitedBy;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)playerID;
-(long long)status;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(GKTurnBasedParticipantInternal *)internal;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isWinner;
-(id)description;
-(id)basicMatchOutcomeString:(long long)arg1 ;
@end

