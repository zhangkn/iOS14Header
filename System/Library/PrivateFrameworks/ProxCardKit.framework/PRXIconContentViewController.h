/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProxCardKit/PRXCardContentViewController.h>

@class NSArray, NSString, PRXIconContentView;

@interface PRXIconContentViewController : PRXCardContentViewController {

	long long _imageStyle;
	NSArray* _images;
	NSString* _bodyText;

}

@property (nonatomic,readonly) PRXIconContentView * contentView; 
@property (assign,nonatomic) long long imageStyle;                            //@synthesize imageStyle=_imageStyle - In the implementation block
@property (nonatomic,copy) NSArray * images;                                  //@synthesize images=_images - In the implementation block
@property (nonatomic,copy) NSString * bodyText;                               //@synthesize bodyText=_bodyText - In the implementation block
+(Class)contentViewClass;
-(NSArray *)images;
-(id)initWithContentView:(id)arg1 ;
-(NSString *)bodyText;
-(void)setImages:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)setBodyText:(NSString *)arg1 ;
-(void)_updateImageViews;
-(long long)imageStyle;
-(void)setImageStyle:(long long)arg1 ;
-(void)_updateBodyLabel;
@end

