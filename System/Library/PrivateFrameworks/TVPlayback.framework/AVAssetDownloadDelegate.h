/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAssetDownloadDelegate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_TV2)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_TV2)arg5 forMediaSelection:(id)arg6;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didResolveMediaSelection:(id)arg3;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_TV2)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_TV2)arg5;

@end
