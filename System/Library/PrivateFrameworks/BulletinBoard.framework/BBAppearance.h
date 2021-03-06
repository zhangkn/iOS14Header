/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BBColor, BBImage;

@interface BBAppearance : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	BBColor* _titleColor;
	BBImage* _image;
	BBColor* _color;
	long long _style;
	NSString* _viewClassName;

}

@property (nonatomic,copy) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) BBColor * titleColor;                  //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) BBImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) BBColor * color;                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * viewClassName;              //@synthesize viewClassName=_viewClassName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)appearanceWithTitle:(id)arg1 ;
-(void)setImage:(BBImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(long long)style;
-(id)replacementObjectForCoder:(id)arg1 ;
-(BBColor *)titleColor;
-(NSString *)viewClassName;
-(BBImage *)image;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BBColor *)color;
-(void)setViewClassName:(NSString *)arg1 ;
-(void)setColor:(BBColor *)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitleColor:(BBColor *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
@end

