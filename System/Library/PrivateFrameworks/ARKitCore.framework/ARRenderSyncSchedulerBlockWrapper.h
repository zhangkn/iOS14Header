/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface ARRenderSyncSchedulerBlockWrapper : NSObject {

	NSDate* _entryTimestamp;
	/*^block*/id _block;

}

@property (nonatomic,retain) NSDate * entryTimestamp;              //@synthesize entryTimestamp=_entryTimestamp - In the implementation block
@property (nonatomic,copy) id block;                               //@synthesize block=_block - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setEntryTimestamp:(NSDate *)arg1 ;
-(NSDate *)entryTimestamp;
@end
