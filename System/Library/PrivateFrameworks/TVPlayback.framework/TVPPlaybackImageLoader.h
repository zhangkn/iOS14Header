/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPPlaybackImageLoader <NSObject>
@required
-(void)invalidate;
-(id)loadImagesForTimes:(id)arg1 maxSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3;
-(void)cancelImageLoadingForIdentifiers:(id)arg1;
-(double)closestImageTimeForTime:(double)arg1;

@end

