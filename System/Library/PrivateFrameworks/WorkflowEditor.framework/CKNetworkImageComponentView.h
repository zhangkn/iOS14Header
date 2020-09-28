/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIImageView.h>

@class CKNetworkImageSpecifier;

@interface CKNetworkImageComponentView : UIImageView {

	BOOL _inReusePool;
	id _download;
	CKNetworkImageSpecifier* _specifier;

}

@property (nonatomic,retain) CKNetworkImageSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
-(void)setSpecifier:(CKNetworkImageSpecifier *)arg1 ;
-(CKNetworkImageSpecifier *)specifier;
-(void)dealloc;
-(void)layoutSubviews;
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(void)didDownloadImage:(CGImageRef)arg1 error:(id)arg2 ;
-(void)_startDownloadIfNotInReusePool;
-(void)updateContentsRect;
@end
