/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXActionActivity.h>

@class NSString, UIImage, UIPasteboard;

@interface SXPasteboardActionActivity : NSObject <SXActionActivity> {

	NSString* _label;
	unsigned long long _type;
	UIImage* _image;
	UIPasteboard* _pasteboard;
	NSString* _string;

}

@property (nonatomic,copy,readonly) UIPasteboard * pasteboard;              //@synthesize pasteboard=_pasteboard - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;                      //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)string;
-(UIPasteboard *)pasteboard;
-(unsigned long long)type;
-(UIImage *)image;
-(NSString *)label;
-(void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2 ;
-(id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 pasteboard:(id)arg3 string:(id)arg4 ;
@end

