/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKAttributedStringWebViewCache : NSObject
+(id)cache;
+(void)resetPurgeDelay;
+(void)purgeSingleWebView;
+(RetainPtr<WKWebView>*)retrieveOrCreateWebView;
+(void)cacheWebView:(id)arg1 ;
+(void)purgeAllWebViews;
+(id)configuration;
+(void)clearConfiguration;
@end

