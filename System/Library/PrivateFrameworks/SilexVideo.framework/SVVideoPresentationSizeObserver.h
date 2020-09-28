/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoPresentationSizeObserving.h>

@protocol SVPlayerItemObserving;
@class SVKeyValueObserver, NSString;

@interface SVVideoPresentationSizeObserver : NSObject <SVVideoPresentationSizeObserving> {

	/*^block*/id changeBlock;
	id<SVPlayerItemObserving> _playerItemObserver;
	SVKeyValueObserver* _presentationSizeObserver;
	CGSize _presentationSize;

}

@property (nonatomic,readonly) id<SVPlayerItemObserving> playerItemObserver;               //@synthesize playerItemObserver=_playerItemObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * presentationSizeObserver;              //@synthesize presentationSizeObserver=_presentationSizeObserver - In the implementation block
@property (assign,nonatomic) CGSize presentationSize;                                      //@synthesize presentationSize=_presentationSize - In the implementation block
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)changeBlock;
-(void)setPresentationSize:(CGSize)arg1 ;
-(void)onChange:(/*^block*/id)arg1 ;
-(CGSize)presentationSize;
-(id)initWithPlayerItemObserver:(id)arg1 ;
-(id<SVPlayerItemObserving>)playerItemObserver;
-(SVKeyValueObserver *)presentationSizeObserver;
@end
