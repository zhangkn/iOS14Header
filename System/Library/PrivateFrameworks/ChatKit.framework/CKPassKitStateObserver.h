/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKPassKitStateObserver : NSObject {

	BOOL _passKitUIPresented;
	BOOL _iTunesStoreDialogPresented;

}

@property (assign,nonatomic) BOOL passKitUIPresented;                      //@synthesize passKitUIPresented=_passKitUIPresented - In the implementation block
@property (assign,nonatomic) BOOL iTunesStoreDialogPresented;              //@synthesize iTunesStoreDialogPresented=_iTunesStoreDialogPresented - In the implementation block
+(id)sharedInstance;
-(BOOL)passKitUIPresented;
-(BOOL)iTunesStoreDialogPresented;
-(void)setITunesStoreDialogPresented:(BOOL)arg1 ;
-(void)setPassKitUIPresented:(BOOL)arg1 ;
-(void)dealloc;
-(void)_passKitUIDismissed;
-(void)_iTunesStoreDialogDidDismiss;
-(void)_iTunesStoreDialogWillDisplay;
-(void)_passKitUIPresented;
-(id)init;
-(void)prepareForResume;
-(id)description;
@end
