/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UIView, UIStoryboardPreviewingSegueTemplate, UIStoryboardSegueTemplate;

@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <NSCoding> {

	UIView* _sender;
	UIStoryboardPreviewingSegueTemplate* _previewTemplate;
	UIStoryboardSegueTemplate* _commitTemplate;

}

@property (assign,nonatomic,__weak) UIView * sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic,__weak) UIStoryboardPreviewingSegueTemplate * previewTemplate;              //@synthesize previewTemplate=_previewTemplate - In the implementation block
@property (assign,nonatomic,__weak) UIStoryboardSegueTemplate * commitTemplate;                         //@synthesize commitTemplate=_commitTemplate - In the implementation block
-(UIView *)sender;
-(void)setSender:(UIView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIStoryboardPreviewingSegueTemplate *)previewTemplate;
-(UIStoryboardSegueTemplate *)commitTemplate;
-(void)setPreviewTemplate:(UIStoryboardPreviewingSegueTemplate *)arg1 ;
-(void)setCommitTemplate:(UIStoryboardSegueTemplate *)arg1 ;
@end

