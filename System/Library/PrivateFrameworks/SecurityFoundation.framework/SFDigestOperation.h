/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol SFDigestOperation <NSObject,NSCopying,NSSecureCoding>
@property (copy,readonly) NSData * hashValue; 
@required
+(long long)blockSize;
+(id)digest:(id)arg1;
+(long long)outputSize;
-(void)addData:(id)arg1;
-(NSData *)hashValue;

@end
