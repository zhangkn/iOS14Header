/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivity.h>

@class SFCustomActivityProxy;

@interface SFHostApplicationCustomActivity : _SFActivity {

	SFCustomActivityProxy* _activityProxy;

}

@property (nonatomic,readonly) SFCustomActivityProxy * activityProxy;              //@synthesize activityProxy=_activityProxy - In the implementation block
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(id)initWithActivityProxy:(id)arg1 ;
-(SFCustomActivityProxy *)activityProxy;
@end

