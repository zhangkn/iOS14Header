/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HKSPAnalyticsWindDownEventDataWrapper : NSObject <NSCoding, NSSecureCoding> {

	NSArray* _eventDatums;

}

@property (nonatomic,retain) NSArray * eventDatums;              //@synthesize eventDatums=_eventDatums - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEventDatums:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEventDatums:(id)arg1 ;
-(NSArray *)eventDatums;
@end

