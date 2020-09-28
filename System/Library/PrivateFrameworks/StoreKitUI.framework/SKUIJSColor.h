/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSColor.h>

@protocol SKUIJSColor <JSExport>
@property (nonatomic,readonly) unsigned long long red; 
@property (nonatomic,readonly) unsigned long long green; 
@property (nonatomic,readonly) unsigned long long blue; 
@property (nonatomic,readonly) double alpha; 
@required
-(unsigned long long)green;
-(double)alpha;
-(unsigned long long)blue;
-(unsigned long long)red;

@end


@interface SKUIJSColor : IKJSObject <SKUIJSColor> {

	unsigned long long _red;
	unsigned long long _green;
	unsigned long long _blue;
	double _alpha;

}

@property (nonatomic,readonly) unsigned long long red;                //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) unsigned long long green;              //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) unsigned long long blue;               //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;                          //@synthesize alpha=_alpha - In the implementation block
-(unsigned long long)green;
-(double)alpha;
-(unsigned long long)blue;
-(unsigned long long)red;
-(id)description;
-(id)initWithAppContext:(id)arg1 color:(id)arg2 ;
@end
