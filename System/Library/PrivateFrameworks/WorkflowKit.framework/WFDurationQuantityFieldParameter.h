/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (assign,nonatomic) unsigned long long possibleCalendarUnits; 
+(unsigned long long)calendarUnitFromUnitString:(id)arg1 ;
+(BOOL)unitStringIsDurationUnit:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(unsigned long long)possibleCalendarUnits;
-(void)setPossibleCalendarUnits:(unsigned long long)arg1 ;
-(id)stateForDuration:(double)arg1 ;
@end
