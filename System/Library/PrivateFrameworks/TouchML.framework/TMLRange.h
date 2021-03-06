/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLRangeJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLRange : NSObject <TMLRangeJSExports, NSCopying> {

	NSRange _range;

}

@property (nonatomic,readonly) unsigned long long location; 
@property (nonatomic,readonly) unsigned long long length; 
+(void)initializeJSContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)location;
-(unsigned long long)length;
-(id)initWithRange:(NSRange)arg1 ;
-(id)description;
-(id)NSRangeValue;
@end

