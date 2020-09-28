/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INParameter, INImage;

@interface INParameterImage : NSObject <NSCopying> {

	INParameter* _parameter;
	INImage* _image;

}

@property (nonatomic,copy,readonly) INParameter * parameter;              //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,copy,readonly) INImage * image;                      //@synthesize image=_image - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithParameter:(id)arg1 image:(id)arg2 ;
-(INImage *)image;
-(INParameter *)parameter;
@end
