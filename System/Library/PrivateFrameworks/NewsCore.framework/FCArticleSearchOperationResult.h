/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCArticleStreamingResults, FCArticleSearchOperationFeedbackResult;

@interface FCArticleSearchOperationResult : NSObject {

	FCArticleStreamingResults* _articles;
	FCArticleSearchOperationFeedbackResult* _feedBack;

}

@property (nonatomic,retain) FCArticleStreamingResults * articles;                           //@synthesize articles=_articles - In the implementation block
@property (nonatomic,retain) FCArticleSearchOperationFeedbackResult * feedBack;              //@synthesize feedBack=_feedBack - In the implementation block
-(void)setArticles:(FCArticleStreamingResults *)arg1 ;
-(FCArticleSearchOperationFeedbackResult *)feedBack;
-(void)setFeedBack:(FCArticleSearchOperationFeedbackResult *)arg1 ;
-(FCArticleStreamingResults *)articles;
@end
