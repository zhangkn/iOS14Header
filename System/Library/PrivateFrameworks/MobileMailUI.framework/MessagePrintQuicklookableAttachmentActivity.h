/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class UIPrintPageRenderer;

@interface MessagePrintQuicklookableAttachmentActivity : UIActivity {

	UIPrintPageRenderer* _pageRenderer;

}

@property (nonatomic,retain) UIPrintPageRenderer * pageRenderer;              //@synthesize pageRenderer=_pageRenderer - In the implementation block
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(void)performActivity;
-(UIPrintPageRenderer *)pageRenderer;
-(id)initWithPrintPageRenderer:(id)arg1 ;
-(void)setPageRenderer:(UIPrintPageRenderer *)arg1 ;
@end

