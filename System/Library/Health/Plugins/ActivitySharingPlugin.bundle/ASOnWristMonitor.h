/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASOnWristMonitorDelegate;
@interface ASOnWristMonitor : NSObject {

	id<ASOnWristMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASOnWristMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ASOnWristMonitorDelegate>)arg1 ;
-(id<ASOnWristMonitorDelegate>)delegate;
-(void)getWristState:(/*^block*/id)arg1 ;
@end

