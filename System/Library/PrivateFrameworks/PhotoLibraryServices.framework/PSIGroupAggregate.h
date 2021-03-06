/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSMutableArray, NSObject, NSString, PSIGroup;

@interface PSIGroupAggregate : NSObject {

	NSArray* _searchTokens;
	NSMutableArray* _groupAggregateItems;
	NSMutableArray* _aggregatedGroupIds;
	NSMutableArray* _aggregateItemPool;
	unsigned long long _filenameGroupCount;
	NSObject*<OS_dispatch_queue> _groupResultsQueue;
	NSString* _transientToken;
	PSIGroup* _filenameGroupInAggregate;

}

@property (nonatomic,readonly) NSArray * searchTokens;                           //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,copy) NSString * transientToken;                            //@synthesize transientToken=_transientToken - In the implementation block
@property (nonatomic,readonly) PSIGroup * filenameGroupInAggregate;              //@synthesize filenameGroupInAggregate=_filenameGroupInAggregate - In the implementation block
-(id)aggregateItemWithSearchToken:(id)arg1 rangeMatchingToken:(id)arg2 group:(id)arg3 ;
-(NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 useNormalizedString:(BOOL)arg3 extendingSearchRange:(BOOL)arg4 matchingFullToken:(BOOL)arg5 excludingRanges:(id)arg6 ;
-(BOOL)_verifySortedGroupIdsUnique;
-(CFArrayRef)_newSortedGroupIds;
-(id)newGroupResult;
-(BOOL)pushGroup:(id)arg1 ;
-(void)setTransientToken:(NSString *)arg1 ;
-(id)initWithSearchTokens:(id)arg1 groupResultsQueue:(id)arg2 ;
-(NSString *)transientToken;
-(PSIGroup *)filenameGroupInAggregate;
-(id)newGroupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2 ;
-(NSArray *)searchTokens;
-(void)pop;
@end

