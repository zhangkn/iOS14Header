/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoardUI/BSUIMappedImageCache.h>

@interface SBFMappedImageCache : BSUIMappedImageCache
+(id)systemAppPersistenteCache;
-(id)imageForKey:(id)arg1 cacheOptions:(unsigned long long)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 ;
-(void)warmupImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(/*^block*/id)arg2 ;
-(id)initWithDescription:(id)arg1 ;
-(id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(/*^block*/id)arg3 ;
@end

