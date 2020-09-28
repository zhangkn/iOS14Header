/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSString, WFWorkflowIcon;

@interface WFWorkflowCollection : WFDatabaseObjectDescriptor {

	BOOL _folder;
	BOOL _deleted;
	NSString* _name;
	WFWorkflowIcon* _icon;

}

@property (readonly,nonatomic) NSString * displayName; 
@property (readonly,nonatomic) NSString * displaySubtitle; 
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon;                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSString * systemIconName; 
@property (getter=isFolder,nonatomic,readonly) BOOL folder;                //@synthesize folder=_folder - In the implementation block
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted;              //@synthesize deleted=_deleted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultName;
+(id)defaultIcon;
-(NSString *)displayName;
-(NSString *)displaySubtitle;
-(WFWorkflowIcon *)icon;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFolder;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isDeleted;
-(NSString *)name;
-(id)initWithIdentifier:(id)arg1 isFolder:(BOOL)arg2 name:(id)arg3 icon:(id)arg4 isDeleted:(BOOL)arg5 ;
-(NSString *)systemIconName;
@end
