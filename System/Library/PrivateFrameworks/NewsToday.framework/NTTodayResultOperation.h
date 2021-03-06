/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, NFCopying;
@class NTPBTodayResultOperationInfo;

@interface NTTodayResultOperation : FCOperation {

	id<FCContentContext> _contentContext;
	NTPBTodayResultOperationInfo* _operationInfo;
	id<NFCopying> _prefetchedContent;
	/*^block*/id _headlineResultCompletionHandler;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;                     //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) NTPBTodayResultOperationInfo * operationInfo;              //@synthesize operationInfo=_operationInfo - In the implementation block
@property (nonatomic,copy) id<NFCopying> prefetchedContent;                           //@synthesize prefetchedContent=_prefetchedContent - In the implementation block
@property (nonatomic,copy) id headlineResultCompletionHandler;                        //@synthesize headlineResultCompletionHandler=_headlineResultCompletionHandler - In the implementation block
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(id<NFCopying>)prefetchedContent;
-(id)init;
-(NTPBTodayResultOperationInfo *)operationInfo;
-(void)setPrefetchedContent:(id<NFCopying>)arg1 ;
-(void)setOperationInfo:(NTPBTodayResultOperationInfo *)arg1 ;
-(void)setHeadlineResultCompletionHandler:(id)arg1 ;
-(id)headlineResultCompletionHandler;
@end

