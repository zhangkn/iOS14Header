/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDAsyncLocalContext, _DKKnowledgeSaving;
#import <UsageTracking/UsageTracking-Structs.h>
@class NSMutableDictionary, NSURL, NSString;

@interface USWebpageUsage : NSObject {

	NSMutableDictionary* _contextUsageRecord;
	BOOL _usageTrusted;
	NSURL* _URL;
	NSString* _bundleIdentifier;
	id<_CDAsyncLocalContext> _context;
	id<_DKKnowledgeSaving> _eventStorage;

}

@property (copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) BOOL usageTrusted;                                //@synthesize usageTrusted=_usageTrusted - In the implementation block
@property (readonly) id<_CDAsyncLocalContext> context;                 //@synthesize context=_context - In the implementation block
@property (readonly) id<_DKKnowledgeSaving> eventStorage;              //@synthesize eventStorage=_eventStorage - In the implementation block
@property (copy,readonly) NSURL * URL;                                 //@synthesize URL=_URL - In the implementation block
+(id)getProcessIdentifier;
-(id)initWithURL:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)dealloc;
-(NSURL *)URL;
-(id<_CDAsyncLocalContext>)context;
-(id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)changeState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)description;
-(BOOL)usageTrusted;
-(id<_DKKnowledgeSaving>)eventStorage;
-(id)initWithURL:(id)arg1 context:(id)arg2 eventStorage:(id)arg3 bundleIdentifier:(id)arg4 usageTrusted:(BOOL)arg5 ;
-(id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(SCD_Struct_US3)arg3 ;
@end

