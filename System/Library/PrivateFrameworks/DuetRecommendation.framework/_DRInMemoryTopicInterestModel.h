/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DRTopicInterestModeling.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, _DRTopicInterestSummary, NSObject;

@interface _DRInMemoryTopicInterestModel : NSObject <_DRTopicInterestModeling> {

	NSMutableArray* _topics;
	_DRTopicInterestSummary* _summary;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)predicateForTopicsWithPrefix:(id)arg1 ;
+(id)predicateForTopicInteractionsBefore:(id)arg1 ;
+(id)predicateForTopicInteractionsAfter:(id)arg1 ;
-(void)enumerateTopicCountsWithFilter:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2 ;
-(void)purgeEntriesEarlierThanDate:(id)arg1 ;
-(id)computeSummaryWithFilter:(id)arg1 ;
-(void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2 ;
-(void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2 ;
@end

