/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSString, NSArray;

@interface PKContactPickerItem : NSObject <NSSecureCoding> {

	NSMutableSet* _acceptedValues;
	NSString* _displayName;
	NSString* _submissionValue;
	NSArray* _alternativeAcceptedValues;

}

@property (nonatomic,copy,readonly) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * submissionValue;                  //@synthesize submissionValue=_submissionValue - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeAcceptedValues;              //@synthesize alternativeAcceptedValues=_alternativeAcceptedValues - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)displayName;
-(NSString *)submissionValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)acceptedValues;
-(BOOL)isValueAccepted:(id)arg1 ;
-(NSArray *)alternativeAcceptedValues;
-(id)description;
@end

