/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GCColor : NSObject <NSCopying, NSSecureCoding> {

	float _red;
	float _green;
	float _blue;

}

@property (readonly) float red;                //@synthesize red=_red - In the implementation block
@property (readonly) float green;              //@synthesize green=_green - In the implementation block
@property (readonly) float blue;               //@synthesize blue=_blue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)green;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(float)blue;
-(void)encodeWithCoder:(id)arg1 ;
-(float)red;
-(id)description;
@end

