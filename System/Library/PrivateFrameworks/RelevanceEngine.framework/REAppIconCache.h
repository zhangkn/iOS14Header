/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface REAppIconCache : RESingleton {

	NSCache* _imageCache;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_init;
-(void)_loadRemoteIconForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadIconForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)iconForApplicationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

