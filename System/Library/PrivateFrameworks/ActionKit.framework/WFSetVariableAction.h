/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFSetVariableAction : WFAction
-(id)variableName;
-(id)accessibilityName;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)providedVariableNames;
@end
