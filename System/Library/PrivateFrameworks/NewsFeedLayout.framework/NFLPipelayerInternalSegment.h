/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFLPipeSegment, NFLPipelayerDelegate;
@class NSObject;

@interface NFLPipelayerInternalSegment : NSObject {

	unsigned long long _pipeSegmentType;
	unsigned long long _cumulativeHeadlinesUsedCount;
	NSObject*<NFLPipeSegment> _pipeSegment;
	id<NFLPipelayerDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long pipeSegmentType;                           //@synthesize pipeSegmentType=_pipeSegmentType - In the implementation block
@property (assign,nonatomic) unsigned long long cumulativeHeadlinesUsedCount;              //@synthesize cumulativeHeadlinesUsedCount=_cumulativeHeadlinesUsedCount - In the implementation block
@property (nonatomic,retain) NSObject*<NFLPipeSegment> pipeSegment;                        //@synthesize pipeSegment=_pipeSegment - In the implementation block
@property (assign,nonatomic,__weak) id<NFLPipelayerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
-(void)setPipeSegment:(NSObject*<NFLPipeSegment>)arg1 ;
-(void)setCumulativeHeadlinesUsedCount:(unsigned long long)arg1 ;
-(unsigned long long)cumulativeHeadlinesUsedCount;
-(NSObject*<NFLPipeSegment>)pipeSegment;
-(void)setPipeSegmentType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<NFLPipelayerDelegate>)arg1 ;
-(id<NFLPipelayerDelegate>)delegate;
-(unsigned long long)pipeSegmentType;
-(id)description;
@end

