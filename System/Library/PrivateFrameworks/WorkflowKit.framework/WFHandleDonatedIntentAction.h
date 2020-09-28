/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleIntentAction.h>

@class INIntent, NSString, INIntentExecutionInfo;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction {

	BOOL _forceExecutionOnPhone;
	INIntent* _intent;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _subtitle;
	INIntentExecutionInfo* _resolvedExecutionInfo;

}

@property (nonatomic,readonly) BOOL forceExecutionOnPhone;                                 //@synthesize forceExecutionOnPhone=_forceExecutionOnPhone - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                                 //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) INIntentExecutionInfo * resolvedExecutionInfo;              //@synthesize resolvedExecutionInfo=_resolvedExecutionInfo - In the implementation block
@property (nonatomic,retain) INIntent * intent;                                            //@synthesize intent=_intent - In the implementation block
+(id)intentActionWithShortcut:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 groupIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)intentDescription;
-(long long)intentCategory;
-(NSString *)subtitle;
-(NSString *)groupIdentifier;
-(void)setIntent:(INIntent *)arg1 ;
-(id)localizedSubtitle;
-(id)slots;
-(id)localizedName;
-(NSString *)title;
-(id)initWithIntent:(id)arg1 ;
-(INIntent *)intent;
-(id)appIdentifier;
-(id)serializedParameters;
-(id)name;
-(id)metricsIdentifier;
-(void)continueInAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)initializeParameters;
-(id)localizedDescriptionSummary;
-(id)initWithIntent:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 ;
-(id)initWithInteraction:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4 ;
-(id)createResourceManager;
-(id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)localizedKeyParameterDisplayName;
-(BOOL)forceExecutionOnPhone;
-(INIntentExecutionInfo *)resolvedExecutionInfo;
@end
