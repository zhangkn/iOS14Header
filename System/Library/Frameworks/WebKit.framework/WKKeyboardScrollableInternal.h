/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKKeyboardScrollableInternal <NSObject>
@required
-(CGPoint*)contentOffset;
-(void)didFinishScrolling;
-(RectEdges<bool>*)rubberbandableDirections;
-(CGPoint*)boundedContentOffset:(CGPoint)arg1;
-(RectEdges<bool>*)scrollableDirectionsFromOffset:(CGPoint)arg1;
-(void)scrollToContentOffset:(FloatPoint)arg1 animated:(BOOL)arg2;
-(CGSize*)interactiveScrollVelocity;
-(double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2;
-(BOOL)isKeyboardScrollable;
-(void)scrollWithScrollToExtentAnimationTo:(CGPoint)arg1;

@end
