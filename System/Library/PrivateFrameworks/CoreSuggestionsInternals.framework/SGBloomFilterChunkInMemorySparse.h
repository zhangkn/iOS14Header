/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/SGBloomFilterChunk.h>

@class NSMutableSet, NSString;

@interface SGBloomFilterChunkInMemorySparse : NSObject <SGBloomFilterChunk> {

	NSMutableSet* _hashes;

}

@property (nonatomic,readonly) unsigned count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)add:(/*function pointer*/void*)arg1 ;
-(id)init;
-(unsigned)count;
-(BOOL)exists:(/*function pointer*/void*)arg1 ;
@end

