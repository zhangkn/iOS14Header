/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
@class UIImage, NSDate;

@interface LUILogScreenshotItem : NSObject {

	UIImage* _screenshotImage;
	NSDate* _screenshotDate;
	NSRange _visibleRange;

}

@property (nonatomic,retain) UIImage * screenshotImage;              //@synthesize screenshotImage=_screenshotImage - In the implementation block
@property (assign,nonatomic) NSRange visibleRange;                   //@synthesize visibleRange=_visibleRange - In the implementation block
@property (nonatomic,retain) NSDate * screenshotDate;                //@synthesize screenshotDate=_screenshotDate - In the implementation block
-(void)setVisibleRange:(NSRange)arg1 ;
-(NSRange)visibleRange;
-(UIImage *)screenshotImage;
-(void)setScreenshotImage:(UIImage *)arg1 ;
-(NSDate *)screenshotDate;
-(void)setScreenshotDate:(NSDate *)arg1 ;
@end

