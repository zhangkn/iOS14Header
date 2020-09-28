/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class _PASLock, NSString, NSObject;

@interface ATXCacheReader : NSObject {

	_PASLock* _lock;
	NSString* _cacheBasePath;
	NSObject*<OS_dispatch_source> _vnodeSource;

}
-(void)_handleDirChange;
-(void)dealloc;
-(id)readCacheFileForConsumerSubtype:(unsigned char)arg1 ;
-(id)readCacheFileForCachePath:(id)arg1 ;
-(id)init;
-(id)initWithCacheBasePath:(id)arg1 ;
@end
