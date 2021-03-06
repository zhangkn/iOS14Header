/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MXCallStackTree : NSObject <NSSecureCoding> {

	BOOL _callStackPerThread;
	NSArray* _callStackThreads;

}

@property (readonly) NSArray * callStackThreads;              //@synthesize callStackThreads=_callStackThreads - In the implementation block
@property (readonly) BOOL callStackPerThread;                 //@synthesize callStackPerThread=_callStackPerThread - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)JSONRepresentation;
-(id)initWithThreadArray:(id)arg1 aggregatedByProcess:(BOOL)arg2 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)callStackThreads;
-(BOOL)callStackPerThread;
@end

