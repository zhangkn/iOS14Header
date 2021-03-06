/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@class NSSet, NSString;

@interface FCTrendingStoriesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	unsigned long long _minPrecedingTopicGroups;

}

@property (assign,nonatomic) unsigned long long minPrecedingTopicGroups;               //@synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,readonly) BOOL shouldEmitContentInFavoritesOnlyMode; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL requiresHeavyweightContent; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupEmitterIdentifier;
-(long long)requiredForYouContentTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
-(id)initWithMinPrecedingTopicGroups:(unsigned long long)arg1 ;
-(NSSet *)emittableGroupTypes;
-(unsigned long long)minPrecedingTopicGroups;
-(BOOL)emitsSingletonGroups;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(id)backingChannelTagIDWithConfiguration:(id)arg1 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(void)setMinPrecedingTopicGroups:(unsigned long long)arg1 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
@end

