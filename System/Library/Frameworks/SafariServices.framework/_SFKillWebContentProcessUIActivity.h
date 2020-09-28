/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivity.h>

@protocol _SFKillWebContentProcessUIActivityDelegate;
@interface _SFKillWebContentProcessUIActivity : _SFActivity {

	id<_SFKillWebContentProcessUIActivityDelegate> _webProcessDelegate;

}

@property (assign,nonatomic,__weak) id<_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate;              //@synthesize webProcessDelegate=_webProcessDelegate - In the implementation block
-(id)activityType;
-(id<_SFKillWebContentProcessUIActivityDelegate>)webProcessDelegate;
-(void)setWebProcessDelegate:(id<_SFKillWebContentProcessUIActivityDelegate>)arg1 ;
-(id)_systemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)performActivity;
@end
