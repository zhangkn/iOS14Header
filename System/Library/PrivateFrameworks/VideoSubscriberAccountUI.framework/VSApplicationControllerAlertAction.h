/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSApplicationControllerAlertAction : NSObject {

	NSString* _title;
	long long _style;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSString * title;               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id callback;                    //@synthesize callback=_callback - In the implementation block
+(long long)styleFromString:(id)arg1 ;
-(void)setCallback:(id)arg1 ;
-(id)callback;
-(NSString *)title;
-(long long)style;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
@end

