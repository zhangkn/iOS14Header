/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol FCOfflineArticleManagerType
@property (nonatomic,readonly) NSSet * downloadedArticleIDs; 
@required
-(void)enableDownloading;
-(NSSet *)downloadedArticleIDs;
-(void)addContributor:(id)arg1;
-(void)expressInterestInArticlesWithCompletionHandler:(/*^block*/id)arg1;
-(void)notifyWhenFinishedDownloadingWithBlock:(/*^block*/id)arg1;

@end
