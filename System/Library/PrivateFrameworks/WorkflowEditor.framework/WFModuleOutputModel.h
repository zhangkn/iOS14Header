/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class WFAction, NSString, UIImage;

@interface WFModuleOutputModel : NSObject {

	BOOL _extensionInput;
	WFAction* _action;
	NSString* _name;
	UIImage* _icon;
	CKTypedComponentAction<WFModuleOutputModel *> _tapAction;

}

@property (nonatomic,readonly) WFAction * action;                                                    //@synthesize action=_action - In the implementation block
@property (getter=isExtensionInput,nonatomic,readonly) BOOL extensionInput;                          //@synthesize extensionInput=_extensionInput - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<WFModuleOutputModel *> tapAction;              //@synthesize tapAction=_tapAction - In the implementation block
+(id)modelForAction:(id)arg1 withTapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg2 ;
+(id)modelForExtensionInputWithTapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg1 ;
-(WFAction *)action;
-(UIImage *)icon;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(CKTypedComponentAction<WFModuleOutputModel *>)tapAction;
-(id)initWithAction:(id)arg1 tapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg2 ;
-(id)initWithExtensionInputAndTapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg1 ;
-(BOOL)isExtensionInput;
@end

