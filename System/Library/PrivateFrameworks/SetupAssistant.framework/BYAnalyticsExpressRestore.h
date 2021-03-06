/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BYAnalyticsExpressRestore : NSObject {

	BOOL _paneShown;
	BOOL _offeredBackup;
	unsigned long long _restoreChoice;

}

@property (assign,nonatomic) BOOL paneShown;                                //@synthesize paneShown=_paneShown - In the implementation block
@property (assign,nonatomic) unsigned long long restoreChoice;              //@synthesize restoreChoice=_restoreChoice - In the implementation block
@property (assign,nonatomic) BOOL offeredBackup;                            //@synthesize offeredBackup=_offeredBackup - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)eventPayload;
-(unsigned long long)restoreChoice;
-(BOOL)paneShown;
-(BOOL)offeredBackup;
-(void)setPaneShown:(BOOL)arg1 ;
-(void)setRestoreChoice:(unsigned long long)arg1 ;
-(void)setOfferedBackup:(BOOL)arg1 ;
@end

