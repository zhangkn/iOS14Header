/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface _SKUIFontDescriptorCacheKey : NSObject {

	const CFStringRef _textStyle;
	NSString* _sizeCategory;

}

@property (nonatomic,readonly) const CFStringRef textStyle;              //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) NSString * sizeCategory;                  //@synthesize sizeCategory=_sizeCategory - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sizeCategory;
-(unsigned long long)hash;
-(const CFStringRef)textStyle;
-(id)initWithTextStyle:(const CFStringRef)arg1 sizeCategory:(id)arg2 ;
@end
