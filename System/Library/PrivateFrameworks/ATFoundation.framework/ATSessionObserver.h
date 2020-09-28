/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATSessionObserver <NSObject>
@optional
-(void)sessionWillBegin:(id)arg1;
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2;
-(void)session:(id)arg1 didFinishSessionTask:(id)arg2;
-(void)sessionDidFinish:(id)arg1;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
-(void)session:(id)arg1 didBeginSessionTask:(id)arg2;

@end
