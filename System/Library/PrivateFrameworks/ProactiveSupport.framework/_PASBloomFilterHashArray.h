/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASBloomFilterHashArray : NSObject {

	unsigned long long _size;
	int* _data;

}

@property (nonatomic,readonly) int* hashes; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initInternal;
-(void)dealloc;
-(int*)hashes;
@end
