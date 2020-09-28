/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface _DPBlacklist : NSObject {

	NSSet* _blacklist;
	long long _version;
	NSString* _key;

}

@property (nonatomic,copy,readonly) NSString * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSSet * blacklist;                //@synthesize blacklist=_blacklist - In the implementation block
@property (nonatomic,readonly) long long version;                //@synthesize version=_version - In the implementation block
+(void)initialize;
+(void)resetAllBlacklists;
+(id)extractKeyFromFileName:(id)arg1 ;
+(id)blacklistForKey:(id)arg1 fromConfigurationsFile:(id)arg2 ;
+(BOOL)blacklistExistsWithKey:(id)arg1 inDirectory:(id)arg2 ;
+(id)filePathWithKey:(id)arg1 inDirectory:(id)arg2 ;
+(void)removeBlackListsForKeys:(id)arg1 ;
+(id)blacklistForKey:(id)arg1 systemBlacklistDirectory:(id)arg2 runtimeBlacklistDirectory:(id)arg3 ;
+(void)removeBlackListForKey:(id)arg1 ;
-(long long)version;
-(NSString *)key;
-(id)init;
-(NSSet *)blacklist;
-(id)initWithKey:(id)arg1 fromConfigurationsFile:(id)arg2 ;
@end
