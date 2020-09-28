/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSharedAssetsControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<CKSharedAssetsControllerDelegate> delegate; 
@required
-(void)parentScrollViewDidScroll:(CGPoint)arg1;
-(void)updateAttachmentItems:(id)arg1;
-(CGSize*)contentSizeThatFits:(CGSize)arg1;
-(BOOL)isDisplayingAttachmentContent;
-(unsigned long long)assetType;
-(void)setDelegate:(id)arg1;
-(id<CKSharedAssetsControllerDelegate>)delegate;

@end
