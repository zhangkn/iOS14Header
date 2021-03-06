/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INRunWorkflowIntentResponseExport.h>

@class INArchivedObject, NSString, NSNumber, NSArray;

@interface INRunWorkflowIntentResponse : INIntentResponse <INRunWorkflowIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INArchivedObject * underlyingIntent; 
@property (nonatomic,copy) INArchivedObject * underlyingIntentResponse; 
@property (nonatomic,copy) NSString * utterance; 
@property (nonatomic,copy) NSNumber * waitingForResume; 
@property (nonatomic,copy) NSNumber * continueRunning; 
@property (nonatomic,copy) NSArray * steps; 
@property (nonatomic,copy) NSNumber * requestsIntentExecution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(NSArray *)steps;
-(long long)code;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(void)setContinueRunning:(NSNumber *)arg1 ;
-(INArchivedObject *)underlyingIntentResponse;
-(BOOL)_shouldForwardIntentToApp;
-(void)setUnderlyingIntentResponse:(INArchivedObject *)arg1 ;
-(NSNumber *)requestsIntentExecution;
-(void)setRequestsIntentExecution:(NSNumber *)arg1 ;
-(NSNumber *)waitingForResume;
-(void)setWaitingForResume:(NSNumber *)arg1 ;
-(id)init;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(long long)_codeWithName:(id)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(void)setPropertiesByName:(id)arg1 ;
-(void)setSteps:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(INArchivedObject *)underlyingIntent;
-(void)setUnderlyingIntent:(INArchivedObject *)arg1 ;
-(NSNumber *)continueRunning;
@end

