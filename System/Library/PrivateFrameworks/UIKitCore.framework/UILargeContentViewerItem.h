/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol UILargeContentViewerItem <NSObject>
@property (nonatomic,readonly) BOOL showsLargeContentViewer; 
@property (nonatomic,copy,readonly) NSString * largeContentTitle; 
@property (nonatomic,readonly) UIImage * largeContentImage; 
@property (nonatomic,readonly) BOOL scalesLargeContentImage; 
@property (nonatomic,readonly) UIEdgeInsets largeContentImageInsets; 
@required
-(UIEdgeInsets)largeContentImageInsets;
-(BOOL)showsLargeContentViewer;
-(NSString *)largeContentTitle;
-(BOOL)scalesLargeContentImage;
-(UIImage *)largeContentImage;

@end
