/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@class WFRowTemplateParameterState;

@interface WFRowTemplateParameterComponent : CKCompositeComponent {

	WFRowTemplateParameterState* _state;
	unsigned long long _rowIndex;
	CKTypedComponentAction<unsigned long> _deleteAction;

}
+(id)numberFormatter;
+(id)itemFont;
+(id)newWithState:(id)arg1 rowIndex:(unsigned long long)arg2 updateBlock:(/*^block*/id)arg3 deleteAction:(CKTypedComponentAction<unsigned long>)arg4 tappedAction:(CKTypedComponentAction<>)arg5 options:(WFRowTemplateParameterComponentOptions)arg6 style:(const WFWrappingStackLayoutComponentStyle*)arg7 size:(const CKComponentSize*)arg8 variableProvider:(id)arg9 variableUIDelegate:(id)arg10 navigationContext:(id)arg11 ;
-(void)deleteButtonPressed;
@end

