/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSABaseApplicationDelegate.h>

@interface TSAApplicationDelegate : TSABaseApplicationDelegate {

	BOOL _terminating;
	BOOL _inBackground;
	BOOL _activating;
	/*^block*/id _alertCompletionBlock;
	BOOL _hasNotifiedEnterBackground;

}

@property (nonatomic,copy) id alertCompletionBlock;               //@synthesize alertCompletionBlock=_alertCompletionBlock - In the implementation block
@property (getter=isInBackground) BOOL inBackground;              //@synthesize inBackground=_inBackground - In the implementation block
@property (getter=isActivating) BOOL activating;                  //@synthesize activating=_activating - In the implementation block
@property (getter=isTerminating) BOOL terminating;                //@synthesize terminating=_terminating - In the implementation block
@property (assign) BOOL hasNotifiedEnterBackground;               //@synthesize hasNotifiedEnterBackground=_hasNotifiedEnterBackground - In the implementation block
+(id)sharedDelegate;
-(void)dealloc;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(id)init;
-(void)setInBackground:(BOOL)arg1 ;
-(BOOL)isInBackground;
-(BOOL)isTerminating;
-(void)setTerminating:(BOOL)arg1 ;
-(void)setActivating:(BOOL)arg1 ;
-(BOOL)isActivating;
-(BOOL)centerOnInitialSelection;
-(void)persistenceError:(id)arg1 ;
-(id)previewImageNameForDocumentType:(id)arg1 ;
-(id)previewImageNameForNativeDocument;
-(id)previewImageNameForEncryptedNativeDocument;
-(id)noDocumentsImagePath;
-(id)image32IconForTXTFiles;
-(id)stringForImportingDocument;
-(id)alertCompletionBlock;
-(void)setAlertCompletionBlock:(id)arg1 ;
-(BOOL)hasNotifiedEnterBackground;
-(void)setHasNotifiedEnterBackground:(BOOL)arg1 ;
@end

