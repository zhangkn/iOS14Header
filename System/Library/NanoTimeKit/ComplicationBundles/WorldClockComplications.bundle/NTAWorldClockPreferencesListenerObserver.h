/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface NTAWorldClockPreferencesListenerObserver : NSObject {

	NSOperationQueue* _queue;
	/*^block*/id _block;

}

@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id block;                                //@synthesize block=_block - In the implementation block
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSOperationQueue *)queue;
-(BOOL)isEqual:(id)arg1 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(unsigned long long)hash;
@end

