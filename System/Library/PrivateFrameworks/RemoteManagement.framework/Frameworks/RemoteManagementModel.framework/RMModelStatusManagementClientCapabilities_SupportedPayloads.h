/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations;

@interface RMModelStatusManagementClientCapabilities_SupportedPayloads : RMModelPayloadBase {

	NSArray* _statusCommands;
	RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations* _statusDeclarations;
	NSArray* _statusStatusItems;

}

@property (nonatomic,copy) NSArray * statusCommands;                                                                                  //@synthesize statusCommands=_statusCommands - In the implementation block
@property (nonatomic,copy) RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations * statusDeclarations;              //@synthesize statusDeclarations=_statusDeclarations - In the implementation block
@property (nonatomic,copy) NSArray * statusStatusItems;                                                                               //@synthesize statusStatusItems=_statusStatusItems - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithCommands:(id)arg1 declarations:(id)arg2 statusItems:(id)arg3 ;
+(id)buildRequiredOnlyWithCommands:(id)arg1 declarations:(id)arg2 statusItems:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusCommands:(NSArray *)arg1 ;
-(void)setStatusDeclarations:(RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations *)arg1 ;
-(NSArray *)statusCommands;
-(RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations *)statusDeclarations;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setStatusStatusItems:(NSArray *)arg1 ;
-(NSArray *)statusStatusItems;
@end
