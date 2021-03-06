/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <libobjc.A.dylib/PGMutablePlaybackStateFaceTimeSupport.h>
#import <libobjc.A.dylib/PGMutablePlaybackStateSecurityCameraSupport.h>
#import <libobjc.A.dylib/PGPlaybackStateDiffConsumer.h>
#import <libobjc.A.dylib/PGMutablePlaybackState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PGPlaybackStatePrerollAttributes, NSMutableDictionary, NSString, NSDictionary;

@interface PGPlaybackState : NSObject <PGMutablePlaybackStateFaceTimeSupport, PGMutablePlaybackStateSecurityCameraSupport, PGPlaybackStateDiffConsumer, PGMutablePlaybackState, NSCopying> {

	PGPlaybackStatePrerollAttributes* _prerollAttributes;
	NSMutableDictionary* _mutableDictionary;

}

@property (assign,nonatomic) BOOL supportsFaceTimeActions; 
@property (assign,getter=isCameraActive,nonatomic) BOOL cameraActive; 
@property (assign,nonatomic) BOOL canSwitchCamera; 
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL cameraHasMicrophone; 
@property (nonatomic,readonly) NSMutableDictionary * mutableDictionary;                                          //@synthesize mutableDictionary=_mutableDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) long long contentType; 
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double contentDuration; 
@property (nonatomic,readonly) long long timeControlStatus; 
@property (nonatomic,readonly) double playbackRate; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) BOOL requiresLinearPlayback; 
@property (nonatomic,readonly) BOOL hasInvalidTiming; 
@property (getter=isRoutingVideoToHostedWindow,nonatomic,readonly) BOOL routingVideoToHostedWindow; 
@property (nonatomic,readonly) PGPlaybackStatePrerollAttributes * prerollAttributes; 
@property (nonatomic,readonly) double normalizedProgress; 
+(id)defaultValueForKey:(id)arg1 ;
+(id)keysForEqualityOfNumberValues;
-(void)_setInteger:(long long)arg1 forKey:(long long)arg2 ;
-(double)playbackRate;
-(long long)contentType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isMicrophoneMuted;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(void)setPrerollAttributes:(PGPlaybackStatePrerollAttributes *)arg1 ;
-(void)setRoutingVideoToHostedWindow:(BOOL)arg1 ;
-(BOOL)requiresLinearPlayback;
-(PGPlaybackStatePrerollAttributes *)prerollAttributes;
-(BOOL)isRoutingVideoToHostedWindow;
-(void)setPlaybackRate:(double)arg1 elapsedTime:(double)arg2 timeControlStatus:(long long)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)elapsedTime;
-(void)setMuted:(BOOL)arg1 ;
-(double)contentDuration;
-(NSMutableDictionary *)mutableDictionary;
-(BOOL)isMuted;
-(id)_numberForKey:(long long)arg1 ;
-(id)_dictionaryForKey:(long long)arg1 ;
-(void)setContentDuration:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContentType:(long long)arg1 ;
-(long long)timeControlStatus;
-(id)initWithDictionary:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(void)_setBool:(BOOL)arg1 forKey:(long long)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(BOOL)_boolForKey:(long long)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)_setStateValue:(id)arg1 forKey:(long long)arg2 ;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(void)appendDescriptionForKey:(long long)arg1 value:(id)arg2 toBuilder:(id)arg3 ;
-(double)normalizedProgress;
-(void)updatePlaybackStateWithDiff:(id)arg1 ;
-(BOOL)supportsFaceTimeActions;
-(void)_ensureMutableDictionary;
-(BOOL)isEquivalentToPlaybackState:(id)arg1 ;
-(BOOL)hasInvalidTiming;
-(long long)_integerForKey:(long long)arg1 ;
-(double)_doubleForKey:(long long)arg1 ;
-(double)anchorContentTime;
-(double)anchorWallTime;
-(void)_setDouble:(double)arg1 forKey:(long long)arg2 ;
-(void)_setDictionaryOrNotFound:(id)arg1 forKey:(long long)arg2 ;
-(id)diffFromPlaybackState:(id)arg1 ;
-(void)setSupportsFaceTimeActions:(BOOL)arg1 ;
-(BOOL)isCameraActive;
-(void)setCameraActive:(BOOL)arg1 ;
-(BOOL)canSwitchCamera;
-(void)setCanSwitchCamera:(BOOL)arg1 ;
-(BOOL)cameraHasMicrophone;
-(void)setCameraHasMicrophone:(BOOL)arg1 ;
@end

