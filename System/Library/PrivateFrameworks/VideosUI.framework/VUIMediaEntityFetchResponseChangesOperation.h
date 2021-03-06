/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError;

@interface VUIMediaEntityFetchResponseChangesOperation : VUIAsynchronousOperation {

	NSArray* _fetchResponseChanges;
	NSError* _error;
	NSArray* _latestFetchResponses;
	NSArray* _currentFetchResponses;

}

@property (nonatomic,copy) NSArray * fetchResponseChanges;               //@synthesize fetchResponseChanges=_fetchResponseChanges - In the implementation block
@property (nonatomic,copy) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSArray * latestFetchResponses;               //@synthesize latestFetchResponses=_latestFetchResponses - In the implementation block
@property (nonatomic,copy) NSArray * currentFetchResponses;              //@synthesize currentFetchResponses=_currentFetchResponses - In the implementation block
+(id)_changeSetFromCurrentMediaEntities:(id)arg1 toLatestMediaEntities:(id)arg2 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)init;
-(void)executionDidBegin;
-(void)setCurrentFetchResponses:(NSArray *)arg1 ;
-(NSArray *)fetchResponseChanges;
-(void)_preloadMediaEntityMetadata;
-(NSArray *)currentFetchResponses;
-(NSArray *)latestFetchResponses;
-(id)_mediaEntitiesChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2 ;
-(id)_groupingChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2 ;
-(void)setFetchResponseChanges:(NSArray *)arg1 ;
-(void)_preloadMetadataForFetchResponse:(id)arg1 ;
-(id)_groupingChangeSetWithCurrentGrouping:(id)arg1 latestGrouping:(id)arg2 ;
-(id)initWithLatestFetchResponses:(id)arg1 currentFetchResponses:(id)arg2 ;
-(void)setLatestFetchResponses:(NSArray *)arg1 ;
@end

