/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDocCamViewControllerDelegate <NSObject>
@optional
-(void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4 closeViewController:(BOOL)arg5;
-(void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2;
-(void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4;
-(id)documentCameraControllerImageCache;
-(void)documentCameraControllerDidRetake:(id)arg1 pageCount:(unsigned long long)arg2;

@required
-(BOOL)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;
-(void)documentCameraControllerDidCancel:(id)arg1;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)scanDataDelegateWithIdentifier:(id)arg1;

@end

