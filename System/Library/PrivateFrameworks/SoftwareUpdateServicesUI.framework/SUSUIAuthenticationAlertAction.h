/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class SUDownload, SUAutoInstallOperation;

@interface SUSUIAuthenticationAlertAction : BSAction {

	BOOL _loaded;
	SUDownload* _download;
	SUAutoInstallOperation* _autoInstallOperation;
	BOOL _forInstallTonight;
	BOOL _canDeferInstallation;

}

@property (nonatomic,retain,readonly) SUDownload * download; 
@property (nonatomic,retain,readonly) SUAutoInstallOperation * autoInstallOperation; 
@property (nonatomic,readonly) BOOL forInstallTonight; 
@property (nonatomic,readonly) BOOL canDeferInstallation; 
-(SUDownload *)download;
-(void)_loadIfNecessary;
-(void)fireCompletionIfNecessaryForResult:(BOOL)arg1 ;
-(id)initWithDownload:(id)arg1 autoInstallOperation:(id)arg2 forInstallTonight:(BOOL)arg3 canDeferInstallation:(BOOL)arg4 completionQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(SUAutoInstallOperation *)autoInstallOperation;
-(BOOL)forInstallTonight;
-(BOOL)canDeferInstallation;
@end

