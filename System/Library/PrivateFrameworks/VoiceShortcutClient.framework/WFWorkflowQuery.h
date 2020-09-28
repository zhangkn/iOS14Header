/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFWorkflowQuery : NSObject <NSSecureCoding> {

	BOOL _includeTombstonesAndConflicts;
	unsigned long long _location;
	NSString* _workflowType;
	NSString* _folderIdentifier;
	long long _resultsLimit;

}

@property (nonatomic,readonly) unsigned long long location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * workflowType;                       //@synthesize workflowType=_workflowType - In the implementation block
@property (nonatomic,readonly) NSString * folderIdentifier;                   //@synthesize folderIdentifier=_folderIdentifier - In the implementation block
@property (assign,nonatomic) long long resultsLimit;                          //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL includeTombstonesAndConflicts;              //@synthesize includeTombstonesAndConflicts=_includeTombstonesAndConflicts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCollectionIdentifier:(id)arg1 ;
-(unsigned long long)location;
-(BOOL)includeTombstonesAndConflicts;
-(void)setResultsLimit:(long long)arg1 ;
-(NSString *)workflowType;
-(void)setIncludeTombstonesAndConflicts:(BOOL)arg1 ;
-(id)initWithLocation:(unsigned long long)arg1 ;
-(NSString *)folderIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithWorkflowType:(id)arg1 ;
-(long long)resultsLimit;
-(id)initWithFolderIdentifier:(id)arg1 ;
@end
