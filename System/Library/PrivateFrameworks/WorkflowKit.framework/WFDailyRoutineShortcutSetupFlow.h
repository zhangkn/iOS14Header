/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, WFDailyRoutineShortcutSetupTriggerBuilder, WFDailyRoutineShortcutSetupLocation;

@interface WFDailyRoutineShortcutSetupFlow : NSObject {

	NSString* _routineName;
	NSArray* _questions;
	WFDailyRoutineShortcutSetupTriggerBuilder* _trigger;
	WFDailyRoutineShortcutSetupLocation* _location;

}

@property (nonatomic,copy,readonly) NSString * routineName;                                      //@synthesize routineName=_routineName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * questions;                                         //@synthesize questions=_questions - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupTriggerBuilder * trigger;              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupLocation * location;                   //@synthesize location=_location - In the implementation block
-(WFDailyRoutineShortcutSetupTriggerBuilder *)trigger;
-(WFDailyRoutineShortcutSetupLocation *)location;
-(NSArray *)questions;
-(id)initWithRoutineName:(id)arg1 questions:(id)arg2 trigger:(id)arg3 location:(id)arg4 ;
-(NSString *)routineName;
@end

