/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIDV/DIAttributeText.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DIAttributeSMSOTP : DIAttributeText <NSSecureCoding> {

	unsigned long long _validityInSeconds;

}

@property (assign,nonatomic) unsigned long long validityInSeconds;              //@synthesize validityInSeconds=_validityInSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDefaultValue:(id)arg1 ;
-(id)defaultValue;
-(void)setCurrentValue:(id)arg1 ;
-(id)submissionString;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)getCurrentValue;
-(unsigned long long)validityInSeconds;
-(void)setValidityInSeconds:(unsigned long long)arg1 ;
@end
