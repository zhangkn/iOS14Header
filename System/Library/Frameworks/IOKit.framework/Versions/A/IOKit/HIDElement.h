/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/IOKit.framework/Versions/A/IOKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOKit/IOKit-Structs.h>
@class NSArray, NSData;

@interface HIDElement : NSObject {

	SCD_Struct_HI12* _element;

}

@property (readonly) HIDElement * parent; 
@property (readonly) NSArray * children; 
@property (assign) long long integerValue; 
@property (assign) NSData * dataValue; 
@property (readonly) long long type; 
@property (readonly) long long usagePage; 
@property (readonly) long long usage; 
@property (readonly) long long reportID; 
@property (readonly) long long reportSize; 
@property (readonly) long long unit; 
@property (readonly) long long unitExponent; 
@property (readonly) long long logicalMin; 
@property (readonly) long long logicalMax; 
@property (readonly) long long physicalMin; 
@property (readonly) long long physicalMax; 
@property (readonly) unsigned long long timestamp; 
-(void)setIntegerValue:(long long)arg1 ;
-(long long)usagePage;
-(long long)integerValue;
-(NSArray *)children;
-(long long)unit;
-(NSData *)dataValue;
-(void)setDataValue:(NSData *)arg1 ;
-(HIDElement *)parent;
-(long long)usage;
-(unsigned long long)timestamp;
-(long long)type;
-(unsigned)cookie;
-(long long)reportID;
-(id)description;
-(long long)physicalMax;
-(long long)unitExponent;
-(long long)physicalMin;
-(double)scaleValue:(long long)arg1 ;
-(long long)reportSize;
-(long long)logicalMax;
-(long long)logicalMin;
-(void)setValueRef:(IOHIDValueRef)arg1 ;
-(IOHIDValueRef)valueRef;
-(unsigned long long)_cfTypeID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
