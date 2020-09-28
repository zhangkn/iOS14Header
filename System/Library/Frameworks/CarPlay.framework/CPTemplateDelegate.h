/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPTemplateDelegate <NSObject>
@optional
-(void)templateWillAppear:(id)arg1 animated:(BOOL)arg2;
-(void)templateDidAppear:(id)arg1 animated:(BOOL)arg2;
-(void)templateWillDisappear:(id)arg1 animated:(BOOL)arg2;
-(void)templateDidDisappear:(id)arg1 animated:(BOOL)arg2;
-(void)templateDidDismiss:(id)arg1;
-(BOOL)isCarPlayCanvasActive;

@required
-(void)handleActionForControlIdentifier:(id)arg1;

@end
