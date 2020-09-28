/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFBase64Codec : NSObject
+(const char*)decoder;
+(id)encodeUuid:(id)arg1 ;
+(unsigned long long)encodedUuidLength;
+(BOOL)appendPadding;
+(id)encodeBytes:(const void*)arg1 withLength:(unsigned long long)arg2 ;
+(BOOL)checkTerminators:(long long)arg1 expected:(long long)arg2 ;
+(BOOL)decodeString:(id)arg1 with:(/*^block*/id)arg2 ;
+(id)decodeString:(id)arg1 ;
+(id)decodeUuid:(id)arg1 ;
+(id)encodeData:(id)arg1 ;
+(const char*)alphabet;
-(id)init;
@end
