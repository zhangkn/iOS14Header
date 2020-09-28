/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {

	NSDictionary* _defaultsByDomain;

}
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(id)domains;
-(BOOL)isAllowedToWriteDefaults;
-(id)defaultsForDomain:(id)arg1 ;
-(id)title;
-(id)verboseDescription;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
@end
