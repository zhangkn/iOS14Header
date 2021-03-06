/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction {

	long long _datePickerMode;

}

@property (nonatomic,readonly) NSString * inputType; 
@property (nonatomic,readonly) NSString * promptText; 
@property (nonatomic,readonly) NSString * defaultAnswer; 
@property (nonatomic,readonly) long long datePickerMode;                            //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,readonly) BOOL immediatelyActivateWatchDictation; 
-(NSString *)inputType;
-(NSString *)promptText;
-(long long)datePickerMode;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)outputContentClasses;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runWithSiriUserInterface:(id)arg1 input:(id)arg2 ;
-(BOOL)shouldCreateIntentAvailableResource;
-(NSString *)defaultAnswer;
-(BOOL)immediatelyActivateWatchDictation;
-(id)datePickerModeFromInputType:(id)arg1 ;
-(void)finishRunningWithResultText:(id)arg1 ;
-(void)finishRunningWithDate:(id)arg1 ;
@end

