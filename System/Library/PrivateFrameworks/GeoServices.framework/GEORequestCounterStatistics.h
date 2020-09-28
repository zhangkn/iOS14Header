/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface GEORequestCounterStatistics : NSObject <NSSecureCoding> {

	unsigned long long _bytesTransmitted;
	unsigned long long _bytesReceived;
	NSMutableDictionary* _resultCounts;

}

@property (nonatomic,readonly) unsigned long long bytesTransmitted;              //@synthesize bytesTransmitted=_bytesTransmitted - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesReceived;                 //@synthesize bytesReceived=_bytesReceived - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)incrementBytesTransmitted:(unsigned long long)arg1 ;
-(void)incrementBytesReceived:(unsigned long long)arg1 ;
-(void)incrementCount:(unsigned long long)arg1 forResult:(unsigned char)arg2 ;
-(unsigned long long)countForResult:(unsigned char)arg1 ;
-(unsigned long long)bytesTransmitted;
-(unsigned long long)bytesReceived;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
