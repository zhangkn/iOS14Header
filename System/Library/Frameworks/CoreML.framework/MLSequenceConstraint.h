/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLFeatureDescription;

@interface MLSequenceConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {

	MLFeatureDescription* _valueDescription;
	NSRange _countRange;

}

@property (nonatomic,readonly) MLFeatureDescription * valueDescription;              //@synthesize valueDescription=_valueDescription - In the implementation block
@property (nonatomic,readonly) NSRange countRange;                                   //@synthesize countRange=_countRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithValueDescription:(id)arg1 countRange:(NSRange)arg2 ;
-(NSRange)countRange;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MLFeatureDescription *)valueDescription;
@end

