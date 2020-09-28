/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIStatusBar, NSString;

@interface SBStatusBarContainer : NSObject {

	UIStatusBar* _statusBar;
	NSString* _reason;

}

@property (assign,nonatomic,__weak) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) NSString * reason;                           //@synthesize reason=_reason - In the implementation block
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(void)dealloc;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reason;
-(id)description;
@end
