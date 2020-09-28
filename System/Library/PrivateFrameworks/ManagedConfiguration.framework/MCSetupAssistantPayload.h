/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary;

@interface MCSetupAssistantPayload : MCPayload {

	NSArray* _skipKeys;

}

@property (nonatomic,readonly) NSDictionary * configuration; 
@property (nonatomic,readonly) NSArray * skipKeys;                        //@synthesize skipKeys=_skipKeys - In the implementation block
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(NSArray *)skipKeys;
-(id)verboseDescription;
-(NSDictionary *)configuration;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)payloadDescriptionKeyValueSections;
@end
