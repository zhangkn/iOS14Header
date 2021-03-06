/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MBDeviceTransferTask.h>
#import <libobjc.A.dylib/MBManagerDelegate.h>

@interface MBSourceDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate>
-(void)_cancel;
-(void)cancel;
-(void)_finishWithError:(id)arg1 ;
-(void)_start;
-(void)start;
-(long long)taskType;
-(void)resume;
-(id)initWithFileTransferSession:(id)arg1 ;
-(void)manager:(id)arg1 didFinishDeviceTransferWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferKeychainTransfer:(id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferPreflight:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 didUpdateDeviceTransferProgress:(id)arg2 ;
@end

