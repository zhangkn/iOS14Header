/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@interface TWTweetComposeViewController : UIViewController

@property (nonatomic,copy) id completionHandler; 
+(BOOL)canSendTweet;
-(BOOL)addURL:(id)arg1 ;
-(BOOL)removeAllImages;
-(id)init;
-(BOOL)setInitialText:(id)arg1 ;
-(BOOL)addImage:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(BOOL)removeAllURLs;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(/*^block*/id)addURLWithProxyPreviewImage:(id)arg1 ;
@end
