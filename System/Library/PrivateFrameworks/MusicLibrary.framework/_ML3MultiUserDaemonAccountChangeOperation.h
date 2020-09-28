/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MSVAsyncOperation.h>

@protocol _ML3MultiUserDaemonAccountChangeOperationDelegate, MLMediaLibraryAccountChangeObserver;
@class NSString;

@interface _ML3MultiUserDaemonAccountChangeOperation : MSVAsyncOperation {

	NSString* _initialDSID;
	NSString* _finalDSID;
	id<_ML3MultiUserDaemonAccountChangeOperationDelegate> _delegate;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;

}

@property (nonatomic,retain) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;                      //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialDSID;                                                      //@synthesize initialDSID=_initialDSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * finalDSID;                                                        //@synthesize finalDSID=_finalDSID - In the implementation block
@property (assign,nonatomic,__weak) id<_ML3MultiUserDaemonAccountChangeOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(void)setDelegate:(id<_ML3MultiUserDaemonAccountChangeOperationDelegate>)arg1 ;
-(id<_ML3MultiUserDaemonAccountChangeOperationDelegate>)delegate;
-(void)execute;
-(id)initWithInitialDSID:(id)arg1 finalDSID:(id)arg2 accountChangeObserver:(id)arg3 ;
-(NSString *)finalDSID;
-(NSString *)initialDSID;
@end
