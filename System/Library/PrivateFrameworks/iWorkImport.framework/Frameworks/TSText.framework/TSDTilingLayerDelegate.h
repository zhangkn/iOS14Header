/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSText.framework/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDTilingLayerDelegate <CALayerDelegate>
@optional
-(void)tilingLayerWillSetNeedsLayout:(id)arg1;
-(BOOL)canDrawTilingLayerInBackground:(id)arg1;
-(BOOL)shouldLayoutTilingLayer:(id)arg1;
-(CGRect*)visibleBoundsForTilingLayer:(id)arg1;
-(id)queueForDrawingTilingLayerInBackground:(id)arg1;
-(BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3;
-(void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
-(id)providerForTilingLayer:(id)arg1;
-(BOOL)mustDrawTilingLayerOnMainThread:(id)arg1;
-(void)tilingLayerWillSetNeedsDisplay:(id)arg1;
-(void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(id)arg1;

@end
