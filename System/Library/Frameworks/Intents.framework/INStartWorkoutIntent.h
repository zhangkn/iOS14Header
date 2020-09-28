/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartWorkoutIntentExport.h>

@class INSpeakableString, NSNumber, NSString;

@interface INStartWorkoutIntent : INIntent <INStartWorkoutIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * workoutName; 
@property (nonatomic,copy,readonly) NSNumber * goalValue; 
@property (nonatomic,readonly) long long workoutGoalUnitType; 
@property (nonatomic,readonly) long long workoutLocationType; 
@property (nonatomic,copy,readonly) NSNumber * isOpenEnded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2 ;
-(NSNumber *)goalValue;
-(id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setGoalValue:(NSNumber *)arg1 ;
-(void)setIsOpenEnded:(NSNumber *)arg1 ;
-(NSNumber *)isOpenEnded;
-(long long)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(long long)arg1 ;
-(long long)workoutLocationType;
-(void)setWorkoutLocationType:(long long)arg1 ;
-(INSpeakableString *)workoutName;
-(void)setWorkoutName:(INSpeakableString *)arg1 ;
-(id)_goalValueIntentSlotDescription;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(id)initWithWorkoutName:(id)arg1 goalValue:(id)arg2 workoutGoalUnitType:(long long)arg3 workoutLocationType:(long long)arg4 isOpenEnded:(id)arg5 ;
-(void)setDomain:(id)arg1 ;
-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
@end
