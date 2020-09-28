/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/RLMObject.h>

@class NSString, NSDate, RLMLinkingObjects;

@interface WFRealmWorkflowQuarantine : RLMObject {

	NSString* _sourceAppIdentifier;
	NSDate* _importDate;
	RLMLinkingObjects* _workflows;

}

@property (copy) NSString * sourceAppIdentifier;                 //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (retain) NSDate * importDate;                          //@synthesize importDate=_importDate - In the implementation block
@property (readonly) RLMLinkingObjects * workflows;              //@synthesize workflows=_workflows - In the implementation block
+(id)className;
+(id)defaultPropertyValues;
+(id)requiredProperties;
+(id)linkingObjectsProperties;
-(NSDate *)importDate;
-(void)setImportDate:(NSDate *)arg1 ;
-(NSString *)sourceAppIdentifier;
-(RLMLinkingObjects *)workflows;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
@end
