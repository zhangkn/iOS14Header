/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSCH3DSceneRenderCacheObject : NSObject {

	BOOL mCachingEnabled;
	NSMutableArray* mDynamicResources;
	NSMutableArray* mChildCacheObjects;

}

@property (assign,nonatomic) BOOL cachingEnabled; 
+(id)cacheObject;
-(void)dealloc;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(void)flushCache;
-(id)init;
-(void)setCachingEnabled:(BOOL)arg1 ;
-(unsigned long long)resourceCount;
-(BOOL)cachingEnabled;
-(void)allocateDynamicResourcesIntoArray:(id)arg1 ;
-(int)p_resourceUpdateFlag;
-(void)p_updateResourceUpdateFlags:(int)arg1 ;
-(id)resourceAtIndex:(unsigned long long)arg1 created:(BOOL*)arg2 ifAbsent:(/*^block*/id)arg3 ;
-(id)childCacheObjectAtIndex:(unsigned long long)arg1 ;
@end
