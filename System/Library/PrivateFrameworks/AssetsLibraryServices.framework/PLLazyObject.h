/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLLazyObject : NSObject {

	BOOL _shouldRetryBlockOnNil;
	os_unfair_lock_s _lock;
	/*^block*/id _block;
	id _object;

}

@property (readonly) id objectValue; 
-(id)objectValue;
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id)initWithObject:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithRetriableBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithRetry:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)accessLazyObjectAtomically:(/*^block*/id)arg1 ;
@end

