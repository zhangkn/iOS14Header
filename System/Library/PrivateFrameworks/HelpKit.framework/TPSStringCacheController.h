/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSDataCacheController.h>

@interface TPSStringCacheController : TPSDataCacheController
+(id)sharedInstance;
-(id)formattedDataWithFileURL:(id)arg1 ;
-(id)formattedDataWithData:(id)arg1 ;
-(BOOL)isURLValid:(id)arg1 ;
-(id)newDataCache;
-(void)formattedDataWithFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
