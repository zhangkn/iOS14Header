/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class _GKASKResourceCacheGroup, NSCache;

@interface GKResourceCache : NSObject {

	_GKASKResourceCacheGroup* _group;
	NSCache* _contents;

}

@property (nonatomic,readonly) _GKASKResourceCacheGroup * group;                             //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSCache * contents;                                           //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL isGroupMember; 
@property (assign,nonatomic) BOOL evictsObjectsWhenApplicationEntersBackground; 
@property (assign,nonatomic) unsigned long long limit; 
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(NSCache *)contents;
-(BOOL)isGroupMember;
-(void)removeResourcesForKey:(id)arg1 ;
-(void)dealloc;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(id)resourcesForKey:(id)arg1 ;
-(id)init;
-(_GKASKResourceCacheGroup *)group;
-(id)initWithGroupOfCache:(id)arg1 ;
-(void)replaceResourcesForKey:(id)arg1 withResource:(id)arg2 ;
-(void)addResource:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllResources;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
@end

