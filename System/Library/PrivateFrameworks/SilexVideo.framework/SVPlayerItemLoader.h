/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPlayerItemLoading.h>

@protocol SVPlayerItemFactory, SVURLAssetLoading, SVVideoMetadata;
@class AVPlayerItem, NSError, NFStateMachine, NSMutableArray, NSString;

@interface SVPlayerItemLoader : NSObject <SVPlayerItemLoading> {

	id<SVPlayerItemFactory> _playerItemFactory;
	id<SVURLAssetLoading> _URLAssetLoader;
	id<SVVideoMetadata> _metadata;
	NFStateMachine* _stateMachine;
	NSMutableArray* _loadingStateChangeBlocks;
	unsigned long long _state;
	AVPlayerItem* _item;
	NSError* _error;
	/*^block*/id _cancellationBlock;

}

@property (nonatomic,readonly) id<SVPlayerItemFactory> playerItemFactory;              //@synthesize playerItemFactory=_playerItemFactory - In the implementation block
@property (nonatomic,readonly) id<SVURLAssetLoading> URLAssetLoader;                   //@synthesize URLAssetLoader=_URLAssetLoader - In the implementation block
@property (nonatomic,readonly) id<SVVideoMetadata> metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                          //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NSMutableArray * loadingStateChangeBlocks;              //@synthesize loadingStateChangeBlocks=_loadingStateChangeBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AVPlayerItem * item;                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id cancellationBlock;                                       //@synthesize cancellationBlock=_cancellationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)load;
-(NFStateMachine *)stateMachine;
-(id<SVVideoMetadata>)metadata;
-(void)dealloc;
-(void)setItem:(AVPlayerItem *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(AVPlayerItem *)item;
-(id)cancellationBlock;
-(void)setCancellationBlock:(id)arg1 ;
-(unsigned long long)state;
-(id<SVPlayerItemFactory>)playerItemFactory;
-(void)loadPlayerItemWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)loadingStateChangeBlocks;
-(id<SVURLAssetLoading>)URLAssetLoader;
-(void)onLoadingStateChange:(/*^block*/id)arg1 ;
-(id)initWithPlayerItemFactory:(id)arg1 URLAssetLoader:(id)arg2 metadata:(id)arg3 ;
@end

