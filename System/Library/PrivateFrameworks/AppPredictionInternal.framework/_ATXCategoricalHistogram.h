/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface _ATXCategoricalHistogram : NSObject <NSSecureCoding> {

	unsigned _count;
	unsigned _capacity;
	SCD_Struct_AT6* _entries;
	NSDictionary* _lastDates;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)init;
-(void)enumerate:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)getLastDatesByCategoryId;
@end
