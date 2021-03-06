/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFQueueControlling.h>

@protocol MPCQueueItemProviding;
@class NSMutableDictionary;

@interface MPCMediaFoundationTranslator : NSObject <MFQueueControlling> {

	NSMutableDictionary* _mapping;
	id<MPCQueueItemProviding> _queueController;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * mapping;                     //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,readonly) id<MPCQueueItemProviding> queueController;              //@synthesize queueController=_queueController - In the implementation block
-(id<MPCQueueItemProviding>)queueController;
-(NSMutableDictionary *)mapping;
-(id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4 ;
-(id)initWithQueueController:(id)arg1 ;
-(id)MPAVItemForMFPlayerItem:(id)arg1 ;
-(void)setMPAVItem:(id)arg1 forMFPlayerItem:(id)arg2 ;
-(void)resetMapping;
-(id)_MPAVItemForMFPlayerItem:(id)arg1 allowReuse:(BOOL)arg2 ;
-(id)queueItemForPlayerItem:(id)arg1 allowReuse:(BOOL)arg2 ;
-(BOOL)canSkipInDirection:(long long)arg1 fromItem:(id)arg2 ;
@end

