/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewControllerDelegate <NSObject>
@optional
-(void)previewControllerWillDismiss:(id)arg1;
-(void)previewControllerDidDismiss:(id)arg1;
-(BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
-(CGRect*)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
-(long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
-(void)previewController:(id)arg1 didUpdateContentsOfPreviewItem:(id)arg2;
-(void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;

@end
