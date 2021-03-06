/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DictationOfflineStatusObserverDelegate;
@interface DictationOfflineStatusObserver : NSObject {

	id<DictationOfflineStatusObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DictationOfflineStatusObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<DictationOfflineStatusObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<DictationOfflineStatusObserverDelegate>)delegate;
-(void)updateOfflineDictationStatus;
@end

